_G.__BGMI_MOD_VER = 4
_G.__BGMI_GAME_MOD_PATCHED = false
_G.__BGMI_FEATURES_ACTIVE = false
_G.__BGMI_BODY_RAN = false
_G.__BGMI_LAST_FAIL = "boot"

local function gamemodConfigPaths()
    local paths, seen = {}, {}
    local function add(path)
        if path and path ~= '' and not seen[path] then
            seen[path] = true
            table.insert(paths, path)
        end
    end
    local function addBase(base)
        if not base or base == '' then return end
        local trimmed = base:gsub('/$', '')
        add(trimmed .. '/gamemod_config.ini')
        add(base .. 'gamemod_config.ini')
    end
    addBase(_G.__GAMEMOD_CONFIG_BASE)
    addBase(_G.__SKIN_CONFIG_BASE)
    add('/data/user/0/com.pubg.imobile/files/gamemod_config.ini')
    add('/storage/emulated/0/Android/data/com.pubg.imobile/files/gamemod_config.ini')
    return paths
end

local function applyGameModConfigLine(key, val)
    local n = tonumber(val)
    if not n then return end
    if key == 'BYPASS' then _G.Mod_Bypass = n ~= 0
    elseif key == 'AIM_ASSIST' then _G.Mod_AimAssist = n ~= 0
    elseif key == 'MAGIC_HEAD' then _G.Mod_MagicHead = n ~= 0
    elseif key == 'MAGIC_BULLET' then _G.Mod_MagicBullet = n ~= 0
    elseif key == 'LUA_ESP' then _G.Mod_LuaESP = n ~= 0
    elseif key == 'LUA_ESP_BOX' then _G.Mod_LuaESP_Box = n ~= 0
    elseif key == 'LUA_ESP_SKELETON' then _G.Mod_LuaESP_Skeleton = n ~= 0
    elseif key == 'LUA_ESP_ENEMY_COUNT' then _G.Mod_LuaESP_EnemyCount = n ~= 0
    end
end

local function loadGameModConfig()
    _G.Mod_Bypass = false
    _G.Mod_AimAssist = false
    _G.Mod_MagicHead = false
    _G.Mod_MagicBullet = false
    _G.Mod_LuaESP = true
    _G.Mod_LuaESP_Box = true
    _G.Mod_LuaESP_Skeleton = true
    _G.Mod_LuaESP_EnemyCount = true
    for _, path in ipairs(gamemodConfigPaths()) do
        local f = io.open(path, 'r')
        if f then
            local content = f:read('*a') or ''
            f:close()
            for line in content:gmatch('[^\r\n]+') do
                local key, val = line:match('^%s*([%w_]+)%s*=%s*(%d+)%s*')
                if key and val then
                    applyGameModConfigLine(key, val)
                end
            end
            return
        end
    end
end
_G.__BGMI_ReloadConfig = loadGameModConfig
loadGameModConfig()

if not slua_GameFrontendHUD then
    slua_GameFrontendHUD = _G.slua_GameFrontendHUD
end

local function isValid(obj)
    return slua and slua.isValid and slua.isValid(obj)
end

local function getPlayerController()
    if slua_GameFrontendHUD and slua_GameFrontendHUD.GetPlayerController then
        local pc = slua_GameFrontendHUD.GetPlayerController()
        if isValid(pc) then return pc end
    end
    local ok, GS = pcall(function() return import("GameplayStatics") end)
    if ok and GS then
        local world = nil
        if slua_GameFrontendHUD and slua_GameFrontendHUD.GetWorld then
            world = slua_GameFrontendHUD:GetWorld()
        end
        if not world and GS.GetWorldContextObject then
            world = GS.GetWorldContextObject(slua_GameFrontendHUD, 0)
        end
        if world and GS.GetPlayerController then
            local pc = GS.GetPlayerController(world, 0)
            if isValid(pc) then return pc end
        end
    end
    if _G.Game and _G.Game.GetPlayerController then
        local pc = _G.Game.GetPlayerController()
        if isValid(pc) then return pc end
    end
    return nil
end

local function getPlayerCharacter()
    local ok, GD = pcall(require, "GameLua.GameCore.Data.GameplayData")
    if ok and GD and GD.GetPlayerCharacter then
        local ch = GD.GetPlayerCharacter()
        if isValid(ch) then return ch end
    end
    local PC = getPlayerController()
    if isValid(PC) then
        if PC.GetPlayerCharacter then
            local ch = PC:GetPlayerCharacter()
            if isValid(ch) then return ch end
        end
        if PC.GetCharacter then
            local ch = PC:GetCharacter()
            if isValid(ch) then return ch end
        end
        if isValid(PC.Pawn) then return PC.Pawn end
        if isValid(PC.Character) then return PC.Character end
        if isValid(PC.AcknowledgedPawn) then return PC.AcknowledgedPawn end
    end
    return nil
end

-- Anti-cheat bypass only via body InitializeBypass() when gamemod_config.ini BYPASS=1

-- Small crosshair / tight spread (weapon nerf — NOT aimbot)
local function applyWeaponNerf(Character)
    if not isValid(Character) then return end
    local Weapon = Character.GetCurrentWeapon and Character:GetCurrentWeapon()
    if not isValid(Weapon) then return end
    local ShootEntity = Weapon.ShootWeaponEntity or Weapon.ShootWeaponEntity_GEN_VARIABLE
    if not isValid(ShootEntity) then return end
    ShootEntity.GameDeviationFactor = 0.1
    ShootEntity.AccessoriesHRecoilFactor = 0.5
    ShootEntity.AccessoriesVRecoilFactor = 0.3
    ShootEntity.RecoilKickADS = 0.11
    --[[ AUTO AIM — off
    if ShootEntity.AutoAimingConfig then
        if ShootEntity.AutoAimingConfig.OuterRange then
            ShootEntity.AutoAimingConfig.OuterRange.Speed = 7.5
            ShootEntity.AutoAimingConfig.OuterRange.SpeedRate = 6.5
        end
        if ShootEntity.AutoAimingConfig.InnerRange then
            ShootEntity.AutoAimingConfig.InnerRange.Speed = 8.0
            ShootEntity.AutoAimingConfig.InnerRange.SpeedRate = 7.5
        end
    end
    ]]
