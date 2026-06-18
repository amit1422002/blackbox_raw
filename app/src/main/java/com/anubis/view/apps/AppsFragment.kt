package com.anubis.view.apps

import android.app.Activity
import android.content.Intent
import android.graphics.Point
import android.net.Uri
import android.os.Build
import android.os.Bundle
import android.provider.DocumentsContract
import android.text.TextUtils
import android.util.Log
import android.view.LayoutInflater
import android.view.MotionEvent
import android.view.View
import android.view.ViewGroup
import androidx.activity.result.contract.ActivityResultContracts
import androidx.appcompat.app.AlertDialog
import androidx.appcompat.widget.AppCompatButton
import androidx.appcompat.widget.PopupMenu
import androidx.core.os.bundleOf
import androidx.fragment.app.Fragment
import androidx.lifecycle.ViewModelProvider
import androidx.recyclerview.widget.GridLayoutManager
import androidx.recyclerview.widget.ItemTouchHelper
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import cbfg.rvadapter.RVAdapter
import com.afollestad.materialdialogs.MaterialDialog
import com.afollestad.materialdialogs.input.input
import com.anubis.loader.AnubisCore
import com.anubis.R
import com.anubis.bean.AppInfo
import com.anubis.bean.ObbProgress
import com.anubis.databinding.FragmentAppsBinding
import com.anubis.util.InjectionUtil
import com.anubis.util.ShortcutUtil
import com.anubis.skin.AnubisLoaderImportHelper
import com.anubis.loader.utils.StoragePermissionHelper
import com.anubis.skin.BgmiSkin
import com.anubis.skin.DeviceSpoofHelper
import com.anubis.skin.CloneDataHelper
import com.anubis.skin.GuestAccountBackupHelper
import com.anubis.skin.RecoverGuestAdapter
import com.anubis.util.inflate
import com.anubis.util.MemoryManager
import com.anubis.util.toast
import com.anubis.view.base.LoadingActivity
import com.anubis.view.main.MainActivity
import java.util.*
import kotlin.math.abs



class AppsFragment : Fragment() {

    var userID: Int = 0

    private lateinit var viewModel: AppsViewModel

    private lateinit var mAdapter: RVAdapter<AppInfo>

    private val viewBinding: FragmentAppsBinding by inflate()

    private var popupMenu: PopupMenu? = null

    private var pendingObbPackage: String? = null

    private var obbProgressDialog: AlertDialog? = null
    private var obbProgressBar: android.widget.ProgressBar? = null
    private var obbProgressText: android.widget.TextView? = null

    private val obbFolderPicker = registerForActivityResult(ActivityResultContracts.StartActivityForResult()) { result ->
        val packageName = pendingObbPackage
        pendingObbPackage = null
        if (packageName == null || result.resultCode != Activity.RESULT_OK) {
            return@registerForActivityResult
        }
        val uri = result.data?.data ?: return@registerForActivityResult
        try {
            val flags = Intent.FLAG_GRANT_READ_URI_PERMISSION or Intent.FLAG_GRANT_WRITE_URI_PERMISSION
            requireContext().contentResolver.takePersistableUriPermission(uri, flags)
        } catch (e: SecurityException) {
            Log.w(TAG, "Could not persist OBB folder permission: ${e.message}")
        }
        viewModel.copyObb(packageName, uri, userID)
    }

