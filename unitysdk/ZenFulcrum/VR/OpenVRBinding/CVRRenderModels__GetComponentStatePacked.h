#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/RenderModel_ComponentState_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/RenderModel_ControllerMode_State_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VRControllerState_t_Packed.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS__GETCOMPONENTSTATEPACKED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFAE760)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS__GETCOMPONENTSTATEPACKED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFAE830)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS__GETCOMPONENTSTATEPACKED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFAE5B0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS__GETCOMPONENTSTATEPACKED__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFAE6E0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRRenderModels__GetComponentStatePacked_TypeDefinitionIndex = 37909;

	class CVRRenderModels__GetComponentStatePacked : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS__GETCOMPONENTSTATEPACKED__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::String* a1, ::System::String* a2, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed& a3, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t& a4, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS__GETCOMPONENTSTATEPACKED_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::String* a2, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed& a3, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t& a4, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t& a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS__GETCOMPONENTSTATEPACKED_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed& a1, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t& a2, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t& a3, ::System::IAsyncResult* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS__GETCOMPONENTSTATEPACKED_ENDINVOKE_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