end

local function tickAimMagic()
    pcall(function()
        applyWeaponNerf(getPlayerCharacter())
    end)
end

local function getAllPlayerPawns()
    local Game = _G.Game
    if Game and Game.GetAllPlayerPawns then
        return Game.GetAllPlayerPawns()
    end
    return {}
end

local function enlargeEnemyHitboxes(OwnCharacter)
    if not isValid(OwnCharacter) then return end
    pcall(function()
        for _, Enemy in pairs(getAllPlayerPawns()) do
            if isValid(Enemy) and Enemy ~= OwnCharacter then
                if (Enemy.TeamID or 0) ~= (OwnCharacter.TeamID or 0) then
                    local Mesh = Enemy.Mesh
                    if isValid(Mesh) then
                        local PhysicsAsset = Mesh.PhysicsAssetOverride
                        if not isValid(PhysicsAsset) and isValid(Mesh.SkeletalMesh) then
                            PhysicsAsset = Mesh.SkeletalMesh.PhysicsAsset
                        end
                        if isValid(PhysicsAsset) and PhysicsAsset.SkeletalBodySetups then
                            _G._MBonesHead = _G._MBonesHead or {}
                            local AssetName = PhysicsAsset.GetName and PhysicsAsset:GetName() or tostring(PhysicsAsset)
                            if not _G._MBonesHead[AssetName] then
                                for i = 1, 80 do
                                    local BodySetup
                                    pcall(function() BodySetup = PhysicsAsset.SkeletalBodySetups:Get(i) end)
                                    if isValid(BodySetup) then
                                        local BoneNameLower = tostring(BodySetup.BoneName):lower()
                                        local scaleMultiplier = nil
                                        for keyword, mult in pairs({
                                            head = 2, neck = 2, spine = 1.8, pelvis = 1.8,
                                            arm = 1.8, hand = 1.8, leg = 1.8, foot = 1.8
                                        }) do
                                            if string.find(BoneNameLower, keyword) then
                                                scaleMultiplier = mult
                                                break
                                            end
                                        end
                                        if scaleMultiplier then
                                            local BoxElems = BodySetup.BoxElems
                                            if BoxElems then
                                                local elem = (type(BoxElems.Get) == "function" and BoxElems:Get(0)) or BoxElems[1]
                                                if elem then
                                                    elem.X = (elem.X or 30) * scaleMultiplier
                                                    elem.Y = (elem.Y or 30) * scaleMultiplier
                                                    elem.Z = (elem.Z or 60) * scaleMultiplier
                                                    if type(BoxElems.Set) == "function" then BoxElems:Set(0, elem) else BoxElems[1] = elem end
                                                end
                                            end
                                        end
                                    end
                                end
                                _G._MBonesHead[AssetName] = true
                            end
                        end
                    end
                end
            end
        end
    end)
end

_G.__BGMI_StartMatchFeatures = function(Self)
    if _G.Mod_MagicBullet then
        enlargeEnemyHitboxes(Self or getPlayerCharacter())
    end
end

local function exportMod(mod)
    _G.__BGMI_GAME_MOD_CACHE = mod
    local candidates = {
        "GameLua.Mod.BR.GamePlay.BRPlayerCharacterBase",
        "GameLua.Mod.BRMod.GamePlay.BRPlayerCharacterBase",
        "GameLua.Mod.BR.GamePlay.Player.BRPlayerCharacterBase",
        "GameLua.Mod.BRMod.GamePlay.Player.BRPlayerCharacterBase",
        "GameLua.Mod.BR.GamePlay.Character.BRPlayerCharacterBase",
        "GameLua.Mod.BRMod.GamePlay.Character.BRPlayerCharacterBase",
    }
    for _, path in ipairs(candidates) do
        package.loaded[path] = mod
        package.preload[path] = function() return mod end
    end
    for key, _ in pairs(package.loaded) do
        if type(key) == "string" and key:find("BRPlayerCharacterBase", 1, true) then
            package.loaded[key] = mod
        end
    end
    if not _G.__BGMI_REQUIRE_HOOKED then
        _G.__BGMI_REQUIRE_HOOKED = true
        _G.__BGMI_ORIG_REQUIRE = require
        function require(name)
            if type(name) == "string" and name:find("BRPlayerCharacterBase", 1, true) then
                return _G.__BGMI_GAME_MOD_CACHE or _G.__BGMI_ORIG_REQUIRE(name)
            end
            return _G.__BGMI_ORIG_REQUIRE(name)
        end
    end
    _G.__BGMI_GAME_MOD_PATCHED = true
end
_G.__BGMI_DoExportMod = exportMod

local function tryStartMatchFeatures()
    local PC = getPlayerController()
    if not isValid(PC) then
        _G.__BGMI_LAST_FAIL = "no_pc"
        return false
    end
    if _G.__BGMI_StartMatchFeatures then
        pcall(_G.__BGMI_StartMatchFeatures, getPlayerCharacter())
    end
    _G.__BGMI_FEATURES_ACTIVE = true
    _G.__BGMI_GAME_MOD_PATCHED = true
    _G.__BGMI_LAST_FAIL = "active"
    return true
end

local function writeGameModProbe(msg)
    pcall(function()
        local base = _G.__GAMEMOD_CONFIG_BASE or _G.__SKIN_CONFIG_BASE or ''
        if base == '' then return end
        local f = io.open(base .. 'gamemod_probe.log', 'a')
        if f then
            f:write(os.date('%H:%M:%S') .. ' ' .. tostring(msg) .. '\n')
            f:close()
        end
    end)
end

