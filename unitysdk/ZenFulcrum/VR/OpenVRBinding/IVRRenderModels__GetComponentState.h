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

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTSTATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A70DCC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTSTATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A70DD90)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTSTATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A70D5C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A70D5A0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRRenderModels__GetComponentState_TypeDefinitionIndex = 35916;

	class IVRRenderModels__GetComponentState : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTSTATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::String* pchRenderModelName, ::System::String* pchComponentName, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t& pControllerState, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t& pState, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t& pComponentState)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTSTATE_INVOKE_OFFSET))(this, pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchRenderModelName, ::System::String* pchComponentName, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t& pControllerState, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t& pState, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t& pComponentState, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTSTATE_BEGININVOKE_OFFSET))(this, pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState, callback, object);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t& pControllerState, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t& pState, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t& pComponentState, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETCOMPONENTSTATE_ENDINVOKE_OFFSET))(this, pControllerState, pState, pComponentState, result);
		}
	};
}
