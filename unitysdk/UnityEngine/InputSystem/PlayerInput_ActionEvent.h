#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"
#include "unitysdk/UnityEngine/InputSystem/InputAction_CallbackContext.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputAction; }

#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ACTIONEVENT_GET_ACTIONID_OFFSET UNITYSDK_OFFSET(0x1C0B3AF0)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ACTIONEVENT_GET_ACTIONNAME_OFFSET UNITYSDK_OFFSET(0x1C0B3B00)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ACTIONEVENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C0B3B20)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ACTIONEVENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C0B3E00)
#define UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ACTIONEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0B3B10)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int PlayerInput_ActionEvent_TypeDefinitionIndex = 29046;

	class PlayerInput_ActionEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::InputSystem::InputAction_CallbackContext>
	{
	public:
		::System::String* m_ActionId; // 0x30
		::System::String* m_ActionName; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ACTIONEVENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ACTIONEVENT__CTOR_1_OFFSET))(this, action);
		}

		::System::Void _ctor_2(::System::Guid actionGUID, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ACTIONEVENT__CTOR_2_OFFSET))(this, actionGUID, name);
		}

		::System::String* get_actionId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ACTIONEVENT_GET_ACTIONID_OFFSET))(this);
		}

		::System::String* get_actionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PLAYERINPUT_ACTIONEVENT_GET_ACTIONNAME_OFFSET))(this);
		}
	};
}