    companion object {
        private const val TAG = "AppsFragment"
        
        fun newInstance(userID:Int): AppsFragment {
            val fragment = AppsFragment()
            val bundle = bundleOf("userID" to userID)
            fragment.arguments = bundle
            return fragment
        }
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        try {
            super.onCreate(savedInstanceState)
            viewModel =
                ViewModelProvider(this, InjectionUtil.getAppsFactory()).get(AppsViewModel::class.java)
            userID = requireArguments().getInt("userID", 0)
        } catch (e: Exception) {
            Log.e(TAG, "Error in onCreate: ${e.message}")
        }
    }

    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View {
        try {
            viewBinding.stateView.showEmpty()

            mAdapter =
                RVAdapter<AppInfo>(requireContext(), AppsAdapter()).bind(viewBinding.recyclerView)

            viewBinding.recyclerView.adapter = mAdapter
            
            
            val layoutManager = GridLayoutManager(requireContext(), 4)
            layoutManager.isItemPrefetchEnabled = true
            layoutManager.initialPrefetchItemCount = 8
            viewBinding.recyclerView.layoutManager = layoutManager
            
            
            viewBinding.recyclerView.setItemViewCacheSize(20)
            viewBinding.recyclerView.setHasFixedSize(true)
            
            
            viewBinding.recyclerView.addOnScrollListener(object : RecyclerView.OnScrollListener() {
                override fun onScrollStateChanged(recyclerView: RecyclerView, newState: Int) {
                    try {
                        super.onScrollStateChanged(recyclerView, newState)
                        when (newState) {
                            RecyclerView.SCROLL_STATE_IDLE -> {
                                
                                MemoryManager.optimizeMemoryForRecyclerView()
                            }
                            RecyclerView.SCROLL_STATE_DRAGGING -> {
                                
                                
                            }
                            RecyclerView.SCROLL_STATE_SETTLING -> {
                                
                                
                            }
                        }
                    } catch (e: Exception) {
                        Log.e(TAG, "Error in scroll state change: ${e.message}")
                    }
                }
                
                override fun onScrolled(recyclerView: RecyclerView, dx: Int, dy: Int) {
                    try {
                        super.onScrolled(recyclerView, dx, dy)
                        
                        if (Math.abs(dy) > 100) {
                            
                            
                            
                            if (MemoryManager.isMemoryCritical()) {
                                Log.w(TAG, "Memory critical during fast scrolling, forcing GC")
                                MemoryManager.forceGarbageCollectionIfNeeded()
                            }
                        }
                    } catch (e: Exception) {
                        Log.e(TAG, "Error in scroll: ${e.message}")
                    }
                }
            })

            val touchCallBack = AppsTouchCallBack { from, to ->
                try {
                    onItemMove(from, to)
                    viewModel.updateSortLiveData.postValue(true)
                } catch (e: Exception) {
                    Log.e(TAG, "Error in touch callback: ${e.message}")
                }
            }

            val itemTouchHelper = ItemTouchHelper(touchCallBack)
            itemTouchHelper.attachToRecyclerView(viewBinding.recyclerView)

            mAdapter.setItemClickListener { _, data, _ ->
                try {
                    showLoading()
                    viewModel.launchApk(data.packageName, userID)
                } catch (e: Exception) {
                    Log.e(TAG, "Error launching app: ${e.message}")
                    hideLoading()
                }
            }

            interceptTouch()
            setOnLongClick()
            return viewBinding.root
        } catch (e: Exception) {
            Log.e(TAG, "Error in onCreateView: ${e.message}")
            
            return View(requireContext())
        }
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        try {
            super.onViewCreated(view, savedInstanceState)
            initData()
        } catch (e: Exception) {
            Log.e(TAG, "Error in onViewCreated: ${e.message}")
        }
    }

