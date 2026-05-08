#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/DefaultInputActions_PlayerActions.h"
#include "unitysdk/UnityEngine/InputSystem/DefaultInputActions_UIActions.h"
#include "unitysdk/UnityEngine/InputSystem/InputBinding.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlScheme.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine::InputSystem { class DefaultInputActions_IPlayerActions; }
namespace UnityEngine::InputSystem { class DefaultInputActions_IUIActions; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionAsset; }
namespace UnityEngine::InputSystem { class InputActionMap; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1B9EFE40)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_DISABLE_OFFSET UNITYSDK_OFFSET(0x1B9EFF90)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B9EFC00)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_ENABLE_OFFSET UNITYSDK_OFFSET(0x1B9EFF70)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_FINDACTION_OFFSET UNITYSDK_OFFSET(0x1B9F0020)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_FINDBINDING_OFFSET UNITYSDK_OFFSET(0x1B9F0040)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B9EFED0)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x1B9EF960)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_BINDINGMASK_OFFSET UNITYSDK_OFFSET(0x1B9EFCB0)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x1B9EFFB0)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_CONTROLSCHEMES_OFFSET UNITYSDK_OFFSET(0x1B9EFE00)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_DEVICES_OFFSET UNITYSDK_OFFSET(0x1B9EFD60)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_GAMEPADSCHEME_OFFSET UNITYSDK_OFFSET(0x1B9F0190)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_JOYSTICKSCHEME_OFFSET UNITYSDK_OFFSET(0x1B9F0330)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_KEYBOARDMOUSESCHEME_OFFSET UNITYSDK_OFFSET(0x1B9F00C0)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1B9F00A0)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_TOUCHSCHEME_OFFSET UNITYSDK_OFFSET(0x1B9F0260)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_UI_OFFSET UNITYSDK_OFFSET(0x1B9F00B0)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_XRSCHEME_OFFSET UNITYSDK_OFFSET(0x1B9F0400)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_SET_BINDINGMASK_OFFSET UNITYSDK_OFFSET(0x1B9EFD00)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_SET_DEVICES_OFFSET UNITYSDK_OFFSET(0x1B9EFDC0)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B9EFF20)
#define UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9EF970)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int DefaultInputActions_TypeDefinitionIndex = 29039;

	class DefaultInputActions : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::InputAction* m_UI_TrackedDeviceOrientation; // 0x10
		::UnityEngine::InputSystem::InputAction* m_UI_Cancel; // 0x18
		::UnityEngine::InputSystem::InputAction* m_UI_Point; // 0x20
		::UnityEngine::InputSystem::InputAction* m_UI_Click; // 0x28
		::UnityEngine::InputSystem::InputActionAsset* _asset_k__BackingField; // 0x30
		::UnityEngine::InputSystem::InputActionMap* m_Player; // 0x38
		::UnityEngine::InputSystem::InputAction* m_Player_Fire; // 0x40
		::UnityEngine::InputSystem::InputActionMap* m_UI; // 0x48
		::UnityEngine::InputSystem::DefaultInputActions_IUIActions* m_UIActionsCallbackInterface; // 0x50
		::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions* m_PlayerActionsCallbackInterface; // 0x58
		::UnityEngine::InputSystem::InputAction* m_UI_Navigate; // 0x60
		::UnityEngine::InputSystem::InputAction* m_Player_Look; // 0x68
		::UnityEngine::InputSystem::InputAction* m_Player_Move; // 0x70
		::UnityEngine::InputSystem::InputAction* m_UI_MiddleClick; // 0x78
		::UnityEngine::InputSystem::InputAction* m_UI_RightClick; // 0x80
		::UnityEngine::InputSystem::InputAction* m_UI_Submit; // 0x88
		::UnityEngine::InputSystem::InputAction* m_UI_TrackedDevicePosition; // 0x90
		::UnityEngine::InputSystem::InputAction* m_UI_ScrollWheel; // 0x98
		::System::Int32 m_KeyboardMouseSchemeIndex; // 0xA0
		::System::Int32 m_XRSchemeIndex; // 0xA4
		::System::Int32 m_TouchSchemeIndex; // 0xA8
		::System::Int32 m_JoystickSchemeIndex; // 0xAC
		::System::Int32 m_GamepadSchemeIndex; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionAsset* get_asset()
		{
			return ((::UnityEngine::InputSystem::InputActionAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_ASSET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_DISPOSE_OFFSET))(this);
		}

		::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> get_bindingMask()
		{
			return ((::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_BINDINGMASK_OFFSET))(this);
		}

		::System::Void set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_SET_BINDINGMASK_OFFSET))(this, value);
		}

		::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> get_devices()
		{
			return ((::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_DEVICES_OFFSET))(this);
		}

		::System::Void set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_SET_DEVICES_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> get_controlSchemes()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_CONTROLSCHEMES_OFFSET))(this);
		}

		::System::Boolean Contains(::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_CONTAINS_OFFSET))(this, action);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Enable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_ENABLE_OFFSET))(this);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_DISABLE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* get_bindings()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_BINDINGS_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputAction* FindAction(::System::String* actionNameOrId, ::System::Boolean throwIfNotFound)
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_FINDACTION_OFFSET))(this, actionNameOrId, throwIfNotFound);
		}

		::System::Int32 FindBinding(::UnityEngine::InputSystem::InputBinding bindingMask, ::UnityEngine::InputSystem::InputAction*& action)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::InputSystem::InputBinding, ::UnityEngine::InputSystem::InputAction*&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_FINDBINDING_OFFSET))(this, bindingMask, action);
		}

		::UnityEngine::InputSystem::DefaultInputActions_PlayerActions get_Player()
		{
			return ((::UnityEngine::InputSystem::DefaultInputActions_PlayerActions(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_PLAYER_OFFSET))(this);
		}

		::UnityEngine::InputSystem::DefaultInputActions_UIActions get_UI()
		{
			return ((::UnityEngine::InputSystem::DefaultInputActions_UIActions(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_UI_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputControlScheme get_KeyboardMouseScheme()
		{
			return ((::UnityEngine::InputSystem::InputControlScheme(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_KEYBOARDMOUSESCHEME_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputControlScheme get_GamepadScheme()
		{
			return ((::UnityEngine::InputSystem::InputControlScheme(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_GAMEPADSCHEME_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputControlScheme get_TouchScheme()
		{
			return ((::UnityEngine::InputSystem::InputControlScheme(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_TOUCHSCHEME_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputControlScheme get_JoystickScheme()
		{
			return ((::UnityEngine::InputSystem::InputControlScheme(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_JOYSTICKSCHEME_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputControlScheme get_XRScheme()
		{
			return ((::UnityEngine::InputSystem::InputControlScheme(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_DEFAULTINPUTACTIONS_GET_XRSCHEME_OFFSET))(this);
		}
	};
}
