#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class Lexer; }

#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1ADCFC70)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ADCFD30)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_GET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x1ADCFB90)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_GET_SCHEME_OFFSET UNITYSDK_OFFSET(0x1ADCFBB0)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_SET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x1ADCFBA0)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_SET_SCHEME_OFFSET UNITYSDK_OFFSET(0x1ADCFBC0)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1ADCFBD0)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ADD05E0)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1ADCFFD0)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_TRYPARSE_1_OFFSET UNITYSDK_OFFSET(0x1ADD0160)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1ADCFF40)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADCFB80)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int AuthenticationHeaderValue_TypeDefinitionIndex = 3764;

	class AuthenticationHeaderValue : public ::System::Object
	{
	public:
		::System::String* _Scheme_k__BackingField; // 0x10
		::System::String* _Parameter_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE__CTOR_OFFSET))(this);
		}

		::System::String* get_Parameter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_GET_PARAMETER_OFFSET))(this);
		}

		::System::Void set_Parameter(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_SET_PARAMETER_OFFSET))(this, a1);
		}

		::System::String* get_Scheme()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_GET_SCHEME_OFFSET))(this);
		}

		::System::Void set_Scheme(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_SET_SCHEME_OFFSET))(this, a1);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::Net::Http::Headers::AuthenticationHeaderValue*& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Net::Http::Headers::AuthenticationHeaderValue*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_TRYPARSE_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryParse_1(::System::String* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::AuthenticationHeaderValue*>*& a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::AuthenticationHeaderValue*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_TRYPARSE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* a1, ::System::Net::Http::Headers::AuthenticationHeaderValue*& a2, ::System::Net::Http::Headers::Token& a3)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::AuthenticationHeaderValue*&, ::System::Net::Http::Headers::Token&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_TRYPARSEELEMENT_OFFSET))(a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_TOSTRING_OFFSET))(this);
		}
	};
}
