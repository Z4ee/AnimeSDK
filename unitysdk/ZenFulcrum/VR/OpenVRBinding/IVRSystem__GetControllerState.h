#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VRControllerState_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERSTATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CE05A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERSTATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CE0650)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERSTATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CE0200)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE01E0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetControllerState_TypeDefinitionIndex = 29965;

	class IVRSystem__GetControllerState : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERSTATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::UInt32 unControllerDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t& pControllerState, ::System::UInt32 unControllerStateSize)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERSTATE_INVOKE_OFFSET))(this, unControllerDeviceIndex, pControllerState, unControllerStateSize);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 unControllerDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t& pControllerState, ::System::UInt32 unControllerStateSize, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t&, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERSTATE_BEGININVOKE_OFFSET))(this, unControllerDeviceIndex, pControllerState, unControllerStateSize, callback, object);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t& pControllerState, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETCONTROLLERSTATE_ENDINVOKE_OFFSET))(this, pControllerState, result);
		}
	};
}