    override fun onStart() {
        try {
            super.onStart()
            
            viewModel.getInstalledAppsWithRetry(userID)
        } catch (e: Exception) {
            Log.e(TAG, "Error in onStart: ${e.message}")
        }
    }

    
    private fun interceptTouch() {
        try {
            val point = Point()
            var isScrolling = false
            var scrollStartTime = 0L
            
            viewBinding.recyclerView.setOnTouchListener { _, e ->
                try {
                    when (e.action) {
                        MotionEvent.ACTION_DOWN -> {
                            
                            isScrolling = false
                            scrollStartTime = System.currentTimeMillis()
                            point.set(0, 0)
                        }
                        
                        MotionEvent.ACTION_UP -> {
                            val scrollDuration = System.currentTimeMillis() - scrollStartTime
                            
                            
                            if (!isScrolling && !isMove(point, e) && scrollDuration < 500) {
                                try {
                                    popupMenu?.show()
                                } catch (e: Exception) {
                                    Log.e(TAG, "Error showing popup menu: ${e.message}")
                                }
                            }
                            
                            popupMenu = null
                            point.set(0, 0)
                            isScrolling = false
                        }

                        MotionEvent.ACTION_MOVE -> {
                            if (point.x == 0 && point.y == 0) {
                                point.x = e.rawX.toInt()
                                point.y = e.rawY.toInt()
                            }
                            
                            
                            if (isMove(point, e)) {
                                isScrolling = true
                                popupMenu?.dismiss()
                            }
                            
                            
                            isDownAndUp(point, e)
                        }
                    }
                } catch (e: Exception) {
                    Log.e(TAG, "Error in touch listener: ${e.message}")
                }
                return@setOnTouchListener false
            }
        } catch (e: Exception) {
            Log.e(TAG, "Error in interceptTouch: ${e.message}")
        }
    }

    private fun isMove(point: Point, e: MotionEvent): Boolean {
        return try {
            val max = 40

            val x = point.x
            val y = point.y

            val xU = abs(x - e.rawX)
            val yU = abs(y - e.rawY)
            xU > max || yU > max
        } catch (e: Exception) {
            Log.e(TAG, "Error in isMove: ${e.message}")
            false
        }
    }

    private fun isDownAndUp(point: Point, e: MotionEvent) {
        try {
            val min = 10
            val y = point.y
            val yU = y - e.rawY

            if (abs(yU) > min) {
                try {
                    (requireActivity() as? MainActivity)?.showFloatButton(yU < 0)
                } catch (e: Exception) {
                    Log.e(TAG, "Error showing/hiding float button: ${e.message}")
                }
            }
        } catch (e: Exception) {
            Log.e(TAG, "Error in isDownAndUp: ${e.message}")
        }
    }

    private fun onItemMove(fromPosition: Int, toPosition: Int) {
        try {
            
            val items = mAdapter.getItems()
            if (fromPosition < 0 || toPosition < 0 || 
                fromPosition >= items.size || toPosition >= items.size) {
                Log.w(TAG, "Invalid positions for move: from=$fromPosition, to=$toPosition, size=${items.size}")
                return
            }
            
            if (fromPosition < toPosition) {
                for (i in fromPosition until toPosition) {
                    try {
                        Collections.swap(items, i, i + 1)
                    } catch (e: Exception) {
                        Log.e(TAG, "Error swapping items at position $i: ${e.message}")
                        return
                    }
                }
            } else {
                for (i in fromPosition downTo toPosition + 1) {
                    try {
                        Collections.swap(items, i, i - 1)
                    } catch (e: Exception) {
                        Log.e(TAG, "Error swapping items at position $i: ${e.message}")
                        return
                    }
                }
            }
            
            try {
                mAdapter.notifyItemMoved(fromPosition, toPosition)
            } catch (e: Exception) {
                Log.e(TAG, "Error notifying item moved: ${e.message}")
                
                mAdapter.notifyDataSetChanged()
            }
        } catch (e: Exception) {
            Log.e(TAG, "Error in onItemMove: ${e.message}")
        }
    }

