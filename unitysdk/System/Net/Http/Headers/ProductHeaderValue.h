#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class Lexer; }

#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D490910)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D4909A0)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1D490870)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D490CD0)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1D490B60)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1D490AE0)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D490860)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int ProductHeaderValue_TypeDefinitionIndex = 26168;

	class ProductHeaderValue : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::String* _Version_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE__CTOR_OFFSET))(this);
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
