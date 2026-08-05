#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/JsonParser_JsonString.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/JsonParser_JsonValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { struct Enum; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E788E70)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_EQUALS_2_OFFSET UNITYSDK_OFFSET(0xA390F0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA390A0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA39180)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E786AF0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1E788240)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1E788270)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1E788B00)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1E788190)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1E788210)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1E788B40)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0x1E788B70)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E7884F0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E789D10)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0xA38E90)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_TODOUBLE_OFFSET UNITYSDK_OFFSET(0xA39000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_TOINTEGER_OFFSET UNITYSDK_OFFSET(0xA38F80)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA39090)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int JsonParser_JsonValue_TypeDefinitionIndex = 32674;

	struct alignas(8) JsonParser_JsonValue
	{
		::UnityEngine::InputSystem::Utilities::JsonParser_JsonValueType type; // 0x10
		::System::Boolean boolValue; // 0x14
		::System::Double realValue; // 0x18
		::System::Int64 integerValue; // 0x20
		::UnityEngine::InputSystem::Utilities::JsonParser_JsonString stringValue; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>* arrayValue; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>* objectValue; // 0x48
		::System::Object* anyValue; // 0x50

		::System::Boolean ToBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_TOBOOLEAN_OFFSET))(this);
		}

		::System::Int64 ToInteger()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_TOINTEGER_OFFSET))(this);
		}

		::System::Double ToDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_TODOUBLE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_TOSTRING_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue op_Implicit(::System::Boolean val)
		{
			return ((::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_OP_IMPLICIT_OFFSET))(val);
		}

		static ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue op_Implicit_1(::System::Int64 val)
		{
			return ((::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue(*)(::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_OP_IMPLICIT_1_OFFSET))(val);
		}

		static ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue op_Implicit_2(::System::Double val)
		{
			return ((::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue(*)(::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_OP_IMPLICIT_2_OFFSET))(val);
		}

		static ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue op_Implicit_3(::System::String* str)
		{
			return ((::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_OP_IMPLICIT_3_OFFSET))(str);
		}

		static ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue op_Implicit_4(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString str)
		{
			return ((::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue(*)(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_OP_IMPLICIT_4_OFFSET))(str);
		}

		static ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue op_Implicit_5(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>* array)
		{
			return ((::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue(*)(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_OP_IMPLICIT_5_OFFSET))(array);
		}

		static ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue op_Implicit_6(::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>* obj)
		{
			return ((::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_OP_IMPLICIT_6_OFFSET))(obj);
		}

		static ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue op_Implicit_7(::System::Enum* val)
		{
			return ((::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue(*)(::System::Enum*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_OP_IMPLICIT_7_OFFSET))(val);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_EQUALS_OFFSET))(this, other);
		}

		static ::System::Boolean Equals_1(::System::Object* obj, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue value)
		{
			return ((::System::Boolean(*)(::System::Object*, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_EQUALS_1_OFFSET))(obj, value);
		}

		::System::Boolean Equals_2(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_EQUALS_2_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue left, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue left, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE_OP_INEQUALITY_OFFSET))(left, right);
		}
	};
}
