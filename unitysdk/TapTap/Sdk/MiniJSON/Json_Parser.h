#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TapTap/Sdk/MiniJSON/Json_Parser_TOKEN.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StringReader; }

#define TAPTAP_SDK_MINIJSON_JSON_PARSER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BB619F0)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER_EATWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1BB62F50)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER_GET_NEXTCHAR_OFFSET UNITYSDK_OFFSET(0x1BB62AD0)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER_GET_NEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x1BB61C00)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER_GET_NEXTWORD_OFFSET UNITYSDK_OFFSET(0x1BB62B50)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER_GET_PEEKCHAR_OFFSET UNITYSDK_OFFSET(0x1BB631A0)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER_ISWORDBREAK_OFFSET UNITYSDK_OFFSET(0x1BB61820)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER_PARSEARRAY_OFFSET UNITYSDK_OFFSET(0x1BB62800)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER_PARSEBYTOKEN_OFFSET UNITYSDK_OFFSET(0x1BB628F0)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER_PARSENUMBER_OFFSET UNITYSDK_OFFSET(0x1BB629E0)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER_PARSEOBJECT_OFFSET UNITYSDK_OFFSET(0x1BB61A20)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER_PARSESTRING_OFFSET UNITYSDK_OFFSET(0x1BB61FF0)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1BB619D0)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x1BB61580)
#define TAPTAP_SDK_MINIJSON_JSON_PARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB61900)

namespace TapTap::Sdk::MiniJSON
{
	inline static constexpr unsigned int Json_Parser_TypeDefinitionIndex = 9486;

	class Json_Parser : public ::System::Object
	{
	public:
		// static const ::System::String* WORD_BREAK; // 0x0
		::System::IO::StringReader* json; // 0x10

		::System::Void _ctor(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_PARSER__CTOR_OFFSET))(this, jsonString);
		}

		static ::System::Boolean IsWordBreak(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_PARSER_ISWORDBREAK_OFFSET))(c);
		}

		static ::System::Object* Parse(::System::String* jsonString)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_PARSER_PARSE_OFFSET))(jsonString);
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

		::System::Object* ParseByToken(::TapTap::Sdk::MiniJSON::Json_Parser_TOKEN token)
		{
			return ((::System::Object*(*)(::PVOID, ::TapTap::Sdk::MiniJSON::Json_Parser_TOKEN))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_PARSER_PARSEBYTOKEN_OFFSET))(this, token);
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
