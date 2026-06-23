#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_CURRENTPROPERTYHASVALUEEQUALTO_OFFSET UNITYSDK_OFFSET(0x9EC880)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_GET_ISATEND_OFFSET UNITYSDK_OFFSET(0x9ECB20)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_NAVIGATETOPROPERTY_OFFSET UNITYSDK_OFFSET(0x9EC870)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSEARRAYVALUE_OFFSET UNITYSDK_OFFSET(0x9EC920)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSEBOOLEANVALUE_OFFSET UNITYSDK_OFFSET(0x9EC950)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSENULLVALUE_OFFSET UNITYSDK_OFFSET(0x9EC960)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSENUMBER_OFFSET UNITYSDK_OFFSET(0x9EC940)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSEOBJECTVALUE_OFFSET UNITYSDK_OFFSET(0x9EC930)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSESTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x9EC910)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSETOKEN_OFFSET UNITYSDK_OFFSET(0x9EC8D0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSEVALUE_1_OFFSET UNITYSDK_OFFSET(0x9EC900)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x9EC8E0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_RESET_OFFSET UNITYSDK_OFFSET(0x9EC850)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_SKIPSTRING_OFFSET UNITYSDK_OFFSET(0x9EC9D0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_SKIPTOVALUE_OFFSET UNITYSDK_OFFSET(0x9EC9C0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_SKIPWHITESPACE_OFFSET UNITYSDK_OFFSET(0x9EC9E0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9EC860)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x9EC7D0)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int JsonParser_TypeDefinitionIndex = 32051;

	struct alignas(8) JsonParser
	{
		::System::String* m_Text; // 0x10
		::System::Int32 m_Length; // 0x18
		::System::Int32 m_Position; // 0x1C
		::System::Boolean m_MatchAnyElementInArray; // 0x20
		::System::Boolean m_DryRun; // 0x21

		::System::Void _ctor(::System::String* json)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER__CTOR_OFFSET))(this, json);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_RESET_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_TOSTRING_OFFSET))(this);
		}

		::System::Boolean NavigateToProperty(::System::String* path)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_NAVIGATETOPROPERTY_OFFSET))(this, path);
		}

		/*
		::System::Boolean CurrentPropertyHasValueEqualTo(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue expectedValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_CURRENTPROPERTYHASVALUEEQUALTO_OFFSET))(this, expectedValue);
		}
		*/

		::System::Boolean ParseToken(::System::Char token)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSETOKEN_OFFSET))(this, token);
		}

		::System::Boolean ParseValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSEVALUE_OFFSET))(this);
		}

		/*
		::System::Boolean ParseValue_1(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSEVALUE_1_OFFSET))(this, result);
		}
		*/

		/*
		::System::Boolean ParseStringValue(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSESTRINGVALUE_OFFSET))(this, result);
		}
		*/

		/*
		::System::Boolean ParseArrayValue(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSEARRAYVALUE_OFFSET))(this, result);
		}
		*/

		/*
		::System::Boolean ParseObjectValue(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSEOBJECTVALUE_OFFSET))(this, result);
		}
		*/

		/*
		::System::Boolean ParseNumber(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSENUMBER_OFFSET))(this, result);
		}
		*/

		/*
		::System::Boolean ParseBooleanValue(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSEBOOLEANVALUE_OFFSET))(this, result);
		}
		*/

		/*
		::System::Boolean ParseNullValue(::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::JsonParser_JsonValue&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSENULLVALUE_OFFSET))(this, result);
		}
		*/

		::System::Boolean SkipToValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_SKIPTOVALUE_OFFSET))(this);
		}

		::System::Boolean SkipString(::System::String* text)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_SKIPSTRING_OFFSET))(this, text);
		}

		::System::Void SkipWhitespace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_SKIPWHITESPACE_OFFSET))(this);
		}

		::System::Boolean get_isAtEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_GET_ISATEND_OFFSET))(this);
		}
	};
}
