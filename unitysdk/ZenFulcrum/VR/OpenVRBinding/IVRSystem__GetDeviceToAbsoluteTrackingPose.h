#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackingUniverseOrigin.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/TrackedDevicePose_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETDEVICETOABSOLUTETRACKINGPOSE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFC2240)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETDEVICETOABSOLUTETRACKINGPOSE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFC2300)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETDEVICETOABSOLUTETRACKINGPOSE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFC2210)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETDEVICETOABSOLUTETRACKINGPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFC21A0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetDeviceToAbsoluteTrackingPose_TypeDefinitionIndex = 37604;

	class IVRSystem__GetDeviceToAbsoluteTrackingPose : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETDEVICETOABSOLUTETRACKINGPOSE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin a1, ::System::Single a2, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::System::Single, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETDEVICETOABSOLUTETRACKINGPOSE_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin a1, ::System::Single a2, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>* a3, ::System::UInt32 a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::System::Single, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETDEVICETOABSOLUTETRACKINGPOSE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETDEVICETOABSOLUTETRACKINGPOSE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
