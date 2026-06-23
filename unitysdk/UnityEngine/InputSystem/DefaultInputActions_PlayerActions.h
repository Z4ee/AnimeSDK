#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem { class DefaultInputActions; }
namespace UnityEngine::InputSystem { class DefaultInputActions_IPlayerActions; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionMap; }

#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_DISABLE_OFFSET UNITYSDK_OFFSET(0xA42710)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_ENABLE_OFFSET UNITYSDK_OFFSET(0xA42690)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA42760)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_GET_FIRE_OFFSET UNITYSDK_OFFSET(0xA42650)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_GET_LOOK_OFFSET UNITYSDK_OFFSET(0xA42630)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_GET_MOVE_OFFSET UNITYSDK_OFFSET(0xA42610)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_GET_OFFSET UNITYSDK_OFFSET(0xA42670)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1DDE59B0)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_SETCALLBACKS_OFFSET UNITYSDK_OFFSET(0xA42790)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x2B6D10)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int DefaultInputActions_PlayerActions_TypeDefinitionIndex = 31696;

	struct alignas(8) DefaultInputActions_PlayerActions
	{
		::UnityEngine::InputSystem::DefaultInputActions* m_Wrapper; // 0x10

		::System::Void _ctor(::UnityEngine::InputSystem::DefaultInputActions* wrapper)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::DefaultInputActions*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS__CTOR_OFFSET))(this, wrapper);
		}

		::UnityEngine::InputSystem::InputAction* get_Move()
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_GET_MOVE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputAction* get_Look()
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_GET_LOOK_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputAction* get_Fire()
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_GET_FIRE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionMap* Get()
		{
			return ((::UnityEngine::InputSystem::InputActionMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_GET_OFFSET))(this);
		}

		::System::Void Enable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_ENABLE_OFFSET))(this);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_DISABLE_OFFSET))(this);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_GET_ENABLED_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::InputActionMap* op_Implicit(::UnityEngine::InputSystem::DefaultInputActions_PlayerActions set)
		{
			return ((::UnityEngine::InputSystem::InputActionMap*(*)(::UnityEngine::InputSystem::DefaultInputActions_PlayerActions))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_OP_IMPLICIT_OFFSET))(set);
		}

		::System::Void SetCallbacks(::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions* instance)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_PLAYERACTIONS_SETCALLBACKS_OFFSET))(this, instance);
		}
	};
}
