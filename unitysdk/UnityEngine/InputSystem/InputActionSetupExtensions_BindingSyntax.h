#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionMap; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_ERASE_OFFSET UNITYSDK_OFFSET(0x972670)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_GET_BINDINGINDEX_OFFSET UNITYSDK_OFFSET(0x971F40)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_GET_BINDING_OFFSET UNITYSDK_OFFSET(0x971F80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_GET_VALID_OFFSET UNITYSDK_OFFSET(0x971F10)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_INSERTPARTBINDING_OFFSET UNITYSDK_OFFSET(0x972680)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_ITERATECOMPOSITEBINDING_OFFSET UNITYSDK_OFFSET(0x972630)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_ITERATEPARTBINDING_OFFSET UNITYSDK_OFFSET(0x972650)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_ITERATE_OFFSET UNITYSDK_OFFSET(0x972510)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_NEXTBINDING_OFFSET UNITYSDK_OFFSET(0x972120)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_NEXTCOMPOSITEBINDING_OFFSET UNITYSDK_OFFSET(0x972490)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_NEXTPARTBINDING_OFFSET UNITYSDK_OFFSET(0x972350)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_PREVIOUSBINDING_OFFSET UNITYSDK_OFFSET(0x972230)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_PREVIOUSCOMPOSITEBINDING_OFFSET UNITYSDK_OFFSET(0x9724D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_PREVIOUSPARTBINDING_OFFSET UNITYSDK_OFFSET(0x9723F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_TO_OFFSET UNITYSDK_OFFSET(0x9720C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_TRIGGERING_OFFSET UNITYSDK_OFFSET(0x9720A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_WITHGROUPS_OFFSET UNITYSDK_OFFSET(0x972000)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_WITHGROUP_OFFSET UNITYSDK_OFFSET(0x971FE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_WITHINTERACTIONS_OFFSET UNITYSDK_OFFSET(0x972040)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_WITHINTERACTION_OFFSET UNITYSDK_OFFSET(0x972020)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_WITHNAME_OFFSET UNITYSDK_OFFSET(0x971FA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_WITHPATH_OFFSET UNITYSDK_OFFSET(0x971FC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_WITHPROCESSORS_OFFSET UNITYSDK_OFFSET(0x972080)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX_WITHPROCESSOR_OFFSET UNITYSDK_OFFSET(0x972060)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSETUPEXTENSIONS_BINDINGSYNTAX__CTOR_OFFSET UNITYSDK_OFFSET(0x318B70)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionSetupExtensions_BindingSyntax_TypeDefinitionIndex = 28901;

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
