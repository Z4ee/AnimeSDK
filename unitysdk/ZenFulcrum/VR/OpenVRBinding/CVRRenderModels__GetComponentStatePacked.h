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

#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS__GETCOMPONENTSTATEPACKED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E2D20)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS__GETCOMPONENTSTATEPACKED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E2DF0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS__GETCOMPONENTSTATEPACKED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E2550)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS__GETCOMPONENTSTATEPACKED__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E2D00)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRRenderModels__GetComponentStatePacked_TypeDefinitionIndex = 35968;

	class CVRRenderModels__GetComponentStatePacked : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS__GETCOMPONENTSTATEPACKED__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::String* pchRenderModelName, ::System::String* pchComponentName, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed& pControllerState, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t& pState, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t& pComponentState)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS__GETCOMPONENTSTATEPACKED_INVOKE_OFFSET))(this, pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchRenderModelName, ::System::String* pchComponentName, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed& pControllerState, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t& pState, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t& pComponentState, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS__GETCOMPONENTSTATEPACKED_BEGININVOKE_OFFSET))(this, pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState, callback, object);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed& pControllerState, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t& pState, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t& pComponentState, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::VRControllerState_t_Packed&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ControllerMode_State_t&, ::ZenFulcrum::VR::OpenVRBinding::RenderModel_ComponentState_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRRENDERMODELS__GETCOMPONENTSTATEPACKED_ENDINVOKE_OFFSET))(this, pControllerState, pState, pComponentState, result);
		}
	};
}
