#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TypeCode.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/PrimitiveValue.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_APPLYTOOBJECT_OFFSET UNITYSDK_OFFSET(0xA5BDB0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_CONVERTTO_OFFSET UNITYSDK_OFFSET(0xA5BB20)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA5BC60)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA5BBF0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA5BD00)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x259D70)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x32EEE0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x41E6C0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EB4CF90)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EB4D000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_PARSEMULTIPLE_OFFSET UNITYSDK_OFFSET(0x1EB48230)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_PARSEPARAMETER_OFFSET UNITYSDK_OFFSET(0x1EB4D070)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_PARSE_OFFSET UNITYSDK_OFFSET(0x1EB4D8F0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x324D50)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA5BB10)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA5BB60)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int NamedValue_TypeDefinitionIndex = 32682;

	struct alignas(8) NamedValue
	{
		// static const ::System::String* Separator; // 0x0
		::System::String* _name_k__BackingField; // 0x10
		::UnityEngine::InputSystem::Utilities::PrimitiveValue _value_k__BackingField; // 0x18

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_SET_NAME_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Utilities::PrimitiveValue get_value()
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::InputSystem::Utilities::PrimitiveValue value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::PrimitiveValue))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_SET_VALUE_OFFSET))(this, value);
		}

		::System::TypeCode get_type()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_GET_TYPE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::NamedValue ConvertTo(::System::TypeCode type)
		{
			return ((::UnityEngine::InputSystem::Utilities::NamedValue(*)(::PVOID, ::System::TypeCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_CONVERTTO_OFFSET))(this, type);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::Utilities::NamedValue other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::NamedValue))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::InputSystem::Utilities::NamedValue left, ::UnityEngine::InputSystem::Utilities::NamedValue right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::NamedValue, ::UnityEngine::InputSystem::Utilities::NamedValue))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::InputSystem::Utilities::NamedValue left, ::UnityEngine::InputSystem::Utilities::NamedValue right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::NamedValue, ::UnityEngine::InputSystem::Utilities::NamedValue))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_OP_INEQUALITY_OFFSET))(left, right);
		}

		static ::Il2CppArray<::UnityEngine::InputSystem::Utilities::NamedValue>* ParseMultiple(::System::String* parameterString)
		{
			return ((::Il2CppArray<::UnityEngine::InputSystem::Utilities::NamedValue>*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_PARSEMULTIPLE_OFFSET))(parameterString);
		}

		static ::UnityEngine::InputSystem::Utilities::NamedValue Parse(::System::String* str)
		{
			return ((::UnityEngine::InputSystem::Utilities::NamedValue(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_PARSE_OFFSET))(str);
		}

		static ::UnityEngine::InputSystem::Utilities::NamedValue ParseParameter(::System::String* parameterString, ::System::Int32& index)
		{
			return ((::UnityEngine::InputSystem::Utilities::NamedValue(*)(::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_PARSEPARAMETER_OFFSET))(parameterString, index);
		}

		::System::Void ApplyToObject(::System::Object* instance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEDVALUE_APPLYTOOBJECT_OFFSET))(this, instance);
		}
	};
}
