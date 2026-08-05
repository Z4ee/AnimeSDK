#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlScheme.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlScheme_DeviceRequirement_Flags.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputActionAsset; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CONTROLSCHEMESYNTAX_ADDDEVICEENTRY_OFFSET UNITYSDK_OFFSET(0xAB3E00)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CONTROLSCHEMESYNTAX_DONE_OFFSET UNITYSDK_OFFSET(0xAB3DE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CONTROLSCHEMESYNTAX_ORWITHOPTIONALDEVICE_OFFSET UNITYSDK_OFFSET(0xAB3DA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CONTROLSCHEMESYNTAX_ORWITHREQUIREDDEVICE_OFFSET UNITYSDK_OFFSET(0xAB3D60)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CONTROLSCHEMESYNTAX_WITHBINDINGGROUP_OFFSET UNITYSDK_OFFSET(0xAB3CC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CONTROLSCHEMESYNTAX_WITHOPTIONALDEVICE_OFFSET UNITYSDK_OFFSET(0xAB3D20)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CONTROLSCHEMESYNTAX_WITHREQUIREDDEVICE_OFFSET UNITYSDK_OFFSET(0xAB3CE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CONTROLSCHEMESYNTAX__CTOR_1_OFFSET UNITYSDK_OFFSET(0xAB3C80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CONTROLSCHEMESYNTAX__CTOR_OFFSET UNITYSDK_OFFSET(0xAB3C60)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionSetupExtensions_ControlSchemeSyntax_TypeDefinitionIndex = 32179;

	struct alignas(8) InputActionSetupExtensions_ControlSchemeSyntax
	{
		::UnityEngine::InputSystem::InputActionAsset* m_Asset; // 0x10
		::System::Int32 m_ControlSchemeIndex; // 0x18
		::UnityEngine::InputSystem::InputControlScheme m_ControlScheme; // 0x20

		::System::Void _ctor(::UnityEngine::InputSystem::InputActionAsset* asset, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionAsset*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CONTROLSCHEMESYNTAX__CTOR_OFFSET))(this, asset, index);
		}

		::System::Void _ctor_1(::UnityEngine::InputSystem::InputControlScheme controlScheme)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputControlScheme))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CONTROLSCHEMESYNTAX__CTOR_1_OFFSET))(this, controlScheme);
		}

		::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax WithBindingGroup(::System::String* bindingGroup)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CONTROLSCHEMESYNTAX_WITHBINDINGGROUP_OFFSET))(this, bindingGroup);
		}

		::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax WithRequiredDevice(::System::String* controlPath)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CONTROLSCHEMESYNTAX_WITHREQUIREDDEVICE_OFFSET))(this, controlPath);
		}

		::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax WithOptionalDevice(::System::String* controlPath)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CONTROLSCHEMESYNTAX_WITHOPTIONALDEVICE_OFFSET))(this, controlPath);
		}

		::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax OrWithRequiredDevice(::System::String* controlPath)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CONTROLSCHEMESYNTAX_ORWITHREQUIREDDEVICE_OFFSET))(this, controlPath);
		}

		::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax OrWithOptionalDevice(::System::String* controlPath)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CONTROLSCHEMESYNTAX_ORWITHOPTIONALDEVICE_OFFSET))(this, controlPath);
		}

		::UnityEngine::InputSystem::InputControlScheme Done()
		{
			return ((::UnityEngine::InputSystem::InputControlScheme(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CONTROLSCHEMESYNTAX_DONE_OFFSET))(this);
		}

		::System::Void AddDeviceEntry(::System::String* controlPath, ::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement_Flags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::InputSystem::InputControlScheme_DeviceRequirement_Flags))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CONTROLSCHEMESYNTAX_ADDDEVICEENTRY_OFFSET))(this, controlPath, flags);
		}
	};
}