    private fun setOnLongClick() {
        try {
            mAdapter.setItemLongClickListener { view, data, _ ->
                try {
                    popupMenu = PopupMenu(requireContext(),view).also {
                        it.inflate(R.menu.app_menu)
                        val isBgmi = BgmiSkin.isBgmi(data.packageName)
                        it.menu.findItem(R.id.app_copy_obb)?.isVisible = isBgmi
                        it.menu.findItem(R.id.app_copy_data)?.isVisible = isBgmi
                        it.menu.findItem(R.id.app_logout_account)?.isVisible = isBgmi
                        it.menu.findItem(R.id.app_reset_guest)?.isVisible = isBgmi
                        it.menu.findItem(R.id.app_recover_guest)?.isVisible = isBgmi
                        it.menu.findItem(R.id.app_change_imei)?.isVisible = isBgmi && userID == 0
                        it.setOnMenuItemClickListener { item ->
                            try {
                                when (item.itemId) {
                                    R.id.app_remove -> {
                                        if (data.isXpModule) {
                                            toast(R.string.uninstall_module_toast)
                                        } else {
                                            unInstallApk(data)
                                        }
                                    }

                                    R.id.app_clear -> {
                                        clearApk(data)
                                    }

                                    R.id.app_copy_obb -> {
                                        requestObbCopy(data)
                                    }

                                    R.id.app_copy_data -> {
                                        requestCopyData(data)
                                    }

                                    R.id.app_logout_account -> {
                                        requestBgmiLogout(data)
                                    }

                                    R.id.app_reset_guest -> {
                                        requestBgmiResetGuest(data)
                                    }

                                    R.id.app_recover_guest -> {
                                        requestBgmiRecoverGuest(data)
                                    }

                                    R.id.app_change_imei -> {
                                        requestBgmiChangeImei(data)
                                    }

                                    R.id.app_stop -> {
                                        stopApk(data)
                                    }

                                    R.id.app_shortcut -> {
                                        ShortcutUtil.createShortcut(requireContext(), userID, data)
                                    }
                                }
                                return@setOnMenuItemClickListener true
                            } catch (e: Exception) {
                                Log.e(TAG, "Error in menu item click: ${e.message}")
                                return@setOnMenuItemClickListener false
                            }
                        }
                        it.show()
                    }
                } catch (e: Exception) {
                    Log.e(TAG, "Error in long click: ${e.message}")
                }
                true
            }
        } catch (e: Exception) {
            Log.e(TAG, "Error in setOnLongClick: ${e.message}")
        }
    }
    
    private fun initData() {
        try {
            viewBinding.stateView.showLoading()
            viewModel.getInstalledApps(userID)
            viewModel.appsLiveData.observe(viewLifecycleOwner) {
                try {
                    if (it != null) {
                        mAdapter.setItems(it)
                        if (it.isEmpty()) {
                            viewBinding.stateView.showEmpty()
                        } else {
                            viewBinding.stateView.showContent()
                        }
                    }
                } catch (e: Exception) {
                    Log.e(TAG, "Error observing apps data: ${e.message}")
                }
            }

            viewModel.resultLiveData.observe(viewLifecycleOwner) {
                try {
                    if (!TextUtils.isEmpty(it)) {
                        hideObbProgressDialog()
                        hideLoading()
                        requireContext().toast(it)
                        viewModel.getInstalledAppsWithRetry(userID)
                        scanUser()
                    }
                } catch (e: Exception) {
                    Log.e(TAG, "Error observing result data: ${e.message}")
                }
            }

            viewModel.obbProgressLiveData.observe(viewLifecycleOwner) { progress ->
                try {
                    if (progress == null) {
                        hideObbProgressDialog()
                    } else {
                        showObbProgress(progress)
                    }
                } catch (e: Exception) {
                    Log.e(TAG, "Error observing OBB progress: ${e.message}")
                }
            }

            viewModel.obbPickerRequestLiveData.observe(viewLifecycleOwner) { packageName ->
                try {
                    if (!packageName.isNullOrBlank()) {
                        viewModel.obbPickerRequestLiveData.value = null
                        launchObbPicker(packageName)
                    }
                } catch (e: Exception) {
                    Log.e(TAG, "Error launching OBB picker: ${e.message}")
                }
            }

            viewModel.launchLiveData.observe(viewLifecycleOwner) {
                try {
                    it?.run {
                        hideLoading()
                        if (!it) {
                            toast(R.string.start_fail)
                        }
                    }
                } catch (e: Exception) {
                    Log.e(TAG, "Error observing launch data: ${e.message}")
                }
            }

            viewModel.updateSortLiveData.observe(viewLifecycleOwner) {
                try {
                    if (this::mAdapter.isInitialized) {
                        viewModel.updateApkOrder(userID, mAdapter.getItems())
                    }
                } catch (e: Exception) {
                    Log.e(TAG, "Error observing sort data: ${e.message}")
                }
            }
        } catch (e: Exception) {
            Log.e(TAG, "Error in initData: ${e.message}")
        }
    }

