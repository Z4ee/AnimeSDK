#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/CookieToken.h"
#include "unitysdk/System/Net/CookieTokenizer_RecognizedAttribute.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_COOKIETOKENIZER_EXTRACT_OFFSET UNITYSDK_OFFSET(0x186C4660)
#define SYSTEM_NET_COOKIETOKENIZER_FINDNEXT_OFFSET UNITYSDK_OFFSET(0x186C46C0)
#define SYSTEM_NET_COOKIETOKENIZER_GET_ENDOFCOOKIE_OFFSET UNITYSDK_OFFSET(0x186C45C0)
#define SYSTEM_NET_COOKIETOKENIZER_GET_EOF_OFFSET UNITYSDK_OFFSET(0x186C45B0)
#define SYSTEM_NET_COOKIETOKENIZER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x186C45E0)
#define SYSTEM_NET_COOKIETOKENIZER_GET_QUOTED_OFFSET UNITYSDK_OFFSET(0x186C4600)
#define SYSTEM_NET_COOKIETOKENIZER_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x186C4620)
#define SYSTEM_NET_COOKIETOKENIZER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x186C4640)
#define SYSTEM_NET_COOKIETOKENIZER_NEXT_OFFSET UNITYSDK_OFFSET(0x186C4360)
#define SYSTEM_NET_COOKIETOKENIZER_RESET_OFFSET UNITYSDK_OFFSET(0x186C4A20)
#define SYSTEM_NET_COOKIETOKENIZER_SET_ENDOFCOOKIE_OFFSET UNITYSDK_OFFSET(0x186C45D0)
#define SYSTEM_NET_COOKIETOKENIZER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x186C45F0)
#define SYSTEM_NET_COOKIETOKENIZER_SET_QUOTED_OFFSET UNITYSDK_OFFSET(0x186C4610)
#define SYSTEM_NET_COOKIETOKENIZER_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0x186C4630)
#define SYSTEM_NET_COOKIETOKENIZER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x186C4650)
#define SYSTEM_NET_COOKIETOKENIZER_TOKENFROMNAME_OFFSET UNITYSDK_OFFSET(0x186C4A50)
#define SYSTEM_NET_COOKIETOKENIZER__CCTOR_OFFSET UNITYSDK_OFFSET(0x186C4D50)
#define SYSTEM_NET_COOKIETOKENIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x186C3940)

namespace System::Net
{
	inline static constexpr unsigned int CookieTokenizer_TypeDefinitionIndex = 2784;

	class CookieTokenizer : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Net::CookieTokenizer_RecognizedAttribute>** StaticGet_RecognizedServerAttributes()
		{
			return (::Il2CppArray<::System::Net::CookieTokenizer_RecognizedAttribute>**)Il2CppClass::FromTypeDefinitionIndex(CookieTokenizer_TypeDefinitionIndex)->GetStaticField(0x11C40);
		}
		static ::Il2CppArray<::System::Net::CookieTokenizer_RecognizedAttribute>** StaticGet_RecognizedAttributes()
		{
			return (::Il2CppArray<::System::Net::CookieTokenizer_RecognizedAttribute>**)Il2CppClass::FromTypeDefinitionIndex(CookieTokenizer_TypeDefinitionIndex)->GetStaticField(0x11C48);
		}
		::System::String* m_tokenStream; // 0x10
		::System::String* m_name; // 0x18
		::System::String* m_value; // 0x20
		::System::Int32 m_start; // 0x28
		::System::Int32 m_tokenLength; // 0x2C
		::System::Net::CookieToken m_token; // 0x30
		::System::Int32 m_index; // 0x34
		::System::Int32 m_length; // 0x38
		::System::Boolean m_eofCookie; // 0x3C
		::System::Boolean m_quoted; // 0x3D

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
