#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/Substring.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONSTRING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA587D0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0xA587A0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONSTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA58840)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONSTRING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EAE2240)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONSTRING_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1EAE22A0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONSTRING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EAE2270)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONSTRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA58790)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int JsonParser_JsonString_TypeDefinitionIndex = 32673;

	struct alignas(8) JsonParser_JsonString
	{
		::UnityEngine::InputSystem::Utilities::Substring text; // 0x10
		::System::Boolean hasEscapes; // 0x20

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONSTRING_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONSTRING_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONSTRING_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONSTRING_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString left, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONSTRING_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString left, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::JsonParser_JsonString, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONSTRING_OP_INEQUALITY_OFFSET))(left, right);
		}

		static ::UnityEngine::InputSystem::Utilities::JsonParser_JsonString op_Implicit(::System::String* str)
		{
			return ((::UnityEngine::InputSystem::Utilities::JsonParser_JsonString(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONSTRING_OP_IMPLICIT_OFFSET))(str);
		}
	};
}
