#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HEADERS_LEXER_EATCHAR_OFFSET UNITYSDK_OFFSET(0x1ADD4710)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_GETQUOTEDSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1ADD2010)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_GETREMAININGSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1ADD05A0)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_GETSTRINGVALUE_1_OFFSET UNITYSDK_OFFSET(0x1ADDA5B0)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_GETSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1ADD0570)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1ADDA590)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_ISSTARSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1ADD3E90)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_ISVALIDCHARACTER_OFFSET UNITYSDK_OFFSET(0x1ADDA960)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_ISVALIDTOKEN_OFFSET UNITYSDK_OFFSET(0x1ADDA840)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_PEEKCHAR_OFFSET UNITYSDK_OFFSET(0x1ADD46B0)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_SCANCOMMENTOPTIONAL_OFFSET UNITYSDK_OFFSET(0x1ADDAA00)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_SCAN_OFFSET UNITYSDK_OFFSET(0x1ADD0200)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1ADDA5A0)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETDATEVALUE_1_OFFSET UNITYSDK_OFFSET(0x1ADDA750)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETDATEVALUE_OFFSET UNITYSDK_OFFSET(0x1ADDA640)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETDOUBLEVALUE_OFFSET UNITYSDK_OFFSET(0x1ADDA7E0)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETNUMERICVALUE_1_OFFSET UNITYSDK_OFFSET(0x1ADD3F00)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETNUMERICVALUE_OFFSET UNITYSDK_OFFSET(0x1ADDA5E0)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETTIMESPANVALUE_OFFSET UNITYSDK_OFFSET(0x1ADD1F70)
#define SYSTEM_NET_HTTP_HEADERS_LEXER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADDAB50)
#define SYSTEM_NET_HTTP_HEADERS_LEXER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADCFFC0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int Lexer_TypeDefinitionIndex = 3789;

	class Lexer : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Boolean>** StaticGet_token_chars()
		{
			return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Lexer_TypeDefinitionIndex)->GetStaticField(0x2CA30);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_dt_formats()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Lexer_TypeDefinitionIndex)->GetStaticField(0x2CA38);
		}
		static ::System::Int32* StaticGet_last_token_char()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Lexer_TypeDefinitionIndex)->GetStaticField(0x9C00);
		}
		::System::String* s; // 0x10
		::System::Int32 pos; // 0x18

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER__CCTOR_OFFSET))();
		}

		::System::Int32 get_Position()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_SET_POSITION_OFFSET))(this, a1);
		}

		::System::String* GetStringValue(::System::Net::Http::Headers::Token a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Net::Http::Headers::Token))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_GETSTRINGVALUE_OFFSET))(this, a1);
		}

		::System::String* GetStringValue_1(::System::Net::Http::Headers::Token a1, ::System::Net::Http::Headers::Token a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Net::Http::Headers::Token, ::System::Net::Http::Headers::Token))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_GETSTRINGVALUE_1_OFFSET))(this, a1, a2);
		}

		::System::String* GetQuotedStringValue(::System::Net::Http::Headers::Token a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Net::Http::Headers::Token))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_GETQUOTEDSTRINGVALUE_OFFSET))(this, a1);
		}

		::System::String* GetRemainingStringValue(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_GETREMAININGSTRINGVALUE_OFFSET))(this, a1);
		}

		::System::Boolean IsStarStringValue(::System::Net::Http::Headers::Token a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Http::Headers::Token))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_ISSTARSTRINGVALUE_OFFSET))(this, a1);
		}

		::System::Boolean TryGetNumericValue(::System::Net::Http::Headers::Token a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Http::Headers::Token, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETNUMERICVALUE_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetNumericValue_1(::System::Net::Http::Headers::Token a1, ::System::Int64& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Http::Headers::Token, ::System::Int64&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETNUMERICVALUE_1_OFFSET))(this, a1, a2);
		}

		::System::Nullable_1<::System::TimeSpan> TryGetTimeSpanValue(::System::Net::Http::Headers::Token a1)
		{
			return ((::System::Nullable_1<::System::TimeSpan>(*)(::PVOID, ::System::Net::Http::Headers::Token))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETTIMESPANVALUE_OFFSET))(this, a1);
		}

		::System::Boolean TryGetDateValue(::System::Net::Http::Headers::Token a1, ::System::DateTimeOffset& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Http::Headers::Token, ::System::DateTimeOffset&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETDATEVALUE_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean TryGetDateValue_1(::System::String* a1, ::System::DateTimeOffset& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::DateTimeOffset&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETDATEVALUE_1_OFFSET))(a1, a2);
		}

		::System::Boolean TryGetDoubleValue(::System::Net::Http::Headers::Token a1, ::System::Double& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Http::Headers::Token, ::System::Double&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETDOUBLEVALUE_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean IsValidToken(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_ISVALIDTOKEN_OFFSET))(a1);
		}

		static ::System::Boolean IsValidCharacter(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_ISVALIDCHARACTER_OFFSET))(a1);
		}

		::System::Void EatChar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_EATCHAR_OFFSET))(this);
		}

		::System::Int32 PeekChar()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_PEEKCHAR_OFFSET))(this);
		}

		::System::Boolean ScanCommentOptional(::System::String*& a1, ::System::Net::Http::Headers::Token& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::System::Net::Http::Headers::Token&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_SCANCOMMENTOPTIONAL_OFFSET))(this, a1, a2);
		}

		::System::Net::Http::Headers::Token Scan(::System::Boolean a1)
		{
			return ((::System::Net::Http::Headers::Token(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_SCAN_OFFSET))(this, a1);
		}
	};
}
