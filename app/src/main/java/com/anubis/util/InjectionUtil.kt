package com.anubis.util

import com.anubis.data.AppsRepository
import com.anubis.data.FakeLocationRepository
import com.anubis.data.GmsRepository

import com.anubis.view.apps.AppsFactory
import com.anubis.view.fake.FakeLocationFactory
import com.anubis.view.gms.GmsFactory
import com.anubis.view.list.ListFactory



object InjectionUtil {

    private val appsRepository = AppsRepository()



    private val gmsRepository = GmsRepository()

    private val fakeLocationRepository = FakeLocationRepository()

    fun getAppsFactory() : AppsFactory {
        return AppsFactory(appsRepository)
    }

    fun getListFactory(): ListFactory {
        return ListFactory(appsRepository)
    }


    fun getGmsFactory():GmsFactory{
        return GmsFactory(gmsRepository)
    }

    fun getFakeLocationFactory():FakeLocationFactory{
        return FakeLocationFactory(fakeLocationRepository)
    }
}