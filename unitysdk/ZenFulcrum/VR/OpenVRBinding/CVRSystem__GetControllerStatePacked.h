#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VRControllerState_t_Packed.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEPACKED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB0010)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEPACKED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB00C0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEPACKED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFAFB80)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEPACKED__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFAFFA0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRSystem__GetControllerStatePacked_TypeDefinitionIndex = 37895;

	class CVRSystem__GetControllerStatePacked : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEPACKED__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed& a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEPACKED_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed& a2, ::System::UInt32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed&, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEPACKED_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRSYSTEM__GETCONTROLLERSTATEPACKED_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
