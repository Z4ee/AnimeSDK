#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class Lexer; }

#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1851FE40)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1851FEF0)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_GET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x1851FD60)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_GET_SCHEME_OFFSET UNITYSDK_OFFSET(0x1851FD80)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_SET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x1851FD70)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_SET_SCHEME_OFFSET UNITYSDK_OFFSET(0x1851FD90)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1851FDA0)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18520790)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x18520190)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_TRYPARSE_1_OFFSET UNITYSDK_OFFSET(0x18520320)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x18520100)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1851FD50)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int AuthenticationHeaderValue_TypeDefinitionIndex = 4789;

	class AuthenticationHeaderValue : public ::System::Object
	{
	public:
		::System::String* _Parameter_k__BackingField; // 0x10
		::System::String* _Scheme_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE__CTOR_OFFSET))(this);
		}

		::System::String* get_Parameter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_GET_PARAMETER_OFFSET))(this);
		}

		::System::Void set_Parameter(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_SET_PARAMETER_OFFSET))(this, value);
		}

		::System::String* get_Scheme()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_GET_SCHEME_OFFSET))(this);
		}

		::System::Void set_Scheme(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_SET_SCHEME_OFFSET))(this, value);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* input, ::System::Net::Http::Headers::AuthenticationHeaderValue*& parsedValue)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Net::Http::Headers::AuthenticationHeaderValue*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_TRYPARSE_OFFSET))(input, parsedValue);
		}

		static ::System::Boolean TryParse_1(::System::String* input, ::System::Int32 minimalCount, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::AuthenticationHeaderValue*>*& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::AuthenticationHeaderValue*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_TRYPARSE_1_OFFSET))(input, minimalCount, result);
		}

		static ::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ::System::Net::Http::Headers::AuthenticationHeaderValue*& parsedValue, ::System::Net::Http::Headers::Token& t)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::AuthenticationHeaderValue*&, ::System::Net::Http::Headers::Token&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_TRYPARSEELEMENT_OFFSET))(lexer, parsedValue, t);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_TOSTRING_OFFSET))(this);
		}
	};
}