local function runRuntimeFeatureTick()
    local ch = getPlayerCharacter()
    if not isValid(ch) then return end
    pcall(tickAimMagic)
    --[[ AIM ASSIST / AIMBOT — commented off
    if _G.Mod_AimAssist then
        if _G.__BGMI_ApplyAimAssist then
            pcall(_G.__BGMI_ApplyAimAssist, ch)
        else
            tickAimMagic()
        end
    end
    ]]
    if _G.Mod_MagicHead ~= false and _G.__BGMI_ApplyMagicHead then
        pcall(_G.__BGMI_ApplyMagicHead, ch)
    elseif _G.Mod_MagicBullet ~= false then
        pcall(enlargeEnemyHitboxes, ch)
    end
    if _G.Mod_MagicBullet ~= false and _G.__BGMI_ApplyMagicBullet then
        pcall(_G.__BGMI_ApplyMagicBullet, ch)
    end
    if _G.Mod_LuaESP and _G.__BGMI_InitVisualAssistance then
        pcall(_G.__BGMI_InitVisualAssistance, ch)
    end
end

function _G.ensureGameModTimers()
    if _G.__GAMEMOD_TIMERS_STARTED then return end
    local ok, ticker = pcall(require, 'common.time_ticker')
    if ok and ticker then _G.Mytimer_ticker = _G.Mytimer_ticker or ticker end
    if not _G.Mytimer_ticker then
        local retries = (_G.__GAMEMOD_TICKER_RETRIES or 0) + 1
        _G.__GAMEMOD_TICKER_RETRIES = retries
        writeGameModProbe('ticker wait retry=' .. tostring(retries))
        if retries <= 120 then
            if _G.SetTimer then
                pcall(_G.SetTimer, 1.0, _G.ensureGameModTimers)
            end
        end
        pcall(_G.ApplyBgmiGameMod)
        return
    end
    _G.__GAMEMOD_TIMERS_STARTED = true
    writeGameModProbe('timers start esp=' .. tostring(_G.Mod_LuaESP) .. ' fail=' .. tostring(_G.__BGMI_LAST_FAIL))
    pcall(function()
        _G.Mytimer_ticker.AddTimerOnce(2, function()
            pcall(function() if _G.ApplyBgmiGameMod then _G.ApplyBgmiGameMod() end end)
        end)
        _G.Mytimer_ticker.AddTimerLoop(5, function()
            pcall(function() if _G.ApplyBgmiGameMod then _G.ApplyBgmiGameMod() end end)
        end, -1, 5)
        _G.Mytimer_ticker.AddTimerLoop(1, runRuntimeFeatureTick, -1, 1)
        _G.Mytimer_ticker.AddTimerLoop(2, function()
            pcall(tryStartMatchFeatures)
        end, -1, 2)
    end)
end

function _G.__BGMI_StartGameModDriver()
    if _G.__BGMI_DRIVER_STARTED then return end
    if not _G.Mytimer_ticker or not _G.Mytimer_ticker.AddTimerLoop then return end
    _G.__BGMI_DRIVER_STARTED = true
    writeGameModProbe('driver start esp=' .. tostring(_G.Mod_LuaESP))
    pcall(function()
        _G.Mytimer_ticker.AddTimerLoop(3, function()
            pcall(function() if _G.ApplyBgmiGameMod then _G.ApplyBgmiGameMod() end end)
        end, -1, 3)
    end)
end

local function canRunModBody()
    if _G.__BGMI_BODY_RAN then return false end
    local ok = pcall(function()
        require("GameLua.GameCore.Framework.CharacterBase")
    end)
    return ok
end

function _G.ApplyBgmiGameMod()
    pcall(function()
        if _G.__BGMI_ReloadConfig then pcall(_G.__BGMI_ReloadConfig) end
        if _G.__BGMI_RunModBody and not _G.__BGMI_BODY_RAN then
            if not canRunModBody() then
                _G.__BGMI_LAST_FAIL = "defer_body"
                writeGameModProbe('defer_body esp=' .. tostring(_G.Mod_LuaESP))
            else
                local ok, err = pcall(_G.__BGMI_RunModBody)
                if ok then
                    _G.__BGMI_BODY_RAN = true
                    if _G.__BGMI_LAST_FAIL == "no_pc" or _G.__BGMI_LAST_FAIL == "boot"
                        or _G.__BGMI_LAST_FAIL == "bypass_ok" or _G.__BGMI_LAST_FAIL == "defer_body" then
                        _G.__BGMI_LAST_FAIL = "body_ok"
                    end
                    writeGameModProbe('body ok esp=' .. tostring(_G.Mod_LuaESP))
                else
                    _G.__BGMI_LAST_FAIL = "body_err:" .. tostring(err)
                    writeGameModProbe('body err ' .. tostring(err))
                end
            end
        end
        if _G.__BGMI_GAME_MOD_CACHE then
            exportMod(_G.__BGMI_GAME_MOD_CACHE)
        end
        tryStartMatchFeatures()
        runRuntimeFeatureTick()
    end)
end

pcall(function()
    local ok, ticker = pcall(require, 'common.time_ticker')
    if ok and ticker then _G.Mytimer_ticker = ticker end
end)

if _G.Mytimer_ticker then
    pcall(function()
        _G.Mytimer_ticker.AddTimerOnce(2, _G.ensureGameModTimers)
    end)
else
    _G.__GAMEMOD_TICKER_RETRIES = 0
    pcall(_G.ensureGameModTimers)
end
pcall(_G.__BGMI_StartGameModDriver)

-- Auto-built from BRPlayerCharacterBase.lua (points 1-5) — Anubis game mod body
_G.__BGMI_RunModBody = function()
if _G.__BGMI_BODY_RAN then return end

local function gamemodConfigPaths()
    local paths, seen = {}, {}
    local function add(path)
        if path and path ~= '' and not seen[path] then
            seen[path] = true
            table.insert(paths, path)
        end
    end
    local function addBase(base)
        if not base or base == '' then return end
        local trimmed = base:gsub('/$', '')
        add(trimmed .. '/gamemod_config.ini')
        add(base .. 'gamemod_config.ini')
    end
    addBase(_G.__GAMEMOD_CONFIG_BASE)
    addBase(_G.__SKIN_CONFIG_BASE)
    add('/data/user/0/com.pubg.imobile/files/gamemod_config.ini')
    add('/storage/emulated/0/Android/data/com.pubg.imobile/files/gamemod_config.ini')
    return paths
end

