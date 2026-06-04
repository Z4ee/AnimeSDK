#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/RenderModel_ComponentState_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/RenderModel_ControllerMode_State_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VRControllerState_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTSTATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B521B40)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTSTATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B521C10)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTSTATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B521B10)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B521A90)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRRenderModels__GetComponentState_TypeDefinitionIndex = 36216;

	class IVRRenderModels__GetComponentState : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTSTATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::String* a1, ::System::String* a2, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t& a3, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t& a4, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTSTATE_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::String* a2, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t& a3, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t& a4, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t& a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTSTATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t& a1, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t& a2, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t& a3, ::System::IAsyncResult* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTSTATE_ENDINVOKE_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
