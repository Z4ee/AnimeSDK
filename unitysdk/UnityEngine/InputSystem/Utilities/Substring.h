#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/StringComparison.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_COMPARETO_OFFSET UNITYSDK_OFFSET(0x970A30)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_COMPARE_OFFSET UNITYSDK_OFFSET(0x1B4EEA30)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x970850)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x970980)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_EQUALS_3_OFFSET UNITYSDK_OFFSET(0x9709C0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x970840)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x970BE0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x2F0420)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x50CC50)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x970CA0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x2F1C00)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1B4EED30)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_EQUALITY_2_OFFSET UNITYSDK_OFFSET(0x1B4EEE10)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B4EECB0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B4EEEE0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1B4EEDA0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_INEQUALITY_2_OFFSET UNITYSDK_OFFSET(0x1B4EEE70)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B4EECF0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_STARTSWITH_OFFSET UNITYSDK_OFFSET(0x970A70)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_SUBSTR_OFFSET UNITYSDK_OFFSET(0x970B80)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x970BB0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2F3700)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING__CTOR_2_OFFSET UNITYSDK_OFFSET(0x970810)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x9707F0)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int Substring_TypeDefinitionIndex = 29431;

	struct alignas(8) Substring
	{
		::System::String* m_String; // 0x10
		::System::Int32 m_Index; // 0x18
		::System::Int32 m_Length; // 0x1C

		::System::Void _ctor(::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING__CTOR_OFFSET))(this, str);
		}

		::System::Void _ctor_1(::System::String* str, ::System::Int32 index, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING__CTOR_1_OFFSET))(this, str, index, length);
		}

		::System::Void _ctor_2(::System::String* str, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING__CTOR_2_OFFSET))(this, str, index);
		}

		::System::Boolean get_isEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::System::String* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_EQUALS_1_OFFSET))(this, other);
		}

		::System::Boolean Equals_2(::UnityEngine::InputSystem::Utilities::Substring other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::Substring))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_EQUALS_2_OFFSET))(this, other);
		}

		/*
		::System::Boolean Equals_3(::UnityEngine::InputSystem::Utilities::InternedString other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_EQUALS_3_OFFSET))(this, other);
		}
		*/

		::System::Int32 CompareTo(::UnityEngine::InputSystem::Utilities::Substring other)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::Substring))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_COMPARETO_OFFSET))(this, other);
		}

		static ::System::Int32 Compare(::UnityEngine::InputSystem::Utilities::Substring left, ::UnityEngine::InputSystem::Utilities::Substring right, ::System::StringComparison comparison)
		{
			return ((::System::Int32(*)(::UnityEngine::InputSystem::Utilities::Substring, ::UnityEngine::InputSystem::Utilities::Substring, ::System::StringComparison))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_COMPARE_OFFSET))(left, right, comparison);
		}

		::System::Boolean StartsWith(::System::String* str)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_STARTSWITH_OFFSET))(this, str);
		}

		::System::String* Substr(::System::Int32 index, ::System::Int32 length)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_SUBSTR_OFFSET))(this, index, length);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::InputSystem::Utilities::Substring a, ::UnityEngine::InputSystem::Utilities::Substring b)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::Substring, ::UnityEngine::InputSystem::Utilities::Substring))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::InputSystem::Utilities::Substring a, ::UnityEngine::InputSystem::Utilities::Substring b)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::Substring, ::UnityEngine::InputSystem::Utilities::Substring))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_INEQUALITY_OFFSET))(a, b);
		}

		/*
		static ::System::Boolean op_Equality_1(::UnityEngine::InputSystem::Utilities::Substring a, ::UnityEngine::InputSystem::Utilities::InternedString b)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::Substring, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_EQUALITY_1_OFFSET))(a, b);
		}
		*/

		/*
		static ::System::Boolean op_Inequality_1(::UnityEngine::InputSystem::Utilities::Substring a, ::UnityEngine::InputSystem::Utilities::InternedString b)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::Substring, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_INEQUALITY_1_OFFSET))(a, b);
		}
		*/

		/*
		static ::System::Boolean op_Equality_2(::UnityEngine::InputSystem::Utilities::InternedString a, ::UnityEngine::InputSystem::Utilities::Substring b)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::Substring))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_EQUALITY_2_OFFSET))(a, b);
		}
		*/

		/*
		static ::System::Boolean op_Inequality_2(::UnityEngine::InputSystem::Utilities::InternedString a, ::UnityEngine::InputSystem::Utilities::Substring b)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::Substring))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_INEQUALITY_2_OFFSET))(a, b);
		}
		*/

		static ::UnityEngine::InputSystem::Utilities::Substring op_Implicit(::System::String* s)
		{
			return ((::UnityEngine::InputSystem::Utilities::Substring(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_IMPLICIT_OFFSET))(s);
		}

		::System::Int32 get_length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_GET_LENGTH_OFFSET))(this);
		}

		::System::Int32 get_index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_GET_INDEX_OFFSET))(this);
		}

		::System::Char get_Item(::System::Int32 index)
		{
			return ((::System::Char(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_GET_ITEM_OFFSET))(this, index);
		}
	};
}