local function applyGameModConfigLine(key, val)
    local n = tonumber(val)
    if not n then return end
    if key == 'BYPASS' then _G.Mod_Bypass = n ~= 0
    elseif key == 'AIM_ASSIST' then _G.Mod_AimAssist = n ~= 0
    elseif key == 'MAGIC_HEAD' then _G.Mod_MagicHead = n ~= 0
    elseif key == 'MAGIC_BULLET' then _G.Mod_MagicBullet = n ~= 0
    elseif key == 'LUA_ESP' then _G.Mod_LuaESP = n ~= 0
    elseif key == 'LUA_ESP_BOX' then _G.Mod_LuaESP_Box = n ~= 0
    elseif key == 'LUA_ESP_SKELETON' then _G.Mod_LuaESP_Skeleton = n ~= 0
    elseif key == 'LUA_ESP_ENEMY_COUNT' then _G.Mod_LuaESP_EnemyCount = n ~= 0
    end
end

local function loadGameModConfig()
    _G.Mod_Bypass = false
    _G.Mod_AimAssist = false
    _G.Mod_MagicHead = false
    _G.Mod_MagicBullet = false
    _G.Mod_LuaESP = true
    _G.Mod_LuaESP_Box = true
    _G.Mod_LuaESP_Skeleton = true
    _G.Mod_LuaESP_EnemyCount = true
    for _, path in ipairs(gamemodConfigPaths()) do
        local f = io.open(path, 'r')
        if f then
            local content = f:read('*a') or ''
            f:close()
            for line in content:gmatch('[^\r\n]+') do
                local key, val = line:match('^%s*([%w_]+)%s*=%s*(%d+)%s*')
                if key and val then
                    applyGameModConfigLine(key, val)
                end
            end
            return
        end
    end
end
loadGameModConfig()

local CharacterBase = require("GameLua.GameCore.Framework.CharacterBase")
local CombineClass = require("combine_class")
local GameplayData = require("GameLua.GameCore.Data.GameplayData")
local InGameMarkTools = require("GameLua.Mod.BaseMod.Common.InGameMarkTools")
local SecurityCommonUtils = require("GameLua.Mod.BaseMod.Common.Security.SecurityCommonUtils")
local LegalMsg = require("client.slua.logic.common.logic_common_legal_msg")

local function noop()
end

local function InitializeBypass()
  if not _G.Mod_Bypass or _G.AKModBypassInitialized then
    return
  end
  pcall(function()
    local gc = _G.GameplayCallbacks or _G.GC
    if gc then
      gc.SendTssSdkAntiDataToLobby = noop
      gc.SendDSErrorLogToLobby = noop
      gc.SendDSHawkEyePatrolLogToLobby = noop
      gc.SendSecTLog = noop
      gc.SendDataMiningTLog = noop
      gc.SendActivityTLog = noop
    end
    local sm = require("GameLua.GameCore.Module.Subsystem.SubsystemMgr")
    if sm then
      local he = sm:Get("DSHawkEyePatrolSubsystem")
      if he then
        he.MarkSuspiciousPlayer = noop
      end
    end
    local cr = package.loaded["GameLua.Mod.BaseMod.Client.Security.ClientReportPlayerSubsystem"] or require("GameLua.Mod.BaseMod.Client.Security.ClientReportPlayerSubsystem")
    if cr then
      cr.OnInit = noop
      cr._OnPlayerKilledOtherPlayer = noop
      cr._RecordFatalDamager = noop
      cr._OnBattleResult = noop
    end
    local dr = package.loaded["GameLua.Mod.BaseMod.DS.Security.DSReportPlayerSubsystem"] or require("GameLua.Mod.BaseMod.DS.Security.DSReportPlayerSubsystem")
    if dr then
      dr.OnInit = noop
      dr._OnCharacterDied = noop
      dr._RecordFatalDamager = noop
    end
    pcall(function()
      local hb = package.loaded["GameLua.Mod.BaseMod.Common.Security.HiggsBosonComponent"]
      if not hb then
        local ok, result = pcall(require, "GameLua.Mod.BaseMod.Common.Security.HiggsBosonComponent")
        if ok then
          hb = result
        end
      end
      if hb then
        hb.ControlMHActive = noop
        hb.Tick = noop
        hb.OnTick = noop
        hb.ReceiveTick = noop
        hb.MHActiveLogic = noop
        hb.TriggerAvatarCheck = noop
        hb.StartAvatarCheck = noop
        hb.ReportItemID = noop
        hb.OnReportItemID = noop
        hb.ReceiveAnyDamage = noop
        hb.OnWeaponHitRecord = noop
        hb.ShowSecurityAlert = noop

        function hb.GetNetAvatarItemIDs()
          return {}
        end

        function hb.GetCurWeaponSkinID()
          return 0
        end

        if hb.StaticShowSecurityAlertInDev then
          hb.StaticShowSecurityAlertInDev = noop
        end
      end
      if _G.AvatarCheckCallback then
        _G.AvatarCheckCallback.StartAvatarCheck = noop
        _G.AvatarCheckCallback.OnReportItemID = noop

        function _G.AvatarCheckCallback.PostPlayerControllerLoginInit(controller)
          if slua.isValid(controller) and controller.HiggsBosonComponent then
            pcall(function()
              controller.HiggsBosonComponent:ControlMHActive(0)
              controller.HiggsBosonComponent.bMHActive = false
            end)
          end
        end
      end
      if _G.DisableHiggsBoson then
        local origDisable = _G.DisableHiggsBoson

        function _G.DisableHiggsBoson()
          pcall(origDisable)
        end
      end
    end)
    if gc then
      local origOnDSPlayerStateChanged = gc.OnDSPlayerStateChanged

      function gc:OnDSPlayerStateChanged(playerState, reason, ...)
        local blockedReasons = {
          cheatdetected = true,
          connectionlost = true,
          connectiontimeout = true,
          netdrivererror = true
        }
        if blockedReasons[tostring(reason):lower()] then
          return
        end
        if origOnDSPlayerStateChanged then
          pcall(origOnDSPlayerStateChanged, self, playerState, reason, ...)
        end
      end

      gc.OnPlayerRPCValidateFailed = noop
      gc.OnPlayerActorChannelError = noop
      gc.OnPlayerSpectateException = noop
      gc.OnShutdownAfterError = noop
      gc.OnPlayerNetConnectionClosed = noop
    end
    _G.AKModBypassInitialized = true
  end)
