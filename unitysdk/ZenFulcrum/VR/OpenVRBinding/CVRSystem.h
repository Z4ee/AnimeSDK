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

#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_ACKNOWLEDGEQUIT_EXITING_OFFSET UNITYSDK_OFFSET(0x18CA9660)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_ACKNOWLEDGEQUIT_USERPROMPT_OFFSET UNITYSDK_OFFSET(0x18CA9680)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_APPLYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18CA8320)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_CAPTUREINPUTFOCUS_OFFSET UNITYSDK_OFFSET(0x18CA95C0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_COMPUTEDISTORTION_OFFSET UNITYSDK_OFFSET(0x18CA8070)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_DRIVERDEBUGREQUEST_OFFSET UNITYSDK_OFFSET(0x18CA9620)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETBOOLTRACKEDDEVICEPROPERTY_OFFSET UNITYSDK_OFFSET(0x18CA83C0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETBUTTONIDNAMEFROMENUM_OFFSET UNITYSDK_OFFSET(0x18CA9520)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETCONTROLLERAXISTYPENAMEFROMENUM_OFFSET UNITYSDK_OFFSET(0x18CA9570)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETCONTROLLERROLEFORTRACKEDDEVICEINDEX_OFFSET UNITYSDK_OFFSET(0x18CA8360)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETCONTROLLERSTATEWITHPOSE_OFFSET UNITYSDK_OFFSET(0x18CA8F70)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETCONTROLLERSTATE_OFFSET UNITYSDK_OFFSET(0x18CA8A60)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETD3D9ADAPTERINDEX_OFFSET UNITYSDK_OFFSET(0x18CA8110)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETDEVICETOABSOLUTETRACKINGPOSE_OFFSET UNITYSDK_OFFSET(0x18CA81D0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETDXGIOUTPUTINFO_OFFSET UNITYSDK_OFFSET(0x18CA8130)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETEVENTTYPENAMEFROMENUM_OFFSET UNITYSDK_OFFSET(0x18CA89D0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETEYETOHEADTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18CA8090)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETFLOATTRACKEDDEVICEPROPERTY_OFFSET UNITYSDK_OFFSET(0x18CA83E0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETHIDDENAREAMESH_OFFSET UNITYSDK_OFFSET(0x18CA8A20)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETINT32TRACKEDDEVICEPROPERTY_OFFSET UNITYSDK_OFFSET(0x18CA8400)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETMATRIX34TRACKEDDEVICEPROPERTY_OFFSET UNITYSDK_OFFSET(0x18CA8440)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETOUTPUTDEVICE_OFFSET UNITYSDK_OFFSET(0x18CA8160)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x18CA7FC0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETPROJECTIONRAW_OFFSET UNITYSDK_OFFSET(0x18CA8020)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETPROPERRORNAMEFROMENUM_OFFSET UNITYSDK_OFFSET(0x18CA84C0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETRAWZEROPOSETOSTANDINGABSOLUTETRACKINGPOSE_OFFSET UNITYSDK_OFFSET(0x18CA8270)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETRECOMMENDEDRENDERTARGETSIZE_OFFSET UNITYSDK_OFFSET(0x18CA7F90)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETSEATEDZEROPOSETOSTANDINGABSOLUTETRACKINGPOSE_OFFSET UNITYSDK_OFFSET(0x18CA8220)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETSORTEDTRACKEDDEVICEINDICESOFCLASS_OFFSET UNITYSDK_OFFSET(0x18CA82C0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETSTRINGTRACKEDDEVICEPROPERTY_OFFSET UNITYSDK_OFFSET(0x18CA84A0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETTIMESINCELASTVSYNC_OFFSET UNITYSDK_OFFSET(0x18CA80E0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETTRACKEDDEVICEACTIVITYLEVEL_OFFSET UNITYSDK_OFFSET(0x18CA8300)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETTRACKEDDEVICECLASS_OFFSET UNITYSDK_OFFSET(0x18CA8380)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETTRACKEDDEVICEINDEXFORCONTROLLERROLE_OFFSET UNITYSDK_OFFSET(0x18CA8340)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETUINT64TRACKEDDEVICEPROPERTY_OFFSET UNITYSDK_OFFSET(0x18CA8420)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_ISDISPLAYONDESKTOP_OFFSET UNITYSDK_OFFSET(0x18CA8190)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_ISINPUTFOCUSCAPTUREDBYANOTHERPROCESS_OFFSET UNITYSDK_OFFSET(0x18CA9600)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_ISTRACKEDDEVICECONNECTED_OFFSET UNITYSDK_OFFSET(0x18CA83A0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_PERFORMFIRMWAREUPDATE_OFFSET UNITYSDK_OFFSET(0x18CA9640)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_POLLNEXTEVENTWITHPOSE_OFFSET UNITYSDK_OFFSET(0x18CA89B0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_POLLNEXTEVENT_OFFSET UNITYSDK_OFFSET(0x18CA8510)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_RELEASEINPUTFOCUS_OFFSET UNITYSDK_OFFSET(0x18CA95E0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_RESETSEATEDZEROPOSE_OFFSET UNITYSDK_OFFSET(0x18CA8200)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_SETDISPLAYVISIBILITY_OFFSET UNITYSDK_OFFSET(0x18CA81B0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_TRIGGERHAPTICPULSE_OFFSET UNITYSDK_OFFSET(0x18CA9500)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA7EA0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRSystem_TypeDefinitionIndex = 30231;

	class CVRSystem : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr pInterface)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__CTOR_OFFSET))(this, pInterface);
		}

		::System::Void GetRecommendedRenderTargetSize(::System::UInt32& pnWidth, ::System::UInt32& pnHeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETRECOMMENDEDRENDERTARGETSIZE_OFFSET))(this, pnWidth, pnHeight);
		}

		::ZenFulcrum::VR::OpenVRBinding::HmdMatrix44_t GetProjectionMatrix(::ZenFulcrum::VR::OpenVRBinding::EVREye eEye, ::System::Single fNearZ, ::System::Single fFarZ)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HmdMatrix44_t(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETPROJECTIONMATRIX_OFFSET))(this, eEye, fNearZ, fFarZ);
		}

		::System::Void GetProjectionRaw(::ZenFulcrum::VR::OpenVRBinding::EVREye eEye, ::System::Single& pfLeft, ::System::Single& pfRight, ::System::Single& pfTop, ::System::Single& pfBottom)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETPROJECTIONRAW_OFFSET))(this, eEye, pfLeft, pfRight, pfTop, pfBottom);
		}

		::System::Boolean ComputeDistortion(::ZenFulcrum::VR::OpenVRBinding::EVREye eEye, ::System::Single fU, ::System::Single fV, ::ZenFulcrum::VR::OpenVRBinding::DistortionCoordinates_t& pDistortionCoordinates)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::Single, ::System::Single, ::ZenFulcrum::VR::OpenVRBinding::DistortionCoordinates_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_COMPUTEDISTORTION_OFFSET))(this, eEye, fU, fV, pDistortionCoordinates);
		}

		::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t GetEyeToHeadTransform(::ZenFulcrum::VR::OpenVRBinding::EVREye eEye)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETEYETOHEADTRANSFORM_OFFSET))(this, eEye);
		}

		::System::Boolean GetTimeSinceLastVsync(::System::Single& pfSecondsSinceLastVsync, ::System::UInt64& pulFrameCounter)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&, ::System::UInt64&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETTIMESINCELASTVSYNC_OFFSET))(this, pfSecondsSinceLastVsync, pulFrameCounter);
		}

		::System::Int32 GetD3D9AdapterIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETD3D9ADAPTERINDEX_OFFSET))(this);
		}

		::System::Void GetDXGIOutputInfo(::System::Int32& pnAdapterIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETDXGIOUTPUTINFO_OFFSET))(this, pnAdapterIndex);
		}

		::System::Void GetOutputDevice(::System::UInt64& pnDevice, ::ZenFulcrum::VR::OpenVRBinding::ETextureType textureType, ::System::IntPtr pInstance)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64&, ::ZenFulcrum::VR::OpenVRBinding::ETextureType, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETOUTPUTDEVICE_OFFSET))(this, pnDevice, textureType, pInstance);
		}

		::System::Boolean IsDisplayOnDesktop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_ISDISPLAYONDESKTOP_OFFSET))(this);
		}

		::System::Boolean SetDisplayVisibility(::System::Boolean bIsVisibleOnDesktop)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_SETDISPLAYVISIBILITY_OFFSET))(this, bIsVisibleOnDesktop);
		}

		::System::Void GetDeviceToAbsoluteTrackingPose(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin eOrigin, ::System::Single fPredictedSecondsToPhotonsFromNow, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>* pTrackedDevicePoseArray)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::System::Single, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETDEVICETOABSOLUTETRACKINGPOSE_OFFSET))(this, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray);
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

		::System::UInt32 GetSortedTrackedDeviceIndicesOfClass(::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceClass eTrackedDeviceClass, ::Il2CppArray<::System::UInt32>* punTrackedDeviceIndexArray, ::System::UInt32 unRelativeToTrackedDeviceIndex)
		{
			return ((::System::UInt32(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceClass, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETSORTEDTRACKEDDEVICEINDICESOFCLASS_OFFSET))(this, eTrackedDeviceClass, punTrackedDeviceIndexArray, unRelativeToTrackedDeviceIndex);
		}

		::ZenFulcrum::VR::OpenVRBinding::EDeviceActivityLevel GetTrackedDeviceActivityLevel(::System::UInt32 unDeviceId)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EDeviceActivityLevel(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETTRACKEDDEVICEACTIVITYLEVEL_OFFSET))(this, unDeviceId);
		}

		::System::Void ApplyTransform(::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& pOutputPose, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& pTrackedDevicePose, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pTransform)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_APPLYTRANSFORM_OFFSET))(this, pOutputPose, pTrackedDevicePose, pTransform);
		}

		::System::UInt32 GetTrackedDeviceIndexForControllerRole(::ZenFulcrum::VR::OpenVRBinding::ETrackedControllerRole unDeviceType)
		{
			return ((::System::UInt32(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackedControllerRole))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETTRACKEDDEVICEINDEXFORCONTROLLERROLE_OFFSET))(this, unDeviceType);
		}

		::ZenFulcrum::VR::OpenVRBinding::ETrackedControllerRole GetControllerRoleForTrackedDeviceIndex(::System::UInt32 unDeviceIndex)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::ETrackedControllerRole(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETCONTROLLERROLEFORTRACKEDDEVICEINDEX_OFFSET))(this, unDeviceIndex);
		}

		::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceClass GetTrackedDeviceClass(::System::UInt32 unDeviceIndex)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceClass(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETTRACKEDDEVICECLASS_OFFSET))(this, unDeviceIndex);
		}

		::System::Boolean IsTrackedDeviceConnected(::System::UInt32 unDeviceIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_ISTRACKEDDEVICECONNECTED_OFFSET))(this, unDeviceIndex);
		}

		::System::Boolean GetBoolTrackedDeviceProperty(::System::UInt32 unDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty prop, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError& pError)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETBOOLTRACKEDDEVICEPROPERTY_OFFSET))(this, unDeviceIndex, prop, pError);
		}

		::System::Single GetFloatTrackedDeviceProperty(::System::UInt32 unDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty prop, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError& pError)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETFLOATTRACKEDDEVICEPROPERTY_OFFSET))(this, unDeviceIndex, prop, pError);
		}

		::System::Int32 GetInt32TrackedDeviceProperty(::System::UInt32 unDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty prop, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError& pError)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETINT32TRACKEDDEVICEPROPERTY_OFFSET))(this, unDeviceIndex, prop, pError);
		}

		::System::UInt64 GetUint64TrackedDeviceProperty(::System::UInt32 unDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty prop, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError& pError)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETUINT64TRACKEDDEVICEPROPERTY_OFFSET))(this, unDeviceIndex, prop, pError);
		}

		::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t GetMatrix34TrackedDeviceProperty(::System::UInt32 unDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty prop, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError& pError)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETMATRIX34TRACKEDDEVICEPROPERTY_OFFSET))(this, unDeviceIndex, prop, pError);
		}

		::System::UInt32 GetStringTrackedDeviceProperty(::System::UInt32 unDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty prop, ::System::Text::StringBuilder* pchValue, ::System::UInt32 unBufferSize, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError& pError)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::ETrackedDeviceProperty, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETSTRINGTRACKEDDEVICEPROPERTY_OFFSET))(this, unDeviceIndex, prop, pchValue, unBufferSize, pError);
		}

		::System::String* GetPropErrorNameFromEnum(::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError error)
		{
			return ((::System::String*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackedPropertyError))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETPROPERRORNAMEFROMENUM_OFFSET))(this, error);
		}

		::System::Boolean PollNextEvent(::ZenFulcrum::VR::OpenVRBinding::VREvent_t& pEvent, ::System::UInt32 uncbVREvent)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_POLLNEXTEVENT_OFFSET))(this, pEvent, uncbVREvent);
		}

		::System::Boolean PollNextEventWithPose(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin eOrigin, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t& pEvent, ::System::UInt32 uncbVREvent, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& pTrackedDevicePose)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::ZenFulcrum::VR::OpenVRBinding::VREvent_t&, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_POLLNEXTEVENTWITHPOSE_OFFSET))(this, eOrigin, pEvent, uncbVREvent, pTrackedDevicePose);
		}

		::System::String* GetEventTypeNameFromEnum(::ZenFulcrum::VR::OpenVRBinding::EVREventType eType)
		{
			return ((::System::String*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREventType))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETEVENTTYPENAMEFROMENUM_OFFSET))(this, eType);
		}

		::ZenFulcrum::VR::OpenVRBinding::HiddenAreaMesh_t GetHiddenAreaMesh(::ZenFulcrum::VR::OpenVRBinding::EVREye eEye, ::ZenFulcrum::VR::OpenVRBinding::EHiddenAreaMeshType type)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HiddenAreaMesh_t(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::ZenFulcrum::VR::OpenVRBinding::EHiddenAreaMeshType))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETHIDDENAREAMESH_OFFSET))(this, eEye, type);
		}

		::System::Boolean GetControllerState(::System::UInt32 unControllerDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t& pControllerState, ::System::UInt32 unControllerStateSize)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETCONTROLLERSTATE_OFFSET))(this, unControllerDeviceIndex, pControllerState, unControllerStateSize);
		}

		::System::Boolean GetControllerStateWithPose(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin eOrigin, ::System::UInt32 unControllerDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t& pControllerState, ::System::UInt32 unControllerStateSize, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& pTrackedDevicePose)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t&, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETCONTROLLERSTATEWITHPOSE_OFFSET))(this, eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose);
		}

		::System::Void TriggerHapticPulse(::System::UInt32 unControllerDeviceIndex, ::System::UInt32 unAxisId, ::System::Char usDurationMicroSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Char))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_TRIGGERHAPTICPULSE_OFFSET))(this, unControllerDeviceIndex, unAxisId, usDurationMicroSec);
		}

		::System::String* GetButtonIdNameFromEnum(::ZenFulcrum::VR::OpenVRBinding::EVRButtonId eButtonId)
		{
			return ((::System::String*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRButtonId))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETBUTTONIDNAMEFROMENUM_OFFSET))(this, eButtonId);
		}

		::System::String* GetControllerAxisTypeNameFromEnum(::ZenFulcrum::VR::OpenVRBinding::EVRControllerAxisType eAxisType)
		{
			return ((::System::String*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRControllerAxisType))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_GETCONTROLLERAXISTYPENAMEFROMENUM_OFFSET))(this, eAxisType);
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

		::System::UInt32 DriverDebugRequest(::System::UInt32 unDeviceIndex, ::System::String* pchRequest, ::System::String* pchResponseBuffer, ::System::UInt32 unResponseBufferSize)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_DRIVERDEBUGREQUEST_OFFSET))(this, unDeviceIndex, pchRequest, pchResponseBuffer, unResponseBufferSize);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRFirmwareError PerformFirmwareUpdate(::System::UInt32 unDeviceIndex)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRFirmwareError(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM_PERFORMFIRMWAREUPDATE_OFFSET))(this, unDeviceIndex);
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
