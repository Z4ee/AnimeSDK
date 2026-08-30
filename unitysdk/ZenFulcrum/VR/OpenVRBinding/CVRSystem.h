#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/DistortionCoordinates_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EDeviceActivityLevel.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EHiddenAreaMeshType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETextureType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackedControllerRole.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackedDeviceClass.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackedDeviceProperty.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackedPropertyError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackingUniverseOrigin.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRButtonId.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRControllerAxisType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVREventType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVREye.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRFirmwareError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HiddenAreaMesh_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix44_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/IVRSystem.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/TrackedDevicePose_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VRControllerState_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_t.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_ACKNOWLEDGEQUIT_EXITING_OFFSET UNITYSDK_OFFSET(0x1EFAFF40)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_ACKNOWLEDGEQUIT_USERPROMPT_OFFSET UNITYSDK_OFFSET(0x1EFAFF70)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_APPLYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1EFAF530)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_CAPTUREINPUTFOCUS_OFFSET UNITYSDK_OFFSET(0x1EFAFE40)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_COMPUTEDISTORTION_OFFSET UNITYSDK_OFFSET(0x1EFAF1E0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_DRIVERDEBUGREQUEST_OFFSET UNITYSDK_OFFSET(0x1EFAFED0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETBOOLTRACKEDDEVICEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1EFAF620)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETBUTTONIDNAMEFROMENUM_OFFSET UNITYSDK_OFFSET(0x1EFAFDA0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETCONTROLLERAXISTYPENAMEFROMENUM_OFFSET UNITYSDK_OFFSET(0x1EFAFDF0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETCONTROLLERROLEFORTRACKEDDEVICEINDEX_OFFSET UNITYSDK_OFFSET(0x1EFAF590)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETCONTROLLERSTATEWITHPOSE_OFFSET UNITYSDK_OFFSET(0x1EFAFBA0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETCONTROLLERSTATE_OFFSET UNITYSDK_OFFSET(0x1EFAFA10)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETD3D9ADAPTERINDEX_OFFSET UNITYSDK_OFFSET(0x1EFAF2B0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETDEVICETOABSOLUTETRACKINGPOSE_OFFSET UNITYSDK_OFFSET(0x1EFAF3A0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETDXGIOUTPUTINFO_OFFSET UNITYSDK_OFFSET(0x1EFAF2E0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETEVENTTYPENAMEFROMENUM_OFFSET UNITYSDK_OFFSET(0x1EFAF980)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETEYETOHEADTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1EFAF220)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETFLOATTRACKEDDEVICEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1EFAF650)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETHIDDENAREAMESH_OFFSET UNITYSDK_OFFSET(0x1EFAF9D0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETINT32TRACKEDDEVICEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1EFAF680)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETMATRIX34TRACKEDDEVICEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1EFAF6E0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETOUTPUTDEVICE_OFFSET UNITYSDK_OFFSET(0x1EFAF310)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x1EFAF110)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETPROJECTIONRAW_OFFSET UNITYSDK_OFFSET(0x1EFAF180)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETPROPERRORNAMEFROMENUM_OFFSET UNITYSDK_OFFSET(0x1EFAF790)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETRAWZEROPOSETOSTANDINGABSOLUTETRACKINGPOSE_OFFSET UNITYSDK_OFFSET(0x1EFAF460)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETRECOMMENDEDRENDERTARGETSIZE_OFFSET UNITYSDK_OFFSET(0x1EFAF0D0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETSEATEDZEROPOSETOSTANDINGABSOLUTETRACKINGPOSE_OFFSET UNITYSDK_OFFSET(0x1EFAF410)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETSORTEDTRACKEDDEVICEINDICESOFCLASS_OFFSET UNITYSDK_OFFSET(0x1EFAF4B0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETSTRINGTRACKEDDEVICEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1EFAF740)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETTIMESINCELASTVSYNC_OFFSET UNITYSDK_OFFSET(0x1EFAF270)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETTRACKEDDEVICEACTIVITYLEVEL_OFFSET UNITYSDK_OFFSET(0x1EFAF500)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETTRACKEDDEVICECLASS_OFFSET UNITYSDK_OFFSET(0x1EFAF5C0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETTRACKEDDEVICEINDEXFORCONTROLLERROLE_OFFSET UNITYSDK_OFFSET(0x1EFAF560)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETUINT64TRACKEDDEVICEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1EFAF6B0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_ISDISPLAYONDESKTOP_OFFSET UNITYSDK_OFFSET(0x1EFAF340)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_ISINPUTFOCUSCAPTUREDBYANOTHERPROCESS_OFFSET UNITYSDK_OFFSET(0x1EFAFEA0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_ISTRACKEDDEVICECONNECTED_OFFSET UNITYSDK_OFFSET(0x1EFAF5F0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_PERFORMFIRMWAREUPDATE_OFFSET UNITYSDK_OFFSET(0x1EFAFF10)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_POLLNEXTEVENTWITHPOSE_OFFSET UNITYSDK_OFFSET(0x1EFAF940)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_POLLNEXTEVENT_OFFSET UNITYSDK_OFFSET(0x1EFAF7E0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_RELEASEINPUTFOCUS_OFFSET UNITYSDK_OFFSET(0x1EFAFE70)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_RESETSEATEDZEROPOSE_OFFSET UNITYSDK_OFFSET(0x1EFAF3E0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_SETDISPLAYVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1EFAF370)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_TRIGGERHAPTICPULSE_OFFSET UNITYSDK_OFFSET(0x1EFAFD70)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFAEFE0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRSystem_TypeDefinitionIndex = 37892;

	class CVRSystem : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__CTOR_OFFSET))(this, a1);
		}

		::System::Void GetRecommendedRenderTargetSize(::System::UInt32& a1, ::System::UInt32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETRECOMMENDEDRENDERTARGETSIZE_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::HmdMatrix44_t GetProjectionMatrix(::ZenFulcrum::VR::OpenVRBinding::EVREye a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HmdMatrix44_t(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETPROJECTIONMATRIX_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GetProjectionRaw(::ZenFulcrum::VR::OpenVRBinding::EVREye a1, ::System::Single& a2, ::System::Single& a3, ::System::Single& a4, ::System::Single& a5)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETPROJECTIONRAW_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean ComputeDistortion(::ZenFulcrum::VR::OpenVRBinding::EVREye a1, ::System::Single a2, ::System::Single a3, ::ZenFulcrum::VR::OpenVRBinding::DistortionCoordinates_t& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::Single, ::System::Single, ::ZenFulcrum::VR::OpenVRBinding::DistortionCoordinates_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_COMPUTEDISTORTION_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t GetEyeToHeadTransform(::ZenFulcrum::VR::OpenVRBinding::EVREye a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETEYETOHEADTRANSFORM_OFFSET))(this, a1);
		}

		::System::Boolean GetTimeSinceLastVsync(::System::Single& a1, ::System::UInt64& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&, ::System::UInt64&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETTIMESINCELASTVSYNC_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetD3D9AdapterIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETD3D9ADAPTERINDEX_OFFSET))(this);
		}

		::System::Void GetDXGIOutputInfo(::System::Int32& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETDXGIOUTPUTINFO_OFFSET))(this, a1);
		}

		::System::Void GetOutputDevice(::System::UInt64& a1, ::ZenFulcrum::VR::OpenVRBinding::ETextureType a2, ::System::IntPtr a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64&, ::ZenFulcrum::VR::OpenVRBinding::ETextureType, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETOUTPUTDEVICE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsDisplayOnDesktop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_ISDISPLAYONDESKTOP_OFFSET))(this);
		}

		::System::Boolean SetDisplayVisibility(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_SETDISPLAYVISIBILITY_OFFSET))(this, a1);
		}

		::System::Void GetDeviceToAbsoluteTrackingPose(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin a1, ::System::Single a2, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::System::Single, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETDEVICETOABSOLUTETRACKINGPOSE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResetSeatedZeroPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_RESETSEATEDZEROPOSE_OFFSET))(this);
		}

		::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETSEATEDZEROPOSETOSTANDINGABSOLUTETRACKINGPOSE_OFFSET))(this);
		}

		::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETRAWZEROPOSETOSTANDINGABSOLUTETRACKINGPOSE_OFFSET))(this);
		}

		::System::UInt32 GetSortedTrackedDeviceIndicesOfClass(::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceClass a1, ::Il2CppArray<::System::UInt32>* a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceClass, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETSORTEDTRACKEDDEVICEINDICESOFCLASS_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EDeviceActivityLevel GetTrackedDeviceActivityLevel(::System::UInt32 a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EDeviceActivityLevel(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETTRACKEDDEVICEACTIVITYLEVEL_OFFSET))(this, a1);
		}

		::System::Void ApplyTransform(::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& a1, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& a2, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& a3)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_APPLYTRANSFORM_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetTrackedDeviceIndexForControllerRole(::ZenFulcrum::VR::OpenVRBinding::ETrackedControllerRole a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackedControllerRole))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETTRACKEDDEVICEINDEXFORCONTROLLERROLE_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::ETrackedControllerRole GetControllerRoleForTrackedDeviceIndex(::System::UInt32 a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::ETrackedControllerRole(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETCONTROLLERROLEFORTRACKEDDEVICEINDEX_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceClass GetTrackedDeviceClass(::System::UInt32 a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceClass(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETTRACKEDDEVICECLASS_OFFSET))(this, a1);
		}

		::System::Boolean IsTrackedDeviceConnected(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_ISTRACKEDDEVICECONNECTED_OFFSET))(this, a1);
		}

		::System::Boolean GetBoolTrackedDeviceProperty(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty a2, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETBOOLTRACKEDDEVICEPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetFloatTrackedDeviceProperty(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty a2, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError& a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETFLOATTRACKEDDEVICEPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetInt32TrackedDeviceProperty(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty a2, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError& a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETINT32TRACKEDDEVICEPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 GetUint64TrackedDeviceProperty(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty a2, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError& a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETUINT64TRACKEDDEVICEPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t GetMatrix34TrackedDeviceProperty(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty a2, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError& a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETMATRIX34TRACKEDDEVICEPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetStringTrackedDeviceProperty(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty a2, ::System::Text::StringBuilder* a3, ::System::UInt32 a4, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError& a5)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETSTRINGTRACKEDDEVICEPROPERTY_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::String* GetPropErrorNameFromEnum(::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError a1)
		{
			return ((::System::String*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETPROPERRORNAMEFROMENUM_OFFSET))(this, a1);
		}

		::System::Boolean PollNextEvent(::ZenFulcrum::VR::OpenVRBinding::VREvent_t& a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_POLLNEXTEVENT_OFFSET))(this, a1, a2);
		}

		::System::Boolean PollNextEventWithPose(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin a1, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t& a2, ::System::UInt32 a3, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t&, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_POLLNEXTEVENTWITHPOSE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* GetEventTypeNameFromEnum(::ZenFulcrum::VR::OpenVRBinding::EVREventType a1)
		{
			return ((::System::String*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREventType))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETEVENTTYPENAMEFROMENUM_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::HiddenAreaMesh_t GetHiddenAreaMesh(::ZenFulcrum::VR::OpenVRBinding::EVREye a1, ::ZenFulcrum::VR::OpenVRBinding::EHiddenAreaMeshType a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HiddenAreaMesh_t(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::ZenFulcrum::VR::OpenVRBinding::EHiddenAreaMeshType))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETHIDDENAREAMESH_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetControllerState(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t& a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETCONTROLLERSTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetControllerStateWithPose(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin a1, ::System::UInt32 a2, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t& a3, ::System::UInt32 a4, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t&, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETCONTROLLERSTATEWITHPOSE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void TriggerHapticPulse(::System::UInt32 a1, ::System::UInt32 a2, ::System::Char a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Char))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_TRIGGERHAPTICPULSE_OFFSET))(this, a1, a2, a3);
		}

		::System::String* GetButtonIdNameFromEnum(::ZenFulcrum::VR::OpenVRBinding::EVRButtonId a1)
		{
			return ((::System::String*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRButtonId))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETBUTTONIDNAMEFROMENUM_OFFSET))(this, a1);
		}

		::System::String* GetControllerAxisTypeNameFromEnum(::ZenFulcrum::VR::OpenVRBinding::EVRControllerAxisType a1)
		{
			return ((::System::String*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRControllerAxisType))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETCONTROLLERAXISTYPENAMEFROMENUM_OFFSET))(this, a1);
		}

		::System::Boolean CaptureInputFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_CAPTUREINPUTFOCUS_OFFSET))(this);
		}

		::System::Void ReleaseInputFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_RELEASEINPUTFOCUS_OFFSET))(this);
		}

		::System::Boolean IsInputFocusCapturedByAnotherProcess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_ISINPUTFOCUSCAPTUREDBYANOTHERPROCESS_OFFSET))(this);
		}

		::System::UInt32 DriverDebugRequest(::System::UInt32 a1, ::System::String* a2, ::System::String* a3, ::System::UInt32 a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_DRIVERDEBUGREQUEST_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRFirmwareError PerformFirmwareUpdate(::System::UInt32 a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRFirmwareError(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_PERFORMFIRMWAREUPDATE_OFFSET))(this, a1);
		}

		::System::Void AcknowledgeQuit_Exiting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_ACKNOWLEDGEQUIT_EXITING_OFFSET))(this);
		}

		::System::Void AcknowledgeQuit_UserPrompt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_ACKNOWLEDGEQUIT_USERPROMPT_OFFSET))(this);
		}
	};
}