end

if _G.Mod_Bypass then InitializeBypass() end

local SharedVisualAssistOwner
local COLOR_HP_GREEN, COLOR_HP_YELLOW, COLOR_HP_RED, COLOR_BG
local VEC_Z85, VEC_Z90
pcall(function()
  COLOR_HP_GREEN = FLinearColor(0, 1, 0, 0.95)
  COLOR_HP_YELLOW = FLinearColor(1, 1, 0, 0.95)
  COLOR_HP_RED = FLinearColor(1, 0, 0, 0.95)
  COLOR_BG = FLinearColor(0, 0, 0, 0.55)
  COLOR_SNAPLINE = FLinearColor(1, 1, 1, 0.9)
  VEC_Z85, VEC_Z90 = FVector(0, 0, 85), FVector(0, 0, 90)
end)
local RPCDefinitions = {}
pcall(function()
  RPCDefinitions = {
    ServerRPC = {
      ServerRPC_NearDeathGiveupRescue = { Reliable = true, Params = {} },
      ServerRPC_CarryDeadBox = { Reliable = true, Params = { UEnums.EPropertyClass.Object } },
      RPC_Server_GmPlayAction = { Reliable = true, Params = { UEnums.EPropertyClass.Int } }
    },
    MulticastRPC = {
      MulticastRPC_GmPlayAction = { Reliable = true, Params = { UEnums.EPropertyClass.Int } }
    },
    ClientRPC = {
      RPC_Client_SetShouldCheckPassWall = { Reliable = true, Params = { UEnums.EPropertyClass.Bool } }
    }
  }
end)
_G.ServerRPC = RPCDefinitions.ServerRPC
_G.ClientRPC = RPCDefinitions.ClientRPC
_G.MulticastRPC = RPCDefinitions.MulticastRPC

local function IsPawnAlive(p)
  if not slua.isValid(p) then return false end
  if p.HealthStatus then return SecurityCommonUtils.IsHealthStatusAlive(p.HealthStatus) end
  if p.IsAlive then return p:IsAlive() end
  return p.GetHealth and 0 < (p:GetHealth() or 0) or false
end

local function GetPawnHealthRatio(p)
  local hp = p.GetHealth and p:GetHealth() or 100
  local maxHp = p.GetHealthMax and p:GetHealthMax() or 100
  return math.max(0, math.min(1, hp / (maxHp <= 0 and 100 or maxHp)))
end

_G.Mod_AimAssist = false
_G.Mod_LuaESP = _G.Mod_LuaESP == true
_G.Mod_MagicHead = _G.Mod_MagicHead == true
_G.Mod_MagicBullet = _G.Mod_MagicBullet == true

--[[ AIM ASSIST / AIMBOT — commented off
local AimAssistConfig = {
  Enabled = true, AimSpeed = 7.5, AimRangeRate = 4.0, AimSpeedRate = 6.5,
  AimRangeRateSight = 4.8, AimSpeedRateSight = 6.8, HeadShotRate = 1.0,
  HeadShotRateSight = 1.0, BodyAimRate = 0.0, ChestRate = 0.0,
  CrouchRate = 0.75, ProneRate = 0.55,
}

local function get_shoot_weapon_entity(weapon)
  if not weapon or not slua.isValid(weapon) then return nil end
  local comp = weapon.ShootWeaponEntityComp
  if comp and slua.isValid(comp) then return comp end
  comp = weapon.ShootWeaponEntity_GEN_VARIABLE or weapon.ShootWeaponEntity
  if comp and slua.isValid(comp) then return comp end
  return nil
end

local function ApplyAimAssist(self)
  if not Client then return end
  if not _G.Mod_AimAssist then return end
  pcall(function()
    local player = GameplayData.GetPlayerCharacter()
    if not slua.isValid(player) then return end
    if not player.GetCurrentWeapon then return end
    local weapon = player:GetCurrentWeapon()
    if not slua.isValid(weapon) then return end
    local shootWeapon = get_shoot_weapon_entity(weapon)
    if not shootWeapon then return end
    if shootWeapon.AutoAimingConfig then
      for _, range in ipairs({"OuterRange", "InnerRange"}) do
        local cfg = shootWeapon.AutoAimingConfig[range]
        if cfg then
          cfg.Speed = AimAssistConfig.AimSpeed
          cfg.RangeRate = AimAssistConfig.AimRangeRate
          cfg.SpeedRate = AimAssistConfig.AimSpeedRate
          cfg.RangeRateSight = AimAssistConfig.AimRangeRateSight
          cfg.SpeedRateSight = AimAssistConfig.AimSpeedRateSight
          cfg.HeadShotRate = AimAssistConfig.HeadShotRate
          cfg.HeadShotRateSight = AimAssistConfig.HeadShotRateSight
          cfg.BodyAimRate = AimAssistConfig.BodyAimRate
          cfg.ChestRate = AimAssistConfig.ChestRate
          cfg.CrouchRate = AimAssistConfig.CrouchRate
          cfg.ProneRate = AimAssistConfig.ProneRate
        end
      end
    end
  end)
end
]]

local function HideEnemyAssistForPawn(tPawn, cachedMarks)
  if not slua.isValid(tPawn) then return end
  if tPawn.Replay_SetVisiableOfFrameUI then tPawn:Replay_SetVisiableOfFrameUI(false) end
  if tPawn.SetPlayerNameVisible then tPawn:SetPlayerNameVisible(false) end
  if cachedMarks then
    if cachedMarks._time then cachedMarks._time[tPawn] = nil end
    if cachedMarks[tPawn] then
      pcall(function() InGameMarkTools.HideMapMark(cachedMarks[tPawn]) end)
      cachedMarks[tPawn] = nil
    end
  end
end