    override fun onStop() {
        try {
            super.onStop()
            viewModel.resultLiveData.value = null
            viewModel.launchLiveData.value = null
        } catch (e: Exception) {
            Log.e(TAG, "Error in onStop: ${e.message}")
        }
    }

    private fun unInstallApk(info: AppInfo) {
        try {
            MaterialDialog(requireContext()).show {
                title(R.string.uninstall_app)
                message(text = getString(R.string.uninstall_app_hint, info.name))
                positiveButton(R.string.done) {
                    try {
                        showLoading()
                        viewModel.unInstall(info.packageName, userID)
                    } catch (e: Exception) {
                        Log.e(TAG, "Error uninstalling app: ${e.message}")
                        hideLoading()
                    }
                }
                negativeButton(R.string.cancel)
            }
        } catch (e: Exception) {
            Log.e(TAG, "Error showing uninstall dialog: ${e.message}")
        }
    }

    
    private fun stopApk(info: AppInfo) {
        try {
            MaterialDialog(requireContext()).show {
                title(R.string.app_stop)
                message(text = getString(R.string.app_stop_hint,info.name))
                positiveButton(R.string.done) {
                    try {
                        AnubisCore.get().stopPackage(info.packageName, userID)
                        toast(getString(R.string.is_stop,info.name))
                    } catch (e: Exception) {
                        Log.e(TAG, "Error stopping app: ${e.message}")
                    }
                }
                negativeButton(R.string.cancel)
            }
        } catch (e: Exception) {
            Log.e(TAG, "Error showing stop dialog: ${e.message}")
        }
    }

    
    private fun clearApk(info: AppInfo) {
        try {
            MaterialDialog(requireContext()).show {
                title(R.string.app_clear)
                message(text = getString(R.string.app_clear_hint,info.name))
                positiveButton(R.string.done) {
                    try {
                        showLoading()
                        viewModel.clearApkData(info.packageName, userID)
                    } catch (e: Exception) {
                        Log.e(TAG, "Error clearing app data: ${e.message}")
                        hideLoading()
                    }
                }
                negativeButton(R.string.cancel)
            }
        } catch (e: Exception) {
            Log.e(TAG, "Error showing clear dialog: ${e.message}")
        }
    }

    private fun requestObbCopy(info: AppInfo) {
        try {
            val sourcePath = AnubisLoaderImportHelper.getObbSourceDir().absolutePath
            MaterialDialog(requireContext()).show {
                title(R.string.app_copy_obb)
                message(text = getString(R.string.anubisloader_obb_copy_hint, sourcePath))
                positiveButton(R.string.done) {
                    try {
                        viewModel.copyObbFromAnubisLoader(info.packageName, userID)
                    } catch (e: Exception) {
                        Log.e(TAG, "Error copying OBB: ${e.message}")
                    }
                }
                negativeButton(R.string.cancel)
            }
        } catch (e: Exception) {
            Log.e(TAG, "Error showing OBB copy dialog: ${e.message}")
        }
    }

