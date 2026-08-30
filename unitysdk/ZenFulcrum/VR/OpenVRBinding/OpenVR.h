#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRInitError.h"

namespace System { class String; }
namespace ZenFulcrum::VR::OpenVRBinding { class CVRApplications; }
namespace ZenFulcrum::VR::OpenVRBinding { class CVRChaperone; }
namespace ZenFulcrum::VR::OpenVRBinding { class CVRChaperoneSetup; }
namespace ZenFulcrum::VR::OpenVRBinding { class CVRCompositor; }
namespace ZenFulcrum::VR::OpenVRBinding { class CVRExtendedDisplay; }
namespace ZenFulcrum::VR::OpenVRBinding { class CVROverlay; }
namespace ZenFulcrum::VR::OpenVRBinding { class CVRRenderModels; }
namespace ZenFulcrum::VR::OpenVRBinding { class CVRScreenshots; }
namespace ZenFulcrum::VR::OpenVRBinding { class CVRSettings; }
namespace ZenFulcrum::VR::OpenVRBinding { class CVRSystem; }
namespace ZenFulcrum::VR::OpenVRBinding { class CVRTrackedCamera; }
namespace ZenFulcrum::VR::OpenVRBinding { class OpenVR_COpenVRContext; }

#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GETGENERICINTERFACE_OFFSET UNITYSDK_OFFSET(0x1EFC5FF0)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GETINITTOKEN_OFFSET UNITYSDK_OFFSET(0x1EFC6270)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GETSTRINGFORHMDERROR_OFFSET UNITYSDK_OFFSET(0x1EFC5EC0)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GET_APPLICATIONS_OFFSET UNITYSDK_OFFSET(0x1EFC7B40)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GET_CHAPERONESETUP_OFFSET UNITYSDK_OFFSET(0x1EFC6A00)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GET_CHAPERONE_OFFSET UNITYSDK_OFFSET(0x1EFC6720)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GET_COMPOSITOR_OFFSET UNITYSDK_OFFSET(0x1EFC6CE0)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GET_EXTENDEDDISPLAY_OFFSET UNITYSDK_OFFSET(0x1EFC7580)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GET_OPENVRINTERNAL_MODULECONTEXT_OFFSET UNITYSDK_OFFSET(0x1EFC6390)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GET_OVERLAY_OFFSET UNITYSDK_OFFSET(0x1EFC6FC0)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GET_RENDERMODELS_OFFSET UNITYSDK_OFFSET(0x1EFC72A0)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GET_SCREENSHOTS_OFFSET UNITYSDK_OFFSET(0x1EFC7E20)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1EFC7860)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GET_SYSTEM_OFFSET UNITYSDK_OFFSET(0x1EFC6440)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GET_TRACKEDCAMERA_OFFSET UNITYSDK_OFFSET(0x1EFC8100)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GET_VRTOKEN_OFFSET UNITYSDK_OFFSET(0x1EFC6370)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0x1EFC5AA0)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_INIT_OFFSET UNITYSDK_OFFSET(0x1EFC83E0)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_ISHMDPRESENT_OFFSET UNITYSDK_OFFSET(0x1EFC5CC0)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_ISINTERFACEVERSIONVALID_OFFSET UNITYSDK_OFFSET(0x1EFC6130)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_ISRUNTIMEINSTALLED_OFFSET UNITYSDK_OFFSET(0x1EFC5DC0)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_SET_VRTOKEN_OFFSET UNITYSDK_OFFSET(0x1EFC6380)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_SHUTDOWNINTERNAL_OFFSET UNITYSDK_OFFSET(0x1EFC5BC0)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1EFC8700)
#define ZENFULCRUM_VR_OPENVRBINDING_OPENVR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFC8780)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int OpenVR_TypeDefinitionIndex = 38030;

	class OpenVR : public ::System::Object
	{
	public:
		static ::ZenFulcrum::VR::OpenVRBinding::OpenVR_COpenVRContext** StaticGet__OpenVRInternal_ModuleContext()
		{
			return (::ZenFulcrum::VR::OpenVRBinding::OpenVR_COpenVRContext**)Il2CppClass::FromTypeDefinitionIndex(OpenVR_TypeDefinitionIndex)->GetStaticField(0xDE0);
		}
		static ::System::UInt32* StaticGet__VRToken_k__BackingField()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OpenVR_TypeDefinitionIndex)->GetStaticField(0x730);
		}
		// static const ::System::UInt32 k_nDriverNone = 0xFFFFFFFF; // 0x0
		// static const ::System::UInt32 k_unMaxDriverDebugResponseSize = 0x8000; // 0x0
		// static const ::System::UInt32 k_unTrackedDeviceIndex_Hmd = 0x0; // 0x0
		// static const ::System::UInt32 k_unMaxTrackedDeviceCount = 0x10; // 0x0
		// static const ::System::UInt32 k_unTrackedDeviceIndexOther = 0xFFFFFFFE; // 0x0
		// static const ::System::UInt32 k_unTrackedDeviceIndexInvalid = 0xFFFFFFFF; // 0x0
		// static const ::System::UInt64 k_ulInvalidPropertyContainer = 0x0; // 0x0
		// static const ::System::UInt32 k_unInvalidPropertyTag = 0x0; // 0x0
		// static const ::System::UInt32 k_unFloatPropertyTag = 0x1; // 0x0
		// static const ::System::UInt32 k_unInt32PropertyTag = 0x2; // 0x0
		// static const ::System::UInt32 k_unUint64PropertyTag = 0x3; // 0x0
		// static const ::System::UInt32 k_unBoolPropertyTag = 0x4; // 0x0
		// static const ::System::UInt32 k_unStringPropertyTag = 0x5; // 0x0
		// static const ::System::UInt32 k_unHmdMatrix34PropertyTag = 0x14; // 0x0
		// static const ::System::UInt32 k_unHmdMatrix44PropertyTag = 0x15; // 0x0
		// static const ::System::UInt32 k_unHmdVector3PropertyTag = 0x16; // 0x0
		// static const ::System::UInt32 k_unHmdVector4PropertyTag = 0x17; // 0x0
		// static const ::System::UInt32 k_unHiddenAreaPropertyTag = 0x1E; // 0x0
		// static const ::System::UInt32 k_unOpenVRInternalReserved_Start = 0x3E8; // 0x0
		// static const ::System::UInt32 k_unOpenVRInternalReserved_End = 0x2710; // 0x0
		// static const ::System::UInt32 k_unMaxPropertyStringSize = 0x8000; // 0x0
		// static const ::System::UInt32 k_unControllerStateAxisCount = 0x5; // 0x0
		// static const ::System::UInt64 k_ulOverlayHandleInvalid = 0x0; // 0x0
		// static const ::System::UInt32 k_unScreenshotHandleInvalid = 0x0; // 0x0
		// static const ::System::String* IVRSystem_Version; // 0x0
		// static const ::System::String* IVRExtendedDisplay_Version; // 0x0
		// static const ::System::String* IVRTrackedCamera_Version; // 0x0
		// static const ::System::UInt32 k_unMaxApplicationKeyLength = 0x80; // 0x0
		// static const ::System::String* k_pch_MimeType_HomeApp; // 0x0
		// static const ::System::String* k_pch_MimeType_GameTheater; // 0x0
		// static const ::System::String* IVRApplications_Version; // 0x0
		// static const ::System::String* IVRChaperone_Version; // 0x0
		// static const ::System::String* IVRChaperoneSetup_Version; // 0x0
		// static const ::System::String* IVRCompositor_Version; // 0x0
		// static const ::System::UInt32 k_unVROverlayMaxKeyLength = 0x80; // 0x0
		// static const ::System::UInt32 k_unVROverlayMaxNameLength = 0x80; // 0x0
		// static const ::System::UInt32 k_unMaxOverlayCount = 0x40; // 0x0
		// static const ::System::UInt32 k_unMaxOverlayIntersectionMaskPrimitivesCount = 0x20; // 0x0
		// static const ::System::String* IVROverlay_Version; // 0x0
		// static const ::System::String* k_pch_Controller_Component_GDC2015; // 0x0
		// static const ::System::String* k_pch_Controller_Component_Base; // 0x0
		// static const ::System::String* k_pch_Controller_Component_Tip; // 0x0
		// static const ::System::String* k_pch_Controller_Component_HandGrip; // 0x0
		// static const ::System::String* k_pch_Controller_Component_Status; // 0x0
		// static const ::System::String* IVRRenderModels_Version; // 0x0
		// static const ::System::UInt32 k_unNotificationTextMaxSize = 0x100; // 0x0
		// static const ::System::String* IVRNotifications_Version; // 0x0
		// static const ::System::UInt32 k_unMaxSettingsKeyLength = 0x80; // 0x0
		// static const ::System::String* IVRSettings_Version; // 0x0
		// static const ::System::String* k_pch_SteamVR_Section; // 0x0
		// static const ::System::String* k_pch_SteamVR_RequireHmd_String; // 0x0
		// static const ::System::String* k_pch_SteamVR_ForcedDriverKey_String; // 0x0
		// static const ::System::String* k_pch_SteamVR_ForcedHmdKey_String; // 0x0
		// static const ::System::String* k_pch_SteamVR_DisplayDebug_Bool; // 0x0
		// static const ::System::String* k_pch_SteamVR_DebugProcessPipe_String; // 0x0
		// static const ::System::String* k_pch_SteamVR_DisplayDebugX_Int32; // 0x0
		// static const ::System::String* k_pch_SteamVR_DisplayDebugY_Int32; // 0x0
		// static const ::System::String* k_pch_SteamVR_SendSystemButtonToAllApps_Bool; // 0x0
		// static const ::System::String* k_pch_SteamVR_LogLevel_Int32; // 0x0
		// static const ::System::String* k_pch_SteamVR_IPD_Float; // 0x0
		// static const ::System::String* k_pch_SteamVR_Background_String; // 0x0
		// static const ::System::String* k_pch_SteamVR_BackgroundUseDomeProjection_Bool; // 0x0
		// static const ::System::String* k_pch_SteamVR_BackgroundCameraHeight_Float; // 0x0
		// static const ::System::String* k_pch_SteamVR_BackgroundDomeRadius_Float; // 0x0
		// static const ::System::String* k_pch_SteamVR_GridColor_String; // 0x0
		// static const ::System::String* k_pch_SteamVR_PlayAreaColor_String; // 0x0
		// static const ::System::String* k_pch_SteamVR_ShowStage_Bool; // 0x0
		// static const ::System::String* k_pch_SteamVR_ActivateMultipleDrivers_Bool; // 0x0
		// static const ::System::String* k_pch_SteamVR_DirectMode_Bool; // 0x0
		// static const ::System::String* k_pch_SteamVR_DirectModeEdidVid_Int32; // 0x0
		// static const ::System::String* k_pch_SteamVR_DirectModeEdidPid_Int32; // 0x0
		// static const ::System::String* k_pch_SteamVR_UsingSpeakers_Bool; // 0x0
		// static const ::System::String* k_pch_SteamVR_SpeakersForwardYawOffsetDegrees_Float; // 0x0
		// static const ::System::String* k_pch_SteamVR_BaseStationPowerManagement_Bool; // 0x0
		// static const ::System::String* k_pch_SteamVR_NeverKillProcesses_Bool; // 0x0
		// static const ::System::String* k_pch_SteamVR_SupersampleScale_Float; // 0x0
		// static const ::System::String* k_pch_SteamVR_AllowAsyncReprojection_Bool; // 0x0
		// static const ::System::String* k_pch_SteamVR_AllowReprojection_Bool; // 0x0
		// static const ::System::String* k_pch_SteamVR_ForceReprojection_Bool; // 0x0
		// static const ::System::String* k_pch_SteamVR_ForceFadeOnBadTracking_Bool; // 0x0
		// static const ::System::String* k_pch_SteamVR_DefaultMirrorView_Int32; // 0x0
		// static const ::System::String* k_pch_SteamVR_ShowMirrorView_Bool; // 0x0
		// static const ::System::String* k_pch_SteamVR_MirrorViewGeometry_String; // 0x0
		// static const ::System::String* k_pch_SteamVR_StartMonitorFromAppLaunch; // 0x0
		// static const ::System::String* k_pch_SteamVR_StartCompositorFromAppLaunch_Bool; // 0x0
		// static const ::System::String* k_pch_SteamVR_StartDashboardFromAppLaunch_Bool; // 0x0
		// static const ::System::String* k_pch_SteamVR_StartOverlayAppsFromDashboard_Bool; // 0x0
		// static const ::System::String* k_pch_SteamVR_EnableHomeApp; // 0x0
		// static const ::System::String* k_pch_SteamVR_CycleBackgroundImageTimeSec_Int32; // 0x0
		// static const ::System::String* k_pch_SteamVR_RetailDemo_Bool; // 0x0
		// static const ::System::String* k_pch_SteamVR_IpdOffset_Float; // 0x0
		// static const ::System::String* k_pch_SteamVR_AllowSupersampleFiltering_Bool; // 0x0
		// static const ::System::String* k_pch_SteamVR_EnableLinuxVulkanAsync_Bool; // 0x0
		// static const ::System::String* k_pch_Lighthouse_Section; // 0x0
		// static const ::System::String* k_pch_Lighthouse_DisableIMU_Bool; // 0x0
		// static const ::System::String* k_pch_Lighthouse_UseDisambiguation_String; // 0x0
		// static const ::System::String* k_pch_Lighthouse_DisambiguationDebug_Int32; // 0x0
		// static const ::System::String* k_pch_Lighthouse_PrimaryBasestation_Int32; // 0x0
		// static const ::System::String* k_pch_Lighthouse_DBHistory_Bool; // 0x0
		// static const ::System::String* k_pch_Null_Section; // 0x0
		// static const ::System::String* k_pch_Null_SerialNumber_String; // 0x0
		// static const ::System::String* k_pch_Null_ModelNumber_String; // 0x0
		// static const ::System::String* k_pch_Null_WindowX_Int32; // 0x0
		// static const ::System::String* k_pch_Null_WindowY_Int32; // 0x0
		// static const ::System::String* k_pch_Null_WindowWidth_Int32; // 0x0
		// static const ::System::String* k_pch_Null_WindowHeight_Int32; // 0x0
		// static const ::System::String* k_pch_Null_RenderWidth_Int32; // 0x0
		// static const ::System::String* k_pch_Null_RenderHeight_Int32; // 0x0
		// static const ::System::String* k_pch_Null_SecondsFromVsyncToPhotons_Float; // 0x0
		// static const ::System::String* k_pch_Null_DisplayFrequency_Float; // 0x0
		// static const ::System::String* k_pch_UserInterface_Section; // 0x0
		// static const ::System::String* k_pch_UserInterface_StatusAlwaysOnTop_Bool; // 0x0
		// static const ::System::String* k_pch_UserInterface_MinimizeToTray_Bool; // 0x0
		// static const ::System::String* k_pch_UserInterface_Screenshots_Bool; // 0x0
		// static const ::System::String* k_pch_UserInterface_ScreenshotType_Int; // 0x0
		// static const ::System::String* k_pch_Notifications_Section; // 0x0
		// static const ::System::String* k_pch_Notifications_DoNotDisturb_Bool; // 0x0
		// static const ::System::String* k_pch_Keyboard_Section; // 0x0
		// static const ::System::String* k_pch_Keyboard_TutorialCompletions; // 0x0
		// static const ::System::String* k_pch_Keyboard_ScaleX; // 0x0
		// static const ::System::String* k_pch_Keyboard_ScaleY; // 0x0
		// static const ::System::String* k_pch_Keyboard_OffsetLeftX; // 0x0
		// static const ::System::String* k_pch_Keyboard_OffsetRightX; // 0x0
		// static const ::System::String* k_pch_Keyboard_OffsetY; // 0x0
		// static const ::System::String* k_pch_Keyboard_Smoothing; // 0x0
		// static const ::System::String* k_pch_Perf_Section; // 0x0
		// static const ::System::String* k_pch_Perf_HeuristicActive_Bool; // 0x0
		// static const ::System::String* k_pch_Perf_NotifyInHMD_Bool; // 0x0
		// static const ::System::String* k_pch_Perf_NotifyOnlyOnce_Bool; // 0x0
		// static const ::System::String* k_pch_Perf_AllowTimingStore_Bool; // 0x0
		// static const ::System::String* k_pch_Perf_SaveTimingsOnExit_Bool; // 0x0
		// static const ::System::String* k_pch_Perf_TestData_Float; // 0x0
		// static const ::System::String* k_pch_Perf_LinuxGPUProfiling_Bool; // 0x0
		// static const ::System::String* k_pch_CollisionBounds_Section; // 0x0
		// static const ::System::String* k_pch_CollisionBounds_Style_Int32; // 0x0
		// static const ::System::String* k_pch_CollisionBounds_GroundPerimeterOn_Bool; // 0x0
		// static const ::System::String* k_pch_CollisionBounds_CenterMarkerOn_Bool; // 0x0
		// static const ::System::String* k_pch_CollisionBounds_PlaySpaceOn_Bool; // 0x0
		// static const ::System::String* k_pch_CollisionBounds_FadeDistance_Float; // 0x0
		// static const ::System::String* k_pch_CollisionBounds_ColorGammaR_Int32; // 0x0
		// static const ::System::String* k_pch_CollisionBounds_ColorGammaG_Int32; // 0x0
		// static const ::System::String* k_pch_CollisionBounds_ColorGammaB_Int32; // 0x0
		// static const ::System::String* k_pch_CollisionBounds_ColorGammaA_Int32; // 0x0
		// static const ::System::String* k_pch_Camera_Section; // 0x0
		// static const ::System::String* k_pch_Camera_EnableCamera_Bool; // 0x0
		// static const ::System::String* k_pch_Camera_EnableCameraInDashboard_Bool; // 0x0
		// static const ::System::String* k_pch_Camera_EnableCameraForCollisionBounds_Bool; // 0x0
		// static const ::System::String* k_pch_Camera_EnableCameraForRoomView_Bool; // 0x0
		// static const ::System::String* k_pch_Camera_BoundsColorGammaR_Int32; // 0x0
		// static const ::System::String* k_pch_Camera_BoundsColorGammaG_Int32; // 0x0
		// static const ::System::String* k_pch_Camera_BoundsColorGammaB_Int32; // 0x0
		// static const ::System::String* k_pch_Camera_BoundsColorGammaA_Int32; // 0x0
		// static const ::System::String* k_pch_Camera_BoundsStrength_Int32; // 0x0
		// static const ::System::String* k_pch_audio_Section; // 0x0
		// static const ::System::String* k_pch_audio_OnPlaybackDevice_String; // 0x0
		// static const ::System::String* k_pch_audio_OnRecordDevice_String; // 0x0
		// static const ::System::String* k_pch_audio_OnPlaybackMirrorDevice_String; // 0x0
		// static const ::System::String* k_pch_audio_OffPlaybackDevice_String; // 0x0
		// static const ::System::String* k_pch_audio_OffRecordDevice_String; // 0x0
		// static const ::System::String* k_pch_audio_VIVEHDMIGain; // 0x0
		// static const ::System::String* k_pch_Power_Section; // 0x0
		// static const ::System::String* k_pch_Power_PowerOffOnExit_Bool; // 0x0
		// static const ::System::String* k_pch_Power_TurnOffScreensTimeout_Float; // 0x0
		// static const ::System::String* k_pch_Power_TurnOffControllersTimeout_Float; // 0x0
		// static const ::System::String* k_pch_Power_ReturnToWatchdogTimeout_Float; // 0x0
		// static const ::System::String* k_pch_Power_AutoLaunchSteamVROnButtonPress; // 0x0
		// static const ::System::String* k_pch_Power_PauseCompositorOnStandby_Bool; // 0x0
		// static const ::System::String* k_pch_Dashboard_Section; // 0x0
		// static const ::System::String* k_pch_Dashboard_EnableDashboard_Bool; // 0x0
		// static const ::System::String* k_pch_Dashboard_ArcadeMode_Bool; // 0x0
		// static const ::System::String* k_pch_modelskin_Section; // 0x0
		// static const ::System::String* k_pch_Driver_Enable_Bool; // 0x0
		// static const ::System::String* IVRScreenshots_Version; // 0x0
		// static const ::System::String* IVRResources_Version; // 0x0
		// static const ::System::String* IVRDriverManager_Version; // 0x0
		// static const ::System::String* FnTable_Prefix; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR__CTOR_OFFSET))(this);
		}

		static ::System::UInt32 InitInternal(::ZenFulcrum::VR::OpenVRBinding::EVRInitError& a1, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationType a2)
		{
			return ((::System::UInt32(*)(::ZenFulcrum::VR::OpenVRBinding::EVRInitError&, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationType))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_INITINTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Void ShutdownInternal()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_SHUTDOWNINTERNAL_OFFSET))();
		}

		static ::System::Boolean IsHmdPresent()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_ISHMDPRESENT_OFFSET))();
		}

		static ::System::Boolean IsRuntimeInstalled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_ISRUNTIMEINSTALLED_OFFSET))();
		}

		static ::System::String* GetStringForHmdError(::ZenFulcrum::VR::OpenVRBinding::EVRInitError a1)
		{
			return ((::System::String*(*)(::ZenFulcrum::VR::OpenVRBinding::EVRInitError))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GETSTRINGFORHMDERROR_OFFSET))(a1);
		}

		static ::System::IntPtr GetGenericInterface(::System::String* a1, ::ZenFulcrum::VR::OpenVRBinding::EVRInitError& a2)
		{
			return ((::System::IntPtr(*)(::System::String*, ::ZenFulcrum::VR::OpenVRBinding::EVRInitError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GETGENERICINTERFACE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsInterfaceVersionValid(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_ISINTERFACEVERSIONVALID_OFFSET))(a1);
		}

		static ::System::UInt32 GetInitToken()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GETINITTOKEN_OFFSET))();
		}

		static ::System::UInt32 get_VRToken()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GET_VRTOKEN_OFFSET))();
		}

		static ::System::Void set_VRToken(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_SET_VRTOKEN_OFFSET))(a1);
		}

		static ::ZenFulcrum::VR::OpenVRBinding::OpenVR_COpenVRContext* get_OpenVRInternal_ModuleContext()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::OpenVR_COpenVRContext*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GET_OPENVRINTERNAL_MODULECONTEXT_OFFSET))();
		}

		static ::ZenFulcrum::VR::OpenVRBinding::CVRSystem* get_System()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::CVRSystem*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GET_SYSTEM_OFFSET))();
		}

		static ::ZenFulcrum::VR::OpenVRBinding::CVRChaperone* get_Chaperone()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::CVRChaperone*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GET_CHAPERONE_OFFSET))();
		}

		static ::ZenFulcrum::VR::OpenVRBinding::CVRChaperoneSetup* get_ChaperoneSetup()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::CVRChaperoneSetup*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GET_CHAPERONESETUP_OFFSET))();
		}

		static ::ZenFulcrum::VR::OpenVRBinding::CVRCompositor* get_Compositor()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::CVRCompositor*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GET_COMPOSITOR_OFFSET))();
		}

		static ::ZenFulcrum::VR::OpenVRBinding::CVROverlay* get_Overlay()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::CVROverlay*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GET_OVERLAY_OFFSET))();
		}

		static ::ZenFulcrum::VR::OpenVRBinding::CVRRenderModels* get_RenderModels()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::CVRRenderModels*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GET_RENDERMODELS_OFFSET))();
		}

		static ::ZenFulcrum::VR::OpenVRBinding::CVRExtendedDisplay* get_ExtendedDisplay()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::CVRExtendedDisplay*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GET_EXTENDEDDISPLAY_OFFSET))();
		}

		static ::ZenFulcrum::VR::OpenVRBinding::CVRSettings* get_Settings()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::CVRSettings*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GET_SETTINGS_OFFSET))();
		}

		static ::ZenFulcrum::VR::OpenVRBinding::CVRApplications* get_Applications()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::CVRApplications*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GET_APPLICATIONS_OFFSET))();
		}

		static ::ZenFulcrum::VR::OpenVRBinding::CVRScreenshots* get_Screenshots()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::CVRScreenshots*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GET_SCREENSHOTS_OFFSET))();
		}

		static ::ZenFulcrum::VR::OpenVRBinding::CVRTrackedCamera* get_TrackedCamera()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::CVRTrackedCamera*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_GET_TRACKEDCAMERA_OFFSET))();
		}

		static ::ZenFulcrum::VR::OpenVRBinding::CVRSystem* Init(::ZenFulcrum::VR::OpenVRBinding::EVRInitError& a1, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationType a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::CVRSystem*(*)(::ZenFulcrum::VR::OpenVRBinding::EVRInitError&, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationType))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_INIT_OFFSET))(a1, a2);
		}

		static ::System::Void Shutdown()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_OPENVR_SHUTDOWN_OFFSET))();
		}
	};
}
