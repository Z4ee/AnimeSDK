#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/CookieToken.h"
#include "unitysdk/System/Net/CookieTokenizer_RecognizedAttribute.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_COOKIETOKENIZER_EXTRACT_OFFSET UNITYSDK_OFFSET(0x1D240710)
#define SYSTEM_NET_COOKIETOKENIZER_FINDNEXT_OFFSET UNITYSDK_OFFSET(0x1D240770)
#define SYSTEM_NET_COOKIETOKENIZER_GET_ENDOFCOOKIE_OFFSET UNITYSDK_OFFSET(0x1D240660)
#define SYSTEM_NET_COOKIETOKENIZER_GET_EOF_OFFSET UNITYSDK_OFFSET(0x1D240680)
#define SYSTEM_NET_COOKIETOKENIZER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D240690)
#define SYSTEM_NET_COOKIETOKENIZER_GET_QUOTED_OFFSET UNITYSDK_OFFSET(0x1D2406B0)
#define SYSTEM_NET_COOKIETOKENIZER_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x1D2406D0)
#define SYSTEM_NET_COOKIETOKENIZER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D2406F0)
#define SYSTEM_NET_COOKIETOKENIZER_NEXT_OFFSET UNITYSDK_OFFSET(0x1D240E50)
#define SYSTEM_NET_COOKIETOKENIZER_RESET_OFFSET UNITYSDK_OFFSET(0x1D241050)
#define SYSTEM_NET_COOKIETOKENIZER_SET_ENDOFCOOKIE_OFFSET UNITYSDK_OFFSET(0x1D240670)
#define SYSTEM_NET_COOKIETOKENIZER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1D2406A0)
#define SYSTEM_NET_COOKIETOKENIZER_SET_QUOTED_OFFSET UNITYSDK_OFFSET(0x1D2406C0)
#define SYSTEM_NET_COOKIETOKENIZER_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0x1D2406E0)
#define SYSTEM_NET_COOKIETOKENIZER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D240700)
#define SYSTEM_NET_COOKIETOKENIZER_TOKENFROMNAME_OFFSET UNITYSDK_OFFSET(0x1D241090)
#define SYSTEM_NET_COOKIETOKENIZER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D241360)
#define SYSTEM_NET_COOKIETOKENIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D240640)

namespace System::Net
{
	inline static constexpr unsigned int CookieTokenizer_TypeDefinitionIndex = 3415;

	class CookieTokenizer : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Net::CookieTokenizer_RecognizedAttribute>** StaticGet_RecognizedAttributes()
		{
			return (::Il2CppArray<::System::Net::CookieTokenizer_RecognizedAttribute>**)Il2CppClass::FromTypeDefinitionIndex(CookieTokenizer_TypeDefinitionIndex)->GetStaticField(0x36A0);
		}
		static ::Il2CppArray<::System::Net::CookieTokenizer_RecognizedAttribute>** StaticGet_RecognizedServerAttributes()
		{
			return (::Il2CppArray<::System::Net::CookieTokenizer_RecognizedAttribute>**)Il2CppClass::FromTypeDefinitionIndex(CookieTokenizer_TypeDefinitionIndex)->GetStaticField(0x36A8);
		}
		::System::String* m_tokenStream; // 0x10
		::System::String* m_value; // 0x18
		::System::String* m_name; // 0x20
		::System::Int32 m_tokenLength; // 0x28
		::System::Int32 m_index; // 0x2C
		::System::Net::CookieToken m_token; // 0x30
		::System::Boolean m_eofCookie; // 0x34
		::System::Boolean m_quoted; // 0x35
		::System::Int32 m_length; // 0x38
		::System::Int32 m_start; // 0x3C

		::System::Void _ctor(::System::String* tokenStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER__CTOR_OFFSET))(this, tokenStream);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER__CCTOR_OFFSET))();
		}

		::System::Boolean get_EndOfCookie()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_GET_ENDOFCOOKIE_OFFSET))(this);
		}

		::System::Void set_EndOfCookie(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_SET_ENDOFCOOKIE_OFFSET))(this, value);
		}

		::System::Boolean get_Eof()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_GET_EOF_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_SET_NAME_OFFSET))(this, value);
		}

		::System::Boolean get_Quoted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_GET_QUOTED_OFFSET))(this);
		}

		::System::Void set_Quoted(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_SET_QUOTED_OFFSET))(this, value);
		}

		::System::Net::CookieToken get_Token()
		{
			return ((::System::Net::CookieToken(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_GET_TOKEN_OFFSET))(this);
		}

		::System::Void set_Token(::System::Net::CookieToken value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::CookieToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_SET_TOKEN_OFFSET))(this, value);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_SET_VALUE_OFFSET))(this, value);
		}

		::System::String* Extract()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_EXTRACT_OFFSET))(this);
		}

		::System::Net::CookieToken FindNext(::System::Boolean ignoreComma, ::System::Boolean ignoreEquals)
		{
			return ((::System::Net::CookieToken(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_FINDNEXT_OFFSET))(this, ignoreComma, ignoreEquals);
		}

		::System::Net::CookieToken Next(::System::Boolean first, ::System::Boolean parseResponseCookies)
		{
			return ((::System::Net::CookieToken(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_NEXT_OFFSET))(this, first, parseResponseCookies);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_RESET_OFFSET))(this);
		}

		::System::Net::CookieToken TokenFromName(::System::Boolean parseResponseCookies)
		{
			return ((::System::Net::CookieToken(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_TOKENFROMNAME_OFFSET))(this, parseResponseCookies);
		}
	};
}
