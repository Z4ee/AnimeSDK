#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionMap; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_ERASE_OFFSET UNITYSDK_OFFSET(0xA675F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_GET_BINDINGINDEX_OFFSET UNITYSDK_OFFSET(0xA66ED0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_GET_BINDING_OFFSET UNITYSDK_OFFSET(0xA66F10)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_GET_VALID_OFFSET UNITYSDK_OFFSET(0xA66EA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_INSERTPARTBINDING_OFFSET UNITYSDK_OFFSET(0xA67600)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_ITERATECOMPOSITEBINDING_OFFSET UNITYSDK_OFFSET(0xA675B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_ITERATEPARTBINDING_OFFSET UNITYSDK_OFFSET(0xA675D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_ITERATE_OFFSET UNITYSDK_OFFSET(0xA674A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_NEXTBINDING_OFFSET UNITYSDK_OFFSET(0xA670B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_NEXTCOMPOSITEBINDING_OFFSET UNITYSDK_OFFSET(0xA67420)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_NEXTPARTBINDING_OFFSET UNITYSDK_OFFSET(0xA672E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_PREVIOUSBINDING_OFFSET UNITYSDK_OFFSET(0xA671C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_PREVIOUSCOMPOSITEBINDING_OFFSET UNITYSDK_OFFSET(0xA67460)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_PREVIOUSPARTBINDING_OFFSET UNITYSDK_OFFSET(0xA67380)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_TO_OFFSET UNITYSDK_OFFSET(0xA67050)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_TRIGGERING_OFFSET UNITYSDK_OFFSET(0xA67030)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_WITHGROUPS_OFFSET UNITYSDK_OFFSET(0xA66F90)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_WITHGROUP_OFFSET UNITYSDK_OFFSET(0xA66F70)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_WITHINTERACTIONS_OFFSET UNITYSDK_OFFSET(0xA66FD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_WITHINTERACTION_OFFSET UNITYSDK_OFFSET(0xA66FB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_WITHNAME_OFFSET UNITYSDK_OFFSET(0xA66F30)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_WITHPATH_OFFSET UNITYSDK_OFFSET(0xA66F50)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_WITHPROCESSORS_OFFSET UNITYSDK_OFFSET(0xA67010)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_WITHPROCESSOR_OFFSET UNITYSDK_OFFSET(0xA66FF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX__CTOR_OFFSET UNITYSDK_OFFSET(0x53E1A0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionSetupExtensions_BindingSyntax_TypeDefinitionIndex = 32177;

	struct alignas(8) InputActionSetupExtensions_BindingSyntax
	{
		::UnityEngine::InputSystem::InputActionMap* m_ActionMap; // 0x10
		::UnityEngine::InputSystem::InputAction* m_Action; // 0x18
		::System::Int32 m_BindingIndexInMap; // 0x20

		::System::Void _ctor(::UnityEngine::InputSystem::InputActionMap* map, ::System::Int32 bindingIndexInMap, ::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionMap*, ::System::Int32, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX__CTOR_OFFSET))(this, map, bindingIndexInMap, action);
		}

		::System::Boolean get_valid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_GET_VALID_OFFSET))(this);
		}

		::System::Int32 get_bindingIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_GET_BINDINGINDEX_OFFSET))(this);
		}

		/*
		::UnityEngine::InputSystem::InputBinding get_binding()
		{
			return ((::UnityEngine::InputSystem::InputBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_GET_BINDING_OFFSET))(this);
		}
		*/

		::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax WithName(::System::String* name)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_WITHNAME_OFFSET))(this, name);
		}

		::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax WithPath(::System::String* path)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_WITHPATH_OFFSET))(this, path);
		}

		::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax WithGroup(::System::String* group)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_WITHGROUP_OFFSET))(this, group);
		}

		::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax WithGroups(::System::String* groups)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_WITHGROUPS_OFFSET))(this, groups);
		}

		::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax WithInteraction(::System::String* interaction)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_WITHINTERACTION_OFFSET))(this, interaction);
		}

		::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax WithInteractions(::System::String* interactions)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_WITHINTERACTIONS_OFFSET))(this, interactions);
		}

		::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax WithProcessor(::System::String* processor)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_WITHPROCESSOR_OFFSET))(this, processor);
		}

		::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax WithProcessors(::System::String* processors)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_WITHPROCESSORS_OFFSET))(this, processors);
		}

		::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax Triggering(::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_TRIGGERING_OFFSET))(this, action);
		}

		/*
		::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax To(::UnityEngine::InputSystem::InputBinding binding)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::PVOID, ::UnityEngine::InputSystem::InputBinding))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_TO_OFFSET))(this, binding);
		}
		*/

		::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax NextBinding()
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_NEXTBINDING_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax PreviousBinding()
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_PREVIOUSBINDING_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax NextPartBinding(::System::String* partName)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_NEXTPARTBINDING_OFFSET))(this, partName);
		}

		::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax PreviousPartBinding(::System::String* partName)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_PREVIOUSPARTBINDING_OFFSET))(this, partName);
		}

		::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax NextCompositeBinding(::System::String* compositeName)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_NEXTCOMPOSITEBINDING_OFFSET))(this, compositeName);
		}

		::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax PreviousCompositeBinding(::System::String* compositeName)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_PREVIOUSCOMPOSITEBINDING_OFFSET))(this, compositeName);
		}

		::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax Iterate(::System::Boolean next)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_ITERATE_OFFSET))(this, next);
		}

		::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax IterateCompositeBinding(::System::Boolean next, ::System::String* compositeName)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_ITERATECOMPOSITEBINDING_OFFSET))(this, next, compositeName);
		}

		::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax IteratePartBinding(::System::Boolean next, ::System::String* partName)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_ITERATEPARTBINDING_OFFSET))(this, next, partName);
		}

		::System::Void Erase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_ERASE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax InsertPartBinding(::System::String* partName, ::System::String* path)
		{
			return ((::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_INSERTPARTBINDING_OFFSET))(this, partName, path);
		}
	};
}