    private fun requestCopyData(info: AppInfo) {
        if (!BgmiSkin.isBgmi(info.packageName)) {
            return
        }
        if (android.os.Build.VERSION.SDK_INT >= android.os.Build.VERSION_CODES.R
                && !StoragePermissionHelper.hasAllFilesAccess()) {
            MaterialDialog(requireContext()).show {
                title(R.string.app_copy_data)
                message(R.string.anubisloader_storage_required)
                positiveButton(R.string.done) {
                    StoragePermissionHelper.requestAllFilesAccess(requireActivity())
                }
                negativeButton(R.string.cancel)
            }
            return
        }
        try {
            val sourcePath = AnubisLoaderImportHelper.getDataSourceDir(info.packageName).absolutePath
            MaterialDialog(requireContext()).show {
                title(R.string.app_copy_data)
                message(text = getString(R.string.anubisloader_data_copy_hint, sourcePath))
                positiveButton(R.string.done) {
                    try {
                        viewModel.copyDataFromAnubisLoader(info.packageName, userID)
                    } catch (e: Exception) {
                        Log.e(TAG, "Error copying game data: ${e.message}")
                    }
                }
                negativeButton(R.string.cancel)
            }
        } catch (e: Exception) {
            Log.e(TAG, "Error showing data copy dialog: ${e.message}")
        }
    }

    private fun requestBgmiLogout(info: AppInfo) {
        if (!BgmiSkin.isBgmi(info.packageName)) {
            return
        }
        try {
            MaterialDialog(requireContext()).show {
                title(R.string.app_logout_account)
                message(R.string.bgmi_logout_confirm)
                positiveButton(R.string.done) {
                    try {
                        showLoading()
                        viewModel.logoutBgmiAccount(userID)
                    } catch (e: Exception) {
                        Log.e(TAG, "Error logging out BGMI: ${e.message}")
                        hideLoading()
                    }
                }
                negativeButton(R.string.cancel)
            }
        } catch (e: Exception) {
            Log.e(TAG, "Error showing BGMI logout dialog: ${e.message}")
        }
    }

    private fun requestBgmiResetGuest(info: AppInfo) {
        if (!BgmiSkin.isBgmi(info.packageName)) {
            return
        }
        try {
            val clonePath = CloneDataHelper.getCloneDataPath(
                requireContext().applicationContext, info.packageName, userID
            )
            MaterialDialog(requireContext()).show {
                title(R.string.reset_guest_bgmi)
                message(text = getString(R.string.reset_guest_bgmi_confirm, clonePath))
                positiveButton(R.string.done) {
                    try {
                        showLoading()
                        viewModel.resetGuestAccount(userID)
                    } catch (e: Exception) {
                        Log.e(TAG, "Error resetting BGMI guest: ${e.message}")
                        hideLoading()
                    }
                }
                negativeButton(R.string.cancel)
            }
        } catch (e: Exception) {
            Log.e(TAG, "Error showing BGMI reset guest dialog: ${e.message}")
        }
    }

    private fun requestBgmiChangeImei(info: AppInfo) {
        if (!BgmiSkin.isBgmi(info.packageName) || userID != 0) {
            return
        }
        try {
            val current = DeviceSpoofHelper.readConfiguredImei(info.packageName, userID)
            MaterialDialog(requireContext()).show {
                title(R.string.change_imei_bgmi_title)
                message(text = getString(R.string.change_imei_bgmi_current, current))
                positiveButton(R.string.change_imei_bgmi_random) {
                    if (DeviceSpoofHelper.rotateImei(info.packageName, userID)) {
                        toast(R.string.change_imei_bgmi_done)
                    }
                }
                neutralButton(R.string.change_imei_bgmi_custom) {
                    showCustomImeiDialog(info)
                }
                negativeButton(R.string.cancel)
            }
        } catch (e: Exception) {
            Log.e(TAG, "Error showing change IMEI dialog: ${e.message}")
        }
    }

