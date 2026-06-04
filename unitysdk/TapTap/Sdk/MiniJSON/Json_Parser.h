#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TapTap/Sdk/MiniJSON/Json_Parser_TOKEN.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StringReader; }

#define TAPTAP_SDK_MINIJSON_JSON_PARSER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B01F410)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER_EATWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1B020610)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER_GET_NEXTCHAR_OFFSET UNITYSDK_OFFSET(0x1B020280)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER_GET_NEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x1B01F660)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER_GET_NEXTWORD_OFFSET UNITYSDK_OFFSET(0x1B0202E0)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER_GET_PEEKCHAR_OFFSET UNITYSDK_OFFSET(0x1B0206B0)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER_ISWORDBREAK_OFFSET UNITYSDK_OFFSET(0x1B01F310)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER_PARSEARRAY_OFFSET UNITYSDK_OFFSET(0x1B020020)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER_PARSEBYTOKEN_OFFSET UNITYSDK_OFFSET(0x1B020120)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER_PARSENUMBER_OFFSET UNITYSDK_OFFSET(0x1B0201C0)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER_PARSEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B01F4B0)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER_PARSESTRING_OFFSET UNITYSDK_OFFSET(0x1B01F930)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1B01F3F0)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x1B01F050)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B01F370)

namespace TapTap::Sdk::MiniJSON
{
	inline static constexpr unsigned int Json_Parser_TypeDefinitionIndex = 7083;

	class Json_Parser : public ::System::Object
	{
	public:
		::System::IO::StringReader* json; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_PARSER__CTOR_OFFSET))(this, a1);
		}

		static ::System::Boolean IsWordBreak(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_PARSER_ISWORDBREAK_OFFSET))(a1);
		}

		static ::System::Object* Parse(::System::String* a1)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_PARSER_PARSE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_PARSER_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* ParseObject()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_PARSER_PARSEOBJECT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* ParseArray()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_PARSER_PARSEARRAY_OFFSET))(this);
		}

		::System::Object* ParseValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_PARSER_PARSEVALUE_OFFSET))(this);
		}

		::System::Object* ParseByToken(::TapTap::Sdk::MiniJSON::Json_Parser_TOKEN a1)
		{
			return ((::System::Object*(*)(::PVOID, ::TapTap::Sdk::MiniJSON::Json_Parser_TOKEN))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_PARSER_PARSEBYTOKEN_OFFSET))(this, a1);
		}

		::System::String* ParseString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_PARSER_PARSESTRING_OFFSET))(this);
		}

		::System::Object* ParseNumber()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_PARSER_PARSENUMBER_OFFSET))(this);
		}

		::System::Void EatWhitespace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_PARSER_EATWHITESPACE_OFFSET))(this);
		}

		::System::Char get_PeekChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_PARSER_GET_PEEKCHAR_OFFSET))(this);
		}

		::System::Char get_NextChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_PARSER_GET_NEXTCHAR_OFFSET))(this);
		}

		::System::String* get_NextWord()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_PARSER_GET_NEXTWORD_OFFSET))(this);
		}

		::TapTap::Sdk::MiniJSON::Json_Parser_TOKEN get_NextToken()
		{
			return ((::TapTap::Sdk::MiniJSON::Json_Parser_TOKEN(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_PARSER_GET_NEXTTOKEN_OFFSET))(this);
		}
	};
}
