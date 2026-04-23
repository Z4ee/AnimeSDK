#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/TextPosition.h"

namespace System { class String; }
namespace UnityEngine::UI { class SimpleStringReader; }

#define UNITYENGINE_UI_TEXTSCANNER_ASSERT_1_OFFSET UNITYSDK_OFFSET(0x1A5B2310)
#define UNITYENGINE_UI_TEXTSCANNER_ASSERT_OFFSET UNITYSDK_OFFSET(0x1A5B21D0)
#define UNITYENGINE_UI_TEXTSCANNER_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1A5B1DF0)
#define UNITYENGINE_UI_TEXTSCANNER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1A5B1DE0)
#define UNITYENGINE_UI_TEXTSCANNER_PEEK_OFFSET UNITYSDK_OFFSET(0x1A5B1EF0)
#define UNITYENGINE_UI_TEXTSCANNER_READ_OFFSET UNITYSDK_OFFSET(0x1A5B2080)
#define UNITYENGINE_UI_TEXTSCANNER_RESET_OFFSET UNITYSDK_OFFSET(0x1A5B1EC0)
#define UNITYENGINE_UI_TEXTSCANNER_SKIPWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1A5B2190)
#define UNITYENGINE_UI_TEXTSCANNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5B1E60)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int TextScanner_TypeDefinitionIndex = 5636;

	class TextScanner : public ::System::Object
	{
	public:
		::UnityEngine::UI::SimpleStringReader* reader; // 0x10
		::UnityEngine::UI::TextPosition position; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTSCANNER__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::TextPosition get_Position()
		{
			return ((::UnityEngine::UI::TextPosition(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTSCANNER_GET_POSITION_OFFSET))(this);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTSCANNER_GET_CANREAD_OFFSET))(this);
		}

		::System::Void Reset(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTSCANNER_RESET_OFFSET))(this, value);
		}

		::System::Char Peek()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTSCANNER_PEEK_OFFSET))(this);
		}

		::System::Char Read()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTSCANNER_READ_OFFSET))(this);
		}

		::System::Void SkipWhitespace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTSCANNER_SKIPWHITESPACE_OFFSET))(this);
		}

		::System::Void Assert(::System::Char next)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTSCANNER_ASSERT_OFFSET))(this, next);
		}

		::System::Void Assert_1(::System::String* next)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTSCANNER_ASSERT_1_OFFSET))(this, next);
		}
	};
}