    private fun showCustomImeiDialog(info: AppInfo) {
        MaterialDialog(requireContext()).show {
            title(R.string.change_imei_bgmi_custom)
            input(
                hintRes = R.string.change_imei_bgmi_hint,
                prefill = DeviceSpoofHelper.readConfiguredImei(info.packageName, userID)
            ) { _, text ->
                if (DeviceSpoofHelper.setCustomImei(info.packageName, userID, text.toString())) {
                    toast(R.string.change_imei_bgmi_done)
                } else {
                    toast(R.string.change_imei_bgmi_fail)
                }
            }
            positiveButton(R.string.done)
            negativeButton(R.string.cancel)
        }
    }

    private fun requestBgmiRecoverGuest(info: AppInfo) {
        if (!BgmiSkin.isBgmi(info.packageName)) {
            return
        }
        try {
            showLoading()
            Thread({
                val backups = GuestAccountBackupHelper.listBackups()
                requireActivity().runOnUiThread {
                    hideLoading()
                    showRecoverGuestDialog(backups)
                }
            }, "bgmi-list-guest-backups").start()
        } catch (e: Exception) {
            Log.e(TAG, "Error listing guest backups: ${e.message}")
            hideLoading()
        }
    }

    private fun showRecoverGuestDialog(backups: List<GuestAccountBackupHelper.GuestBackup>) {
        if (backups.isEmpty()) {
            toast(R.string.recover_guest_bgmi_none)
            return
        }
        try {
            val content = layoutInflater.inflate(R.layout.dialog_recover_guest, null)
            val list = content.findViewById<RecyclerView>(R.id.recover_guest_list)
            val selectedPanel = content.findViewById<View>(R.id.recover_selected_panel)
            val selectedSummary = content.findViewById<android.widget.TextView>(R.id.recover_selected_summary)
            val restoreBtn = content.findViewById<AppCompatButton>(R.id.recover_btn_restore)
            val cancelBtn = content.findViewById<AppCompatButton>(R.id.recover_btn_cancel)

            list.layoutManager = LinearLayoutManager(requireContext())
            val density = resources.displayMetrics.density
            val listHeight = minOf(backups.size * 76f * density, 280f * density).toInt()
            list.layoutParams = list.layoutParams.apply {
                height = maxOf(listHeight, (76f * density).toInt())
            }

            val adapter = RecoverGuestAdapter(backups) { _, backup ->
                selectedPanel.visibility = View.VISIBLE
                selectedSummary.text = backup.getDisplayLabel(requireContext())
                restoreBtn.isEnabled = true
                restoreBtn.alpha = 1f
            }
            list.adapter = adapter

            val dialog = AlertDialog.Builder(requireContext()).setView(content).create()
            cancelBtn.setOnClickListener { dialog.dismiss() }

            restoreBtn.setOnClickListener {
                val picked = adapter.selectedBackup ?: return@setOnClickListener
                dialog.dismiss()
                MaterialDialog(requireContext()).show {
                    title(R.string.recover_guest_bgmi)
                    message(text = getString(R.string.recover_guest_bgmi_confirm, picked.getDisplayLabel(requireContext())))
                    positiveButton(R.string.done) {
                        try {
                            showLoading()
                            viewModel.restoreGuestAccount(userID, picked)
                        } catch (e: Exception) {
                            Log.e(TAG, "Error restoring BGMI guest: ${e.message}")
                            hideLoading()
                        }
                    }
                    negativeButton(R.string.cancel)
                }
            }

            dialog.show()
        } catch (e: Exception) {
            Log.e(TAG, "Error showing recover guest dialog: ${e.message}")
        }
    }

