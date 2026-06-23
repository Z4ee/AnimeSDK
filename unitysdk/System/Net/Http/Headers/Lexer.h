#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HEADERS_LEXER_EATCHAR_OFFSET UNITYSDK_OFFSET(0x1D487DE0)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_GETQUOTEDSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1D485830)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_GETREMAININGSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1D483EC0)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_GETSTRINGVALUE_1_OFFSET UNITYSDK_OFFSET(0x1D48DD90)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_GETSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1D483E90)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_ISSTARSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1D487500)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_ISVALIDCHARACTER_OFFSET UNITYSDK_OFFSET(0x1D48E130)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_ISVALIDTOKEN_OFFSET UNITYSDK_OFFSET(0x1D48E020)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_PEEKCHAR_OFFSET UNITYSDK_OFFSET(0x1D487D60)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_SCANCOMMENTOPTIONAL_OFFSET UNITYSDK_OFFSET(0x1D48E200)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_SCAN_OFFSET UNITYSDK_OFFSET(0x1D483980)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETDATEVALUE_1_OFFSET UNITYSDK_OFFSET(0x1D48DEE0)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETDATEVALUE_OFFSET UNITYSDK_OFFSET(0x1D48DE40)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETDOUBLEVALUE_OFFSET UNITYSDK_OFFSET(0x1D48DFA0)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETNUMERICVALUE_1_OFFSET UNITYSDK_OFFSET(0x1D487590)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETNUMERICVALUE_OFFSET UNITYSDK_OFFSET(0x1D48DDC0)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETTIMESPANVALUE_OFFSET UNITYSDK_OFFSET(0x1D485770)
#define SYSTEM_NET_HTTP_HEADERS_LEXER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D48E350)
#define SYSTEM_NET_HTTP_HEADERS_LEXER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4837B0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int Lexer_TypeDefinitionIndex = 26150;

	class Lexer : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Boolean>** StaticGet_token_chars()
		{
			return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Lexer_TypeDefinitionIndex)->GetStaticField(0x1FF00);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_dt_formats()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Lexer_TypeDefinitionIndex)->GetStaticField(0x1FF08);
		}
		static ::System::Int32* StaticGet_last_token_char()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Lexer_TypeDefinitionIndex)->GetStaticField(0x4750);
		}
		::System::String* s; // 0x10
		::System::Int32 pos; // 0x18

		::System::Void _ctor(::System::String* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER__CTOR_OFFSET))(this, stream);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER__CCTOR_OFFSET))();
		}

		::System::String* GetStringValue(::System::Net::Http::Headers::Token token)
		{
			return ((::System::String*(*)(::PVOID, ::System::Net::Http::Headers::Token))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_GETSTRINGVALUE_OFFSET))(this, token);
		}

		::System::String* GetStringValue_1(::System::Net::Http::Headers::Token start, ::System::Net::Http::Headers::Token end)
		{
			return ((::System::String*(*)(::PVOID, ::System::Net::Http::Headers::Token, ::System::Net::Http::Headers::Token))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_GETSTRINGVALUE_1_OFFSET))(this, start, end);
		}

		::System::String* GetQuotedStringValue(::System::Net::Http::Headers::Token start)
		{
			return ((::System::String*(*)(::PVOID, ::System::Net::Http::Headers::Token))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_GETQUOTEDSTRINGVALUE_OFFSET))(this, start);
		}

		::System::String* GetRemainingStringValue(::System::Int32 position)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_GETREMAININGSTRINGVALUE_OFFSET))(this, position);
		}

		::System::Boolean IsStarStringValue(::System::Net::Http::Headers::Token token)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Http::Headers::Token))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_ISSTARSTRINGVALUE_OFFSET))(this, token);
		}

		::System::Boolean TryGetNumericValue(::System::Net::Http::Headers::Token token, ::System::Int32& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Http::Headers::Token, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETNUMERICVALUE_OFFSET))(this, token, value);
		}

		::System::Boolean TryGetNumericValue_1(::System::Net::Http::Headers::Token token, ::System::Int64& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Http::Headers::Token, ::System::Int64&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETNUMERICVALUE_1_OFFSET))(this, token, value);
		}

		::System::Nullable_1<::System::TimeSpan> TryGetTimeSpanValue(::System::Net::Http::Headers::Token token)
		{
			return ((::System::Nullable_1<::System::TimeSpan>(*)(::PVOID, ::System::Net::Http::Headers::Token))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETTIMESPANVALUE_OFFSET))(this, token);
		}

		::System::Boolean TryGetDateValue(::System::Net::Http::Headers::Token token, ::System::DateTimeOffset& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Http::Headers::Token, ::System::DateTimeOffset&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETDATEVALUE_OFFSET))(this, token, value);
		}

		static ::System::Boolean TryGetDateValue_1(::System::String* text, ::System::DateTimeOffset& value)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::DateTimeOffset&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETDATEVALUE_1_OFFSET))(text, value);
		}

		::System::Boolean TryGetDoubleValue(::System::Net::Http::Headers::Token token, ::System::Double& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Http::Headers::Token, ::System::Double&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETDOUBLEVALUE_OFFSET))(this, token, value);
		}

		static ::System::Boolean IsValidToken(::System::String* input)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_ISVALIDTOKEN_OFFSET))(input);
		}

		static ::System::Boolean IsValidCharacter(::System::Char input)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_ISVALIDCHARACTER_OFFSET))(input);
		}

		::System::Void EatChar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_EATCHAR_OFFSET))(this);
		}

		::System::Int32 PeekChar()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_PEEKCHAR_OFFSET))(this);
		}

		::System::Boolean ScanCommentOptional(::System::String*& value, ::System::Net::Http::Headers::Token& readToken)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::System::Net::Http::Headers::Token&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_SCANCOMMENTOPTIONAL_OFFSET))(this, value, readToken);
		}

		::System::Net::Http::Headers::Token Scan(::System::Boolean recognizeDash)
		{
			return ((::System::Net::Http::Headers::Token(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_SCAN_OFFSET))(this, recognizeDash);
		}
	};
}
