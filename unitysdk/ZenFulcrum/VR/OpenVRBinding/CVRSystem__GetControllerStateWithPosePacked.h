#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackingUniverseOrigin.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/TrackedDevicePose_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VRControllerState_t_Packed.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEWITHPOSEPACKED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB0160)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEWITHPOSEPACKED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB0250)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEWITHPOSEPACKED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFAFD30)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEWITHPOSEPACKED__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB00F0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRSystem__GetControllerStateWithPosePacked_TypeDefinitionIndex = 37897;

	class CVRSystem__GetControllerStateWithPosePacked : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEWITHPOSEPACKED__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin a1, ::System::UInt32 a2, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed& a3, ::System::UInt32 a4, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed&, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEWITHPOSEPACKED_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin a1, ::System::UInt32 a2, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed& a3, ::System::UInt32 a4, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed&, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEWITHPOSEPACKED_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed& a1, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& a2, ::System::IAsyncResult* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed&, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEWITHPOSEPACKED_ENDINVOKE_OFFSET))(this, a1, a2, a3);
		}
	};
}