    private fun launchObbPicker(packageName: String) {
        try {
            pendingObbPackage = packageName
            val intent = Intent(Intent.ACTION_OPEN_DOCUMENT_TREE).apply {
                addFlags(Intent.FLAG_GRANT_READ_URI_PERMISSION)
                addFlags(Intent.FLAG_GRANT_WRITE_URI_PERMISSION)
                addFlags(Intent.FLAG_GRANT_PERSISTABLE_URI_PERMISSION)
                if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
                    putExtra(
                        DocumentsContract.EXTRA_INITIAL_URI,
                        Uri.parse(
                            "content://com.android.externalstorage.documents/document/primary:Android/obb/$packageName"
                        )
                    )
                }
            }
            obbFolderPicker.launch(intent)
        } catch (e: Exception) {
            pendingObbPackage = null
            Log.e(TAG, "Error opening OBB picker: ${e.message}")
            toast(R.string.obb_copy_fail)
        }
    }

    fun installApk(source: String) {
        try {
            showLoading()
            viewModel.install(source, userID)
        } catch (e: Exception) {
            Log.e(TAG, "Error installing APK: ${e.message}")
            hideLoading()
        }
    }

    private fun scanUser() {
        try {
            (requireActivity() as? MainActivity)?.scanUser()
        } catch (e: Exception) {
            Log.e(TAG, "Error scanning user: ${e.message}")
        }
    }

    private fun showLoading() {
        try {
            if(requireActivity() is LoadingActivity){
                (requireActivity() as LoadingActivity).showLoading()
            }
        } catch (e: Exception) {
            Log.e(TAG, "Error showing loading: ${e.message}")
        }
    }

    private fun hideLoading() {
        try {
            if(requireActivity() is LoadingActivity){
                (requireActivity() as LoadingActivity).hideLoading()
            }
        } catch (e: Exception) {
            Log.e(TAG, "Error hiding loading: ${e.message}")
        }
    }

    private fun showObbProgress(progress: ObbProgress) {
        hideLoading()
        if (obbProgressDialog == null) {
            val ctx = requireContext()
            val density = resources.displayMetrics.density
            val padding = (24 * density).toInt()
            val progressBar = android.widget.ProgressBar(ctx, null, android.R.attr.progressBarStyleHorizontal).apply {
                max = 100
                isIndeterminate = progress.percent < 0
            }
            val textView = android.widget.TextView(ctx).apply {
                setPadding(0, (16 * density).toInt(), 0, 0)
            }
            val layout = android.widget.LinearLayout(ctx).apply {
                orientation = android.widget.LinearLayout.VERTICAL
                setPadding(padding, padding, padding, padding)
                addView(progressBar)
                addView(textView)
            }
            obbProgressBar = progressBar
            obbProgressText = textView
            obbProgressDialog = AlertDialog.Builder(ctx)
                .setTitle(if (progress.fileName == "Copying..." || progress.totalBytes > 500_000_000L)
                    R.string.app_copy_data else R.string.app_copy_obb)
                .setView(layout)
                .setCancelable(false)
                .create()
            obbProgressDialog?.show()
        }
        if (progress.percent in 0..100) {
            obbProgressBar?.isIndeterminate = false
            obbProgressBar?.progress = progress.percent
        } else {
            obbProgressBar?.isIndeterminate = true
        }
        val sizeText = if (progress.totalBytes > 0) {
            getString(
                R.string.obb_copy_progress,
                progress.percent.coerceAtLeast(0),
                formatBytes(progress.copiedBytes),
                formatBytes(progress.totalBytes)
            )
        } else {
            formatBytes(progress.copiedBytes)
        }
        val fileText = getString(R.string.obb_copy_progress_file, progress.fileName)
        obbProgressText?.text = "$fileText\n$sizeText"
    }

    private fun hideObbProgressDialog() {
        obbProgressDialog?.dismiss()
        obbProgressDialog = null
        obbProgressBar = null
        obbProgressText = null
    }

    private fun formatBytes(bytes: Long): String {
        return when {
            bytes < 1024 -> "$bytes B"
            bytes < 1024 * 1024 -> String.format(Locale.US, "%.1f KB", bytes / 1024.0)
            bytes < 1024L * 1024 * 1024 -> String.format(Locale.US, "%.1f MB", bytes / (1024.0 * 1024))
            else -> String.format(Locale.US, "%.2f GB", bytes / (1024.0 * 1024 * 1024))
        }
    }
}
