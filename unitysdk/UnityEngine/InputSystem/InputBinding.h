#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputBinding_DisplayStringOptions.h"
#include "unitysdk/UnityEngine/InputSystem/InputBinding_Flags.h"
#include "unitysdk/UnityEngine/InputSystem/InputBinding_MatchOptions.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9B22A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B2250)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GENERATEID_OFFSET UNITYSDK_OFFSET(0x9B2170)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B2340)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GETNAMEOFCOMPOSITE_OFFSET UNITYSDK_OFFSET(0x9B2160)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x3A4CE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_EFFECTIVEINTERACTIONS_OFFSET UNITYSDK_OFFSET(0x9B21E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_EFFECTIVEPATH_OFFSET UNITYSDK_OFFSET(0x9B21D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_EFFECTIVEPROCESSORS_OFFSET UNITYSDK_OFFSET(0x9B21F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_GROUPS_OFFSET UNITYSDK_OFFSET(0x3B3B50)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_HASOVERRIDES_OFFSET UNITYSDK_OFFSET(0x9B20F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_ID_OFFSET UNITYSDK_OFFSET(0x9B2020)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_INTERACTIONS_OFFSET UNITYSDK_OFFSET(0x28E6B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_ISCOMPOSITE_OFFSET UNITYSDK_OFFSET(0x9B20B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x9B2200)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_ISPARTOFCOMPOSITE_OFFSET UNITYSDK_OFFSET(0x9B20D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_NAME_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_OVERRIDEINTERACTIONS_OFFSET UNITYSDK_OFFSET(0x400120)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_OVERRIDEPATH_OFFSET UNITYSDK_OFFSET(0x3AA1D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_OVERRIDEPROCESSORS_OFFSET UNITYSDK_OFFSET(0x3E02B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_PATH_OFFSET UNITYSDK_OFFSET(0x381840)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_PROCESSORS_OFFSET UNITYSDK_OFFSET(0x3AA080)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_MASKBYGROUPS_OFFSET UNITYSDK_OFFSET(0x1BCC39A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_MASKBYGROUP_OFFSET UNITYSDK_OFFSET(0x1BCC3970)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_MATCHES_1_OFFSET UNITYSDK_OFFSET(0x9B2470)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_MATCHES_OFFSET UNITYSDK_OFFSET(0x9B2420)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BCC3CF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1BCC3D40)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_REMOVEOVERRIDES_OFFSET UNITYSDK_OFFSET(0x9B21C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x7163F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_GROUPS_OFFSET UNITYSDK_OFFSET(0x7163E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_ID_OFFSET UNITYSDK_OFFSET(0x9B2060)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_INTERACTIONS_OFFSET UNITYSDK_OFFSET(0x6D5350)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_ISCOMPOSITE_OFFSET UNITYSDK_OFFSET(0x9B20C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_ISPARTOFCOMPOSITE_OFFSET UNITYSDK_OFFSET(0x9B20E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_NAME_OFFSET UNITYSDK_OFFSET(0x2E5940)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_OVERRIDEINTERACTIONS_OFFSET UNITYSDK_OFFSET(0x92FA60)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_OVERRIDEPATH_OFFSET UNITYSDK_OFFSET(0x99CBF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_OVERRIDEPROCESSORS_OFFSET UNITYSDK_OFFSET(0x871EB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_PATH_OFFSET UNITYSDK_OFFSET(0x381850)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_PROCESSORS_OFFSET UNITYSDK_OFFSET(0x686700)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_TODISPLAYSTRING_1_OFFSET UNITYSDK_OFFSET(0x9B23A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_TODISPLAYSTRING_OFFSET UNITYSDK_OFFSET(0x9B2360)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B2350)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING_TRIGGERSACTION_OFFSET UNITYSDK_OFFSET(0x9B23B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x9B2110)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputBinding_TypeDefinitionIndex = 28917;

	struct alignas(8) InputBinding
	{
		// static const ::System::Char Separator; // 0x0
		// static const ::System::String* kSeparatorString; // 0x0
		::System::String* m_Name; // 0x10
		::System::String* m_Id; // 0x18
		::System::String* m_Path; // 0x20
		::System::String* m_Interactions; // 0x28
		::System::String* m_Processors; // 0x30
		::System::String* m_Groups; // 0x38
		::System::String* m_Action; // 0x40
		::UnityEngine::InputSystem::InputBinding_Flags m_Flags; // 0x48
		::System::String* m_OverridePath; // 0x50
		::System::String* m_OverrideInteractions; // 0x58
		::System::String* m_OverrideProcessors; // 0x60

		::System::Void _ctor(::System::String* path, ::System::String* action, ::System::String* groups, ::System::String* processors, ::System::String* interactions, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING__CTOR_OFFSET))(this, path, action, groups, processors, interactions, name);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_NAME_OFFSET))(this, value);
		}

		/*
		::System::Guid get_id()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_ID_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_id(::System::Guid value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_ID_OFFSET))(this, value);
		}
		*/

		::System::String* get_path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_PATH_OFFSET))(this);
		}

		::System::Void set_path(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_PATH_OFFSET))(this, value);
		}

		::System::String* get_overridePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_OVERRIDEPATH_OFFSET))(this);
		}

		::System::Void set_overridePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_OVERRIDEPATH_OFFSET))(this, value);
		}

		::System::String* get_interactions()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_INTERACTIONS_OFFSET))(this);
		}

		::System::Void set_interactions(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_INTERACTIONS_OFFSET))(this, value);
		}

		::System::String* get_overrideInteractions()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_OVERRIDEINTERACTIONS_OFFSET))(this);
		}

		::System::Void set_overrideInteractions(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_OVERRIDEINTERACTIONS_OFFSET))(this, value);
		}

		::System::String* get_processors()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_PROCESSORS_OFFSET))(this);
		}

		::System::Void set_processors(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_PROCESSORS_OFFSET))(this, value);
		}

		::System::String* get_overrideProcessors()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_OVERRIDEPROCESSORS_OFFSET))(this);
		}

		::System::Void set_overrideProcessors(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_OVERRIDEPROCESSORS_OFFSET))(this, value);
		}

		::System::String* get_groups()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_GROUPS_OFFSET))(this);
		}

		::System::Void set_groups(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_GROUPS_OFFSET))(this, value);
		}

		::System::String* get_action()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_ACTION_OFFSET))(this);
		}

		::System::Void set_action(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_ACTION_OFFSET))(this, value);
		}

		::System::Boolean get_isComposite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_ISCOMPOSITE_OFFSET))(this);
		}

		::System::Void set_isComposite(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_ISCOMPOSITE_OFFSET))(this, value);
		}

		::System::Boolean get_isPartOfComposite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_ISPARTOFCOMPOSITE_OFFSET))(this);
		}

		::System::Void set_isPartOfComposite(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_SET_ISPARTOFCOMPOSITE_OFFSET))(this, value);
		}

		::System::Boolean get_hasOverrides()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_HASOVERRIDES_OFFSET))(this);
		}

		::System::String* GetNameOfComposite()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GETNAMEOFCOMPOSITE_OFFSET))(this);
		}

		::System::Void GenerateId()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GENERATEID_OFFSET))(this);
		}

		::System::Void RemoveOverrides()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_REMOVEOVERRIDES_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::InputBinding MaskByGroup(::System::String* group)
		{
			return ((::UnityEngine::InputSystem::InputBinding(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_MASKBYGROUP_OFFSET))(group);
		}

		static ::UnityEngine::InputSystem::InputBinding MaskByGroups(::Il2CppArray<::System::String*>* groups)
		{
			return ((::UnityEngine::InputSystem::InputBinding(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_MASKBYGROUPS_OFFSET))(groups);
		}

		::System::String* get_effectivePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_EFFECTIVEPATH_OFFSET))(this);
		}

		::System::String* get_effectiveInteractions()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_EFFECTIVEINTERACTIONS_OFFSET))(this);
		}

		::System::String* get_effectiveProcessors()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_EFFECTIVEPROCESSORS_OFFSET))(this);
		}

		::System::Boolean get_isEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::InputBinding other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputBinding))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_EQUALS_1_OFFSET))(this, obj);
		}

		static ::System::Boolean op_Equality(::UnityEngine::InputSystem::InputBinding left, ::UnityEngine::InputSystem::InputBinding right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputBinding, ::UnityEngine::InputSystem::InputBinding))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::InputSystem::InputBinding left, ::UnityEngine::InputSystem::InputBinding right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputBinding, ::UnityEngine::InputSystem::InputBinding))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_TOSTRING_OFFSET))(this);
		}

		::System::String* ToDisplayString(::UnityEngine::InputSystem::InputBinding_DisplayStringOptions options, ::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::InputSystem::InputBinding_DisplayStringOptions, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_TODISPLAYSTRING_OFFSET))(this, options, control);
		}

		::System::String* ToDisplayString_1(::System::String*& deviceLayoutName, ::System::String*& controlPath, ::UnityEngine::InputSystem::InputBinding_DisplayStringOptions options, ::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*&, ::System::String*&, ::UnityEngine::InputSystem::InputBinding_DisplayStringOptions, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_TODISPLAYSTRING_1_OFFSET))(this, deviceLayoutName, controlPath, options, control);
		}

		::System::Boolean TriggersAction(::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_TRIGGERSACTION_OFFSET))(this, action);
		}

		::System::Boolean Matches(::UnityEngine::InputSystem::InputBinding binding)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputBinding))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_MATCHES_OFFSET))(this, binding);
		}

		::System::Boolean Matches_1(::UnityEngine::InputSystem::InputBinding& binding, ::UnityEngine::InputSystem::InputBinding_MatchOptions options)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputBinding&, ::UnityEngine::InputSystem::InputBinding_MatchOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING_MATCHES_1_OFFSET))(this, binding, options);
		}
	};
}