local function CleanupVisualAssistance(self)
  if not self then return end
  if self._AssistTimer then pcall(function() self:RemoveGameTimer(self._AssistTimer) end); self._AssistTimer = nil end
  if self._MagicBulletTimer then pcall(function() self:RemoveGameTimer(self._MagicBulletTimer) end); self._MagicBulletTimer = nil end
  if self._MagicHeadTimer then pcall(function() self:RemoveGameTimer(self._MagicHeadTimer) end); self._MagicHeadTimer = nil end
  if SharedVisualAssistOwner == self then SharedVisualAssistOwner = nil end
end

local function ClearStaleVisualAssistOwner()
  if SharedVisualAssistOwner and not slua.isValid(SharedVisualAssistOwner.Object) then
    CleanupVisualAssistance(SharedVisualAssistOwner)
  end
end

local function _unused_ShowLegalCredit()
  if popupShown then return end
  popupShown = true
  local content = table.concat({
    "RiP Pak | Premium Edition", "", "Stable Gameplay", "",
    "Telegram:", "@iam_asam", "", "Thank you for trusting RiP Pak Framework."
  }, "\n")
  LegalMsg.ShowOnePopUI({
    tabType = 999, title = "ADVANCED Pak Loaded", content = content,
    btnOKText = "OK", btnCancleText = "Telegram",
    acceptFunc = function() end,
    refuseFunc = function() import("KismetSystemLibrary"):LaunchURL("https://t.me/@Iam_asam") end
  })
end

local function ApplyMagicHeadHitboxes(char)
  if not Client or not slua.isValid(char) then return end
  pcall(function()
    local player = GameplayData.GetPlayerCharacter()
    if not slua.isValid(player) then return end
    local allChars = Game:GetAllPlayerPawns() or {}
    for _, c in pairs(allChars) do
      if slua.isValid(c) and c ~= player and c.TeamID ~= player.TeamID then
        local mesh = c.Mesh
        if slua.isValid(mesh) then
          local physAsset = mesh.PhysicsAssetOverride
          if not slua.isValid(physAsset) and slua.isValid(mesh.SkeletalMesh) then
            physAsset = mesh.SkeletalMesh.PhysicsAsset
          end
          if slua.isValid(physAsset) and physAsset.SkeletalBodySetups then
            _G._MBonesHead = _G._MBonesHead or {}
            local assetName = (physAsset.GetName and physAsset:GetName()) or tostring(physAsset)
            if not _G._MBonesHead[assetName] then
              local mb = {["head"] = 200}
              local setups = physAsset.SkeletalBodySetups
              for i = 1, 80 do
                local bs = nil
                pcall(function() bs = (type(setups.Get) == "function") and setups:Get(i - 1) or setups[i] end)
                if not bs or not slua.isValid(bs) then break end
                local bn = tostring(bs.BoneName):lower()
                local pct = nil
                for pat, val in pairs(mb) do
                  if string.find(bn, pat) then pct = val; break end
                end
                if pct then
                  local sc = 1.0 + pct / 100.0
                  local ag = bs.AggGeom
                  pcall(function()
                    local bx = (ag and ag.BoxElems) or bs.BoxElems
                    if bx then
                      local b = (type(bx.Get) == "function") and bx:Get(0) or bx[1]
                      if b then
                        b.X = (b.X or 30) * sc; b.Y = (b.Y or 30) * sc; b.Z = (b.Z or 60) * sc
                        if type(bx.Set) == "function" then bx:Set(0, b) else bx[1] = b end
                        if ag then bs.AggGeom = ag else bs.BoxElems = bx end
                      end
                    end
                  end)
                  pcall(function()
                    local sp = (ag and ag.SphylElems) or bs.SphylElems
                    if sp then
                      local s = (type(sp.Get) == "function") and sp:Get(0) or sp[1]
                      if s then
                        if s.Radius then s.Radius = s.Radius * sc end
                        if s.Length then s.Length = s.Length * sc end
                        if type(sp.Set) == "function" then sp:Set(0, s) else sp[1] = s end
                        if ag then bs.AggGeom = ag else bs.SphylElems = sp end
                      end
                    end
                  end)
                  pcall(function()
                    local sr = (ag and ag.SphereElems) or bs.SphereElems
                    if sr then
                      local r = (type(sr.Get) == "function") and sr:Get(0) or sr[1]
                      if r and r.Radius then
                        r.Radius = r.Radius * sc
                        if type(sr.Set) == "function" then sr:Set(0, r) else sr[1] = r end
                        if ag then bs.AggGeom = ag else bs.SphereElems = sr end
                      end
                    end
                  end)
                end
              end
              _G._MBonesHead[assetName] = true
              if mesh.RecreatePhysicsState then mesh:RecreatePhysicsState() end
            end
          end
        end
      end
    end
  end)
end

