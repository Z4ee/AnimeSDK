#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class Lexer; }

#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x19F67540)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19F675D0)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19F67460)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x19F67480)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x19F67470)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x19F67490)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x19F674A0)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19F67A50)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x19F67860)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x19F677E0)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19F67450)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int ProductHeaderValue_TypeDefinitionIndex = 4840;

	class ProductHeaderValue : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::String* _Version_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_Version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_SET_VERSION_OFFSET))(this, value);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* input, ::System::Int32 minimalCount, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::ProductHeaderValue*>*& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::ProductHeaderValue*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_TRYPARSE_OFFSET))(input, minimalCount, result);
		}

		static ::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ::System::Net::Http::Headers::ProductHeaderValue*& parsedValue, ::System::Net::Http::Headers::Token& t)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::ProductHeaderValue*&, ::System::Net::Http::Headers::Token&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_TRYPARSEELEMENT_OFFSET))(lexer, parsedValue, t);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_TOSTRING_OFFSET))(this);
		}
	};
}
