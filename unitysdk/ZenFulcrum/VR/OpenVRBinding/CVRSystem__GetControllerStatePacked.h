#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VRControllerState_t_Packed.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEPACKED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CA96C0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEPACKED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CA9770)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEPACKED_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CA8BD0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEPACKED__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA96A0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRSystem__GetControllerStatePacked_TypeDefinitionIndex = 30234;

	class CVRSystem__GetControllerStatePacked : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEPACKED__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::UInt32 unControllerDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed& pControllerState, ::System::UInt32 unControllerStateSize)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEPACKED_INVOKE_OFFSET))(this, unControllerDeviceIndex, pControllerState, unControllerStateSize);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 unControllerDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed& pControllerState, ::System::UInt32 unControllerStateSize, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed&, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEPACKED_BEGININVOKE_OFFSET))(this, unControllerDeviceIndex, pControllerState, unControllerStateSize, callback, object);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed& pControllerState, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEPACKED_ENDINVOKE_OFFSET))(this, pControllerState, result);
		}
	};
}
