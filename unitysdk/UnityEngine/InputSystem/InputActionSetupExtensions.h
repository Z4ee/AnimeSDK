#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionSetupExtensions_BindingSyntax.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionSetupExtensions_CompositeSyntax.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionSetupExtensions_ControlSchemeSyntax.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionType.h"
#include "unitysdk/UnityEngine/InputSystem/InputBinding.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlScheme.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionAsset; }
namespace UnityEngine::InputSystem { class InputActionMap; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDACTIONMAP_1_OFFSET UNITYSDK_OFFSET(0x1D8A8EE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDACTIONMAP_OFFSET UNITYSDK_OFFSET(0x1D8A8C80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDACTION_OFFSET UNITYSDK_OFFSET(0x1D8A9610)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDINGINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D8AA7B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_1_OFFSET UNITYSDK_OFFSET(0x1D8AA6B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_2_OFFSET UNITYSDK_OFFSET(0x1D8AA5B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_3_OFFSET UNITYSDK_OFFSET(0x1D8AAA70)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_4_OFFSET UNITYSDK_OFFSET(0x1D8AAC80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_5_OFFSET UNITYSDK_OFFSET(0x1D8AAED0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_6_OFFSET UNITYSDK_OFFSET(0x1D8AAB70)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_OFFSET UNITYSDK_OFFSET(0x1D8A9D90)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDCOMPOSITEBINDING_OFFSET UNITYSDK_OFFSET(0x1D8AB0F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDCONTROLSCHEME_1_OFFSET UNITYSDK_OFFSET(0x1D8AC470)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDCONTROLSCHEME_OFFSET UNITYSDK_OFFSET(0x1D8AC1C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDINGWITHGROUP_OFFSET UNITYSDK_OFFSET(0x1D8ABA30)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDINGWITHID_1_OFFSET UNITYSDK_OFFSET(0x1D8AB910)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDINGWITHID_OFFSET UNITYSDK_OFFSET(0x1D8AB840)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDINGWITHPATH_OFFSET UNITYSDK_OFFSET(0x1D8ABB00)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDING_1_OFFSET UNITYSDK_OFFSET(0x1D8AB350)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDING_2_OFFSET UNITYSDK_OFFSET(0x1D8AB770)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDING_3_OFFSET UNITYSDK_OFFSET(0x1D8AB3B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDING_OFFSET UNITYSDK_OFFSET(0x1D8AB2A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGECOMPOSITEBINDING_OFFSET UNITYSDK_OFFSET(0x1D8ABBC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ORWITHOPTIONALDEVICE_OFFSET UNITYSDK_OFFSET(0x1D8ACC50)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ORWITHREQUIREDDEVICE_OFFSET UNITYSDK_OFFSET(0x1D8ACBA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_REMOVEACTIONMAP_1_OFFSET UNITYSDK_OFFSET(0x1D8A9460)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_REMOVEACTIONMAP_OFFSET UNITYSDK_OFFSET(0x1D8A9250)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_REMOVEACTION_1_OFFSET UNITYSDK_OFFSET(0x1D8AA400)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_REMOVEACTION_OFFSET UNITYSDK_OFFSET(0x1D8A9E00)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_REMOVECONTROLSCHEME_OFFSET UNITYSDK_OFFSET(0x1D8AC690)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_RENAME_OFFSET UNITYSDK_OFFSET(0x1D8ABE40)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_WITHBINDINGGROUP_OFFSET UNITYSDK_OFFSET(0x1D8AC8A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_WITHDEVICE_OFFSET UNITYSDK_OFFSET(0x1D8AC970)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_WITHOPTIONALDEVICE_OFFSET UNITYSDK_OFFSET(0x1D8ACAF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_WITHREQUIREDDEVICE_OFFSET UNITYSDK_OFFSET(0x1D8ACA40)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionSetupExtensions_TypeDefinitionIndex = 31556;

	class InputActionSetupExtensions : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::InputActionMap* AddActionMap(::UnityEngine::InputSystem::InputActionAsset* asset, ::System::String* name)
		{
			return ((::UnityEngine::InputSystem::InputActionMap*(*)(::UnityEngine::InputSystem::InputActionAsset*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDACTIONMAP_OFFSET))(asset, name);
		}

		static ::System::Void AddActionMap_1(::UnityEngine::InputSystem::InputActionAsset* asset, ::UnityEngine::InputSystem::InputActionMap* map)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputActionAsset*, ::UnityEngine::InputSystem::InputActionMap*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDACTIONMAP_1_OFFSET))(asset, map);
		}

		static ::System::Void RemoveActionMap(::UnityEngine::InputSystem::InputActionAsset* asset, ::UnityEngine::InputSystem::InputActionMap* map)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputActionAsset*, ::UnityEngine::InputSystem::InputActionMap*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_REMOVEACTIONMAP_OFFSET))(asset, map);
		}

		static ::System::Void RemoveActionMap_1(::UnityEngine::InputSystem::InputActionAsset* asset, ::System::String* nameOrId)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputActionAsset*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_REMOVEACTIONMAP_1_OFFSET))(asset, nameOrId);
		}

		static ::UnityEngine::InputSystem::InputAction* AddAction(::UnityEngine::InputSystem::InputActionMap* map, ::System::String* name, ::UnityEngine::InputSystem::InputActionType type, ::System::String* binding, ::System::String* interactions, ::System::String* processors, ::System::String* groups, ::System::String* expectedControlLayout)
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::UnityEngine::InputSystem::InputActionMap*, ::System::String*, ::UnityEngine::InputSystem::InputActionType, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDACTION_OFFSET))(map, name, type, binding, interactions, processors, groups, expectedControlLayout);
		}

		static ::System::Void RemoveAction(::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_REMOVEACTION_OFFSET))(action);
		}

		static ::System::Void RemoveAction_1(::UnityEngine::InputSystem::InputActionAsset* asset, ::System::String* nameOrId)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputActionAsset*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_REMOVEACTION_1_OFFSET))(asset, nameOrId);
		}

		static ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax AddBinding(::UnityEngine::InputSystem::InputAction* action, ::System::String* path, ::System::String* interactions, ::System::String* processors, ::System::String* groups)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::UnityEngine::InputSystem::InputAction*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_OFFSET))(action, path, interactions, processors, groups);
		}

		static ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax AddBinding_1(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_1_OFFSET))(action, control);
		}

		static ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax AddBinding_2(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputBinding binding)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputBinding))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_2_OFFSET))(action, binding);
		}

		static ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax AddBinding_3(::UnityEngine::InputSystem::InputActionMap* actionMap, ::System::String* path, ::System::String* interactions, ::System::String* groups, ::System::String* action, ::System::String* processors)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::UnityEngine::InputSystem::InputActionMap*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_3_OFFSET))(actionMap, path, interactions, groups, action, processors);
		}

		static ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax AddBinding_4(::UnityEngine::InputSystem::InputActionMap* actionMap, ::System::String* path, ::UnityEngine::InputSystem::InputAction* action, ::System::String* interactions, ::System::String* groups)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::UnityEngine::InputSystem::InputActionMap*, ::System::String*, ::UnityEngine::InputSystem::InputAction*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_4_OFFSET))(actionMap, path, action, interactions, groups);
		}

		static ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax AddBinding_5(::UnityEngine::InputSystem::InputActionMap* actionMap, ::System::String* path, ::System::Guid action, ::System::String* interactions, ::System::String* groups)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::UnityEngine::InputSystem::InputActionMap*, ::System::String*, ::System::Guid, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_5_OFFSET))(actionMap, path, action, interactions, groups);
		}

		static ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax AddBinding_6(::UnityEngine::InputSystem::InputActionMap* actionMap, ::UnityEngine::InputSystem::InputBinding binding)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::UnityEngine::InputSystem::InputActionMap*, ::UnityEngine::InputSystem::InputBinding))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDING_6_OFFSET))(actionMap, binding);
		}

		static ::UnityEngine::InputSystem::InputActionSetupExtensions_CompositeSyntax AddCompositeBinding(::UnityEngine::InputSystem::InputAction* action, ::System::String* composite, ::System::String* interactions, ::System::String* processors)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_CompositeSyntax(*)(::UnityEngine::InputSystem::InputAction*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDCOMPOSITEBINDING_OFFSET))(action, composite, interactions, processors);
		}

		static ::System::Int32 AddBindingInternal(::UnityEngine::InputSystem::InputActionMap* map, ::UnityEngine::InputSystem::InputBinding binding, ::System::Int32 bindingIndex)
		{
			return ((::System::Int32(*)(::UnityEngine::InputSystem::InputActionMap*, ::UnityEngine::InputSystem::InputBinding, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDBINDINGINTERNAL_OFFSET))(map, binding, bindingIndex);
		}

		static ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax ChangeBinding(::UnityEngine::InputSystem::InputAction* action, ::System::Int32 index)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::UnityEngine::InputSystem::InputAction*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDING_OFFSET))(action, index);
		}

		static ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax ChangeBinding_1(::UnityEngine::InputSystem::InputAction* action, ::System::String* name)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::UnityEngine::InputSystem::InputAction*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDING_1_OFFSET))(action, name);
		}

		static ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax ChangeBinding_2(::UnityEngine::InputSystem::InputActionMap* actionMap, ::System::Int32 index)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::UnityEngine::InputSystem::InputActionMap*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDING_2_OFFSET))(actionMap, index);
		}

		static ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax ChangeBindingWithId(::UnityEngine::InputSystem::InputAction* action, ::System::String* id)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::UnityEngine::InputSystem::InputAction*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDINGWITHID_OFFSET))(action, id);
		}

		static ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax ChangeBindingWithId_1(::UnityEngine::InputSystem::InputAction* action, ::System::Guid id)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::UnityEngine::InputSystem::InputAction*, ::System::Guid))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDINGWITHID_1_OFFSET))(action, id);
		}

		static ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax ChangeBindingWithGroup(::UnityEngine::InputSystem::InputAction* action, ::System::String* group)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::UnityEngine::InputSystem::InputAction*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDINGWITHGROUP_OFFSET))(action, group);
		}

		static ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax ChangeBindingWithPath(::UnityEngine::InputSystem::InputAction* action, ::System::String* path)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::UnityEngine::InputSystem::InputAction*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDINGWITHPATH_OFFSET))(action, path);
		}

		static ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax ChangeBinding_3(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputBinding match)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::InputBinding))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGEBINDING_3_OFFSET))(action, match);
		}

		static ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax ChangeCompositeBinding(::UnityEngine::InputSystem::InputAction* action, ::System::String* compositeName)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::UnityEngine::InputSystem::InputAction*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_CHANGECOMPOSITEBINDING_OFFSET))(action, compositeName);
		}

		static ::System::Void Rename(::UnityEngine::InputSystem::InputAction* action, ::System::String* newName)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputAction*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_RENAME_OFFSET))(action, newName);
		}

		static ::System::Void AddControlScheme(::UnityEngine::InputSystem::InputActionAsset* asset, ::UnityEngine::InputSystem::InputControlScheme controlScheme)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputActionAsset*, ::UnityEngine::InputSystem::InputControlScheme))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDCONTROLSCHEME_OFFSET))(asset, controlScheme);
		}

		static ::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax AddControlScheme_1(::UnityEngine::InputSystem::InputActionAsset* asset, ::System::String* name)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax(*)(::UnityEngine::InputSystem::InputActionAsset*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ADDCONTROLSCHEME_1_OFFSET))(asset, name);
		}

		static ::System::Void RemoveControlScheme(::UnityEngine::InputSystem::InputActionAsset* asset, ::System::String* name)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputActionAsset*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_REMOVECONTROLSCHEME_OFFSET))(asset, name);
		}

		static ::UnityEngine::InputSystem::InputControlScheme WithBindingGroup(::UnityEngine::InputSystem::InputControlScheme scheme, ::System::String* bindingGroup)
		{
			return ((::UnityEngine::InputSystem::InputControlScheme(*)(::UnityEngine::InputSystem::InputControlScheme, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_WITHBINDINGGROUP_OFFSET))(scheme, bindingGroup);
		}

		static ::UnityEngine::InputSystem::InputControlScheme WithDevice(::UnityEngine::InputSystem::InputControlScheme scheme, ::System::String* controlPath, ::System::Boolean required)
		{
			return ((::UnityEngine::InputSystem::InputControlScheme(*)(::UnityEngine::InputSystem::InputControlScheme, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_WITHDEVICE_OFFSET))(scheme, controlPath, required);
		}

		static ::UnityEngine::InputSystem::InputControlScheme WithRequiredDevice(::UnityEngine::InputSystem::InputControlScheme scheme, ::System::String* controlPath)
		{
			return ((::UnityEngine::InputSystem::InputControlScheme(*)(::UnityEngine::InputSystem::InputControlScheme, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_WITHREQUIREDDEVICE_OFFSET))(scheme, controlPath);
		}

		static ::UnityEngine::InputSystem::InputControlScheme WithOptionalDevice(::UnityEngine::InputSystem::InputControlScheme scheme, ::System::String* controlPath)
		{
			return ((::UnityEngine::InputSystem::InputControlScheme(*)(::UnityEngine::InputSystem::InputControlScheme, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_WITHOPTIONALDEVICE_OFFSET))(scheme, controlPath);
		}

		static ::UnityEngine::InputSystem::InputControlScheme OrWithRequiredDevice(::UnityEngine::InputSystem::InputControlScheme scheme, ::System::String* controlPath)
		{
			return ((::UnityEngine::InputSystem::InputControlScheme(*)(::UnityEngine::InputSystem::InputControlScheme, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ORWITHREQUIREDDEVICE_OFFSET))(scheme, controlPath);
		}

		static ::UnityEngine::InputSystem::InputControlScheme OrWithOptionalDevice(::UnityEngine::InputSystem::InputControlScheme scheme, ::System::String* controlPath)
		{
			return ((::UnityEngine::InputSystem::InputControlScheme(*)(::UnityEngine::InputSystem::InputControlScheme, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_ORWITHOPTIONALDEVICE_OFFSET))(scheme, controlPath);
		}
	};
}
