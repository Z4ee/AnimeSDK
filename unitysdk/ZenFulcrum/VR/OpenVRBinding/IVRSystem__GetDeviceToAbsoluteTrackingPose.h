#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackingUniverseOrigin.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/TrackedDevicePose_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETDEVICETOABSOLUTETRACKINGPOSE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A71CC40)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETDEVICETOABSOLUTETRACKINGPOSE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A71CD00)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETDEVICETOABSOLUTETRACKINGPOSE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A71C850)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETDEVICETOABSOLUTETRACKINGPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A71C830)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetDeviceToAbsoluteTrackingPose_TypeDefinitionIndex = 35663;

	class IVRSystem__GetDeviceToAbsoluteTrackingPose : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETDEVICETOABSOLUTETRACKINGPOSE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin eOrigin, ::System::Single fPredictedSecondsToPhotonsFromNow, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>* pTrackedDevicePoseArray, ::System::UInt32 unTrackedDevicePoseArrayCount)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::System::Single, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETDEVICETOABSOLUTETRACKINGPOSE_INVOKE_OFFSET))(this, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin eOrigin, ::System::Single fPredictedSecondsToPhotonsFromNow, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>* pTrackedDevicePoseArray, ::System::UInt32 unTrackedDevicePoseArrayCount, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::System::Single, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETDEVICETOABSOLUTETRACKINGPOSE_BEGININVOKE_OFFSET))(this, eOrigin, fPredictedSecondsToPhotonsFromNow, pTrackedDevicePoseArray, unTrackedDevicePoseArrayCount, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETDEVICETOABSOLUTETRACKINGPOSE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