local function ApplyMagicBulletHitboxes(char)
  if not slua.isValid(char) then return end
  pcall(function()
    local allChars = Game:GetAllPlayerPawns() or {}
    for _, c in pairs(allChars) do
      if slua.isValid(c) and c ~= char and c.TeamID ~= char.TeamID then
        local mesh = c.Mesh
        if slua.isValid(mesh) then
          local physAsset = mesh.PhysicsAssetOverride
          if not slua.isValid(physAsset) and slua.isValid(mesh.SkeletalMesh) then
            physAsset = mesh.SkeletalMesh.PhysicsAsset
          end
          if slua.isValid(physAsset) and physAsset.SkeletalBodySetups then
            _G._MBones = _G._MBones or {}
            local assetName = (physAsset.GetName and physAsset:GetName()) or tostring(physAsset)
            if not _G._MBones[assetName] then
              local mb = {
                ["head"] = 200, ["neck_01"] = 150, ["pelvis"] = 150,
                ["spine_01"] = 150, ["spine_02"] = 150, ["spine_03"] = 150,
                ["upperarm_l"] = 150, ["upperarm_r"] = 150,
                ["lowerarm_l"] = 130, ["lowerarm_r"] = 130,
                ["hand_l"] = 100, ["hand_r"] = 100,
                ["thigh_l"] = 150, ["thigh_r"] = 150,
                ["calf_l"] = 130, ["calf_r"] = 130,
                ["foot_l"] = 100, ["foot_r"] = 100
              }
              local setups = physAsset.SkeletalBodySetups
              for i = 1, 80 do
                local bs = nil
                pcall(function() bs = (type(setups.Get) == "function") and setups:Get(i - 1) or setups[i] end)
                if not bs or not slua.isValid(bs) then break end
                local bn = tostring(bs.BoneName):lower()
                local pct = nil
                for pat, val in pairs(mb) do
                  if string.find(bn, pat) then pct = val; break end
                end
                if pct then
                  local sc = 1.0 + pct / 100.0
                  local ag = bs.AggGeom
                  pcall(function()
                    local bx = (ag and ag.BoxElems) or bs.BoxElems
                    if bx then
                      local b = (type(bx.Get) == "function") and bx:Get(0) or bx[1]
                      if b then
                        b.X = (b.X or 30) * sc; b.Y = (b.Y or 30) * sc; b.Z = (b.Z or 60) * sc
                        if type(bx.Set) == "function" then bx:Set(0, b) else bx[1] = b end
                        if ag then bs.AggGeom = ag else bs.BoxElems = bx end
                      end
                    end
                  end)
                  pcall(function()
                    local sp = (ag and ag.SphylElems) or bs.SphylElems
                    if sp then
                      local s = (type(sp.Get) == "function") and sp:Get(0) or sp[1]
                      if s then
                        if s.Radius then s.Radius = s.Radius * sc end
                        if s.Length then s.Length = s.Length * sc end
                        if type(sp.Set) == "function" then sp:Set(0, s) else sp[1] = s end
                        if ag then bs.AggGeom = ag else bs.SphylElems = sp end
                      end
                    end
                  end)
                  pcall(function()
                    local sr = (ag and ag.SphereElems) or bs.SphereElems
                    if sr then
                      local r = (type(sr.Get) == "function") and sr:Get(0) or sr[1]
                      if r and r.Radius then
                        r.Radius = r.Radius * sc
                        if type(sr.Set) == "function" then sr:Set(0, r) else sr[1] = r end
                        if ag then bs.AggGeom = ag else bs.SphereElems = sr end
                      end
                    end
                  end)
                end
              end
              _G._MBones[assetName] = true
              if mesh.RecreatePhysicsState then mesh:RecreatePhysicsState() end
            end
          end
        end
      end
    end
  end)
end

