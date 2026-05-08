#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/JsonParser_JsonValue.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3FFE30)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3FFE70)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE___C__TOSTRING_B__11_0_OFFSET UNITYSDK_OFFSET(0x1B3FFE80)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE___C__TOSTRING_B__11_1_OFFSET UNITYSDK_OFFSET(0x1B3FFE90)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int JsonParser_JsonValue___c_TypeDefinitionIndex = 29399;

	class JsonParser_JsonValue___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, ::System::String*>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JsonParser_JsonValue___c_TypeDefinitionIndex)->GetStaticField(0x22760);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>, ::System::String*>** StaticGet___9__11_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JsonParser_JsonValue___c_TypeDefinitionIndex)->GetStaticField(0x22768);
		}
		static ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue___c** StaticGet___9()
		{
			return (::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue___c**)Il2CppClass::FromTypeDefinitionIndex(JsonParser_JsonValue___c_TypeDefinitionIndex)->GetStaticField(0x22770);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE___C__CTOR_OFFSET))(this);
		}

		::System::String* _ToString_b__11_0(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue x)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE___C__TOSTRING_B__11_0_OFFSET))(this, x);
		}

		::System::String* _ToString_b__11_1(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue> pair)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_JSONVALUE___C__TOSTRING_B__11_1_OFFSET))(this, pair);
		}
	};
}
