#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class Lexer; }

#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1ADDD100)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ADDD1A0)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1ADDD020)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1ADDD040)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1ADDD030)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1ADDD050)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1ADDD060)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ADDD640)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1ADDD450)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1ADDD3B0)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADDD010)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int ProductHeaderValue_TypeDefinitionIndex = 3807;

	class ProductHeaderValue : public ::System::Object
	{
	public:
		::System::String* _Version_k__BackingField; // 0x10
		::System::String* _Name_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_Version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_SET_VERSION_OFFSET))(this, a1);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::ProductHeaderValue*>*& a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::ProductHeaderValue*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_TRYPARSE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* a1, ::System::Net::Http::Headers::ProductHeaderValue*& a2, ::System::Net::Http::Headers::Token& a3)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::ProductHeaderValue*&, ::System::Net::Http::Headers::Token&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_TRYPARSEELEMENT_OFFSET))(a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_TOSTRING_OFFSET))(this);
		}
	};
}