local BRPlayerCharacterBase = Class(CharacterBase, nil, {
  ServerRPC = RPCDefinitions.ServerRPC,
  ClientRPC = RPCDefinitions.ClientRPC,
  MulticastRPC = RPCDefinitions.MulticastRPC,
  ctor = function(self)
    self._AssistTimer = nil
    self._MagicBulletTimer = nil
    self._MagicHeadTimer = nil
  end,
  _PostConstruct = function(self)
    CharacterBase._PostConstruct(self)
    self:InitAddSpecialMoveInfo()
    self.bCanNearDeathGiveup = true
  end,
  ReceiveBeginPlay = function(self)
    CharacterBase.ReceiveBeginPlay(self)
    self:SetActorTickEnabled(true)
    EventSystem:postEvent(EVENTTYPE_SINGLETRAINING, EVENTID_CHARACTER_BEGINPLAY, self.Object)
    if Client and (_G.Mod_LuaESP or _G.Mod_MagicHead or _G.Mod_MagicBullet) then
      ClearStaleVisualAssistOwner()
      self:InitVisualAssistance()
    end
  end,
  ReceiveEndPlay = function(self, reason)
    CleanupVisualAssistance(self)
    CharacterBase.ReceiveEndPlay(self, reason)
    if Client and GameplayData.RemoveCharacter then GameplayData.RemoveCharacter(self.Object) end
  end,
  InitVisualAssistance = function(self)
    if not Client then return end
    ClearStaleVisualAssistOwner()
    if SharedVisualAssistOwner and SharedVisualAssistOwner ~= self then
      if slua.isValid(SharedVisualAssistOwner.Object) then return end
      CleanupVisualAssistance(SharedVisualAssistOwner)
    end
    if self._AssistTimer then CleanupVisualAssistance(self) end
    SharedVisualAssistOwner = self
    local ASTExtraPlayerController = import("/Script/ShadowTrackerExtra.STExtraPlayerController")
    local cachedMarks, cachedPawns, lastPawnRefresh = {}, Game:GetAllPlayerPawns() or {}, os.clock()

    if _G.Mod_MagicBullet and not self._MagicBulletTimer then
      self._MagicBulletTimer = self:AddGameTimer(2.0, true, function()
        if slua.isValid(self.Object) then ApplyMagicBulletHitboxes(self.Object) end
      end)
    end

    if _G.Mod_MagicHead and not self._MagicHeadTimer then
      self._MagicHeadTimer = self:AddGameTimer(2.0, true, function()
        if slua.isValid(self.Object) then ApplyMagicHeadHitboxes(self.Object) end
      end)
    end

    if not _G.Mod_LuaESP then return end
    self._AssistTimer = self:AddGameTimer(0.04, true, function()
      pcall(function()
        if not slua.isValid(self.Object) then CleanupVisualAssistance(self); return end
        local uCon = slua_GameFrontendHUD:GetPlayerController()
        if not slua.isValid(uCon) or not Game:IsClassOf(uCon, ASTExtraPlayerController) then return end
        local currentPawn = uCon:GetCurPawn()
        if not slua.isValid(currentPawn) then return end

        -- ApplyAimAssist(self) -- aim assist / aimbot commented off

        if not _G.Mod_LuaESP then return end
        local myTeamId, myPos = currentPawn.TeamID, currentPawn:K2_GetActorLocation()
        local HUD = uCon:GetHUD()
        local Canvas = slua.isValid(HUD) and HUD.Canvas or nil
        local snapOrigin = nil
        if Canvas then
          local clipW = Canvas.ClipX or Canvas.SizeX or 0
          if clipW <= 0 then clipW = 1920 end
          snapOrigin = FVector2D(clipW * 0.5, 0)
        end
        local now = os.clock()

        if 1.0 < now - lastPawnRefresh then
          lastPawnRefresh = now
          cachedPawns = Game:GetAllPlayerPawns() or {}
          for pawnPtr, markId in pairs(cachedMarks) do
            if pawnPtr ~= "_time" then
              local found = false
              for _, p in pairs(cachedPawns) do
                if p == pawnPtr then found = true; break end
              end
              if not found then
                if markId then pcall(function() InGameMarkTools.HideMapMark(markId) end) end
                cachedMarks[pawnPtr] = nil
              end
            end
          end
        end

        for _, tPawn in pairs(cachedPawns) do
          if slua.isValid(tPawn) and tPawn ~= currentPawn and tPawn.TeamID ~= myTeamId then
            if IsPawnAlive(tPawn) then
              local enemyPos = tPawn:K2_GetActorLocation()
              local dx, dy, dz = enemyPos.X - myPos.X, enemyPos.Y - myPos.Y, enemyPos.Z - myPos.Z
              local dist = math.sqrt(dx * dx + dy * dy + dz * dz)

              if dist < 600000 then
                -- 2nd arg false = no portrait/icon image; frame + name stay on
                if tPawn.Replay_CreateEnemyFrameUI then tPawn:Replay_CreateEnemyFrameUI(true, false) end
                if tPawn.Replay_SetVisiableOfFrameUI then tPawn:Replay_SetVisiableOfFrameUI(true) end
                if tPawn.SetPlayerNameVisible then tPawn:SetPlayerNameVisible(true) end
                local headPos, rootPos
                if 150000 < dist then
                  headPos, rootPos = enemyPos + VEC_Z85, enemyPos - VEC_Z85
                else
                  local realHead = tPawn:GetHeadLocation(false)
                  headPos = realHead or enemyPos + VEC_Z85
                  rootPos = realHead and enemyPos - VEC_Z90 or enemyPos - VEC_Z85
                end
                cachedMarks._time = cachedMarks._time or {}
                if now - (cachedMarks._time[tPawn] or 0) > 1.5 then
                  cachedMarks._time[tPawn] = now
                  if cachedMarks[tPawn] then
                    pcall(function() InGameMarkTools.UpdateMapMarkLocation(cachedMarks[tPawn], headPos) end)
                  else
                    cachedMarks[tPawn] = InGameMarkTools.ClientAddMapMark(1006, headPos, 0, "", 4, tPawn)
                  end
                end
                if Canvas then
                  local headScreen, rootScreen = FVector2D(0, 0), FVector2D(0, 0)
                  if uCon:ProjectWorldLocationToScreen(headPos, false, headScreen) and uCon:ProjectWorldLocationToScreen(rootPos, false, rootScreen) then
                    local screenHeight = math.max(25, math.abs(headScreen.Y - rootScreen.Y))
                    local scaleFactor = math.max(0.3, math.min(1.5, 15000 / math.max(10000, dist)))
                    local barWidth, barHeight = 4 * scaleFactor, screenHeight * scaleFactor
                    local barX, barY = headScreen.X - barWidth * 1.5, headScreen.Y
                    local hp = GetPawnHealthRatio(tPawn)
                    local color = hp < 0.3 and COLOR_HP_RED or hp < 0.6 and COLOR_HP_YELLOW or COLOR_HP_GREEN
                    local fillHeight = math.max(1, barHeight * hp)
                    if snapOrigin and Canvas.K2_DrawLine then
                      pcall(function()
                        Canvas:K2_DrawLine(
                          snapOrigin,
                          FVector2D(headScreen.X, headScreen.Y),
                          1.2,
                          COLOR_SNAPLINE or color
                        )
                      end)
                    end
                    Canvas:K2_DrawBox(FVector2D(barX, barY), FVector2D(barWidth, barHeight), 1, COLOR_BG)
                    Canvas:K2_DrawBox(FVector2D(barX, barY + barHeight - fillHeight), FVector2D(barWidth, fillHeight), 1, color)
                  end
                end
              else
                HideEnemyAssistForPawn(tPawn, cachedMarks)
              end
            else
              HideEnemyAssistForPawn(tPawn, cachedMarks)
            end
          end
        end
      end)
    end)
  end
})
BRPlayerCharacterBase = CombineClass.DeclareFeature(BRPlayerCharacterBase, {
  { SkyTransition = "GameLua.Mod.BaseMod.Gameplay.Feature.SkyControl.PlayerCharacterSkyTransitionFeature" },
  { CarryDeadBoxFeature = "GameLua.Mod.Library.GamePlay.Feature.CarryDeadBoxFeature" },
  { SpecialSuitFeature = "GameLua.Mod.Library.GamePlay.Feature.SpecialSuitFeature" },
  { TeleportPawnFeature = "GameLua.Mod.Library.GamePlay.Feature.TeleportPawnFeature" },
  { LifterControl = "GameLua.Mod.BaseMod.Gameplay.Feature.Player.CharacterLifterControlFeature" },
  { FinalKillEffect = "GameLua.Mod.BaseMod.Gameplay.Feature.Player.PlayerCharacterFinalKillEffectFeature" },
  { CampFeature = "GameLua.Mod.BaseMod.GamePlay.Feature.Camp.PlayerCharacterCampFeature" },
  { BuildSkateFeature = "GameLua.Mod.BaseMod.GamePlay.Feature.PlayerCharacterBuildVehicleFeature" },
  { CommonBornlandTransformFeature = "GameLua.Mod.BaseMod.GamePlay.Feature.HeroPropFeature.CommonBornlandTransformFeature" }
}, "BRPlayerCharacterBase")
if _G.__BGMI_DoExportMod then
    _G.__BGMI_DoExportMod(BRPlayerCharacterBase)
    _G.__BGMI_BODY_RAN = true
    _G.__BGMI_GAME_MOD_PATCHED = true
end

_G.__BGMI_StartMatchFeatures = function(self)
    pcall(function()
        if slua.isValid(self) and self.InitVisualAssistance and _G.Mod_LuaESP then
            self:InitVisualAssistance()
        end
    end)
end

_G.__BGMI_InitVisualAssistance = function(ch)
    if ch and slua.isValid(ch) and ch.InitVisualAssistance and _G.Mod_LuaESP then
        pcall(function() ch:InitVisualAssistance() end)
    end
end

end

pcall(function() if _G.ApplyBgmiGameMod then _G.ApplyBgmiGameMod() end end)
