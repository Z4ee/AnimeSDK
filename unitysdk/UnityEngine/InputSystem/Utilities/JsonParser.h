#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_CURRENTPROPERTYHASVALUEEQUALTO_OFFSET UNITYSDK_OFFSET(0x94A410)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_GET_ISATEND_OFFSET UNITYSDK_OFFSET(0x94A6B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_NAVIGATETOPROPERTY_OFFSET UNITYSDK_OFFSET(0x94A400)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSEARRAYVALUE_OFFSET UNITYSDK_OFFSET(0x94A4B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSEBOOLEANVALUE_OFFSET UNITYSDK_OFFSET(0x94A4E0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSENULLVALUE_OFFSET UNITYSDK_OFFSET(0x94A4F0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSENUMBER_OFFSET UNITYSDK_OFFSET(0x94A4D0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSEOBJECTVALUE_OFFSET UNITYSDK_OFFSET(0x94A4C0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSESTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x94A4A0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSETOKEN_OFFSET UNITYSDK_OFFSET(0x94A460)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSEVALUE_1_OFFSET UNITYSDK_OFFSET(0x94A490)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x94A470)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_RESET_OFFSET UNITYSDK_OFFSET(0x94A3E0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_SKIPSTRING_OFFSET UNITYSDK_OFFSET(0x94A560)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_SKIPTOVALUE_OFFSET UNITYSDK_OFFSET(0x94A550)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_SKIPWHITESPACE_OFFSET UNITYSDK_OFFSET(0x94A570)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x94A3F0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_JSONPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x94A360)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int JsonParser_TypeDefinitionIndex = 29395;

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
