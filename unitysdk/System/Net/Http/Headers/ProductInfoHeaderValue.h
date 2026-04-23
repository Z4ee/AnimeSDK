#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class Lexer; }
namespace System::Net::Http::Headers { class ProductHeaderValue; }

#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x19F67BD0)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19F67D10)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0x19F67AF0)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_GET_PRODUCT_OFFSET UNITYSDK_OFFSET(0x19F67B10)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_SET_COMMENT_OFFSET UNITYSDK_OFFSET(0x19F67B00)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_SET_PRODUCT_OFFSET UNITYSDK_OFFSET(0x19F67B20)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x19F67B30)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19F68160)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x19F67F10)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x19F67DB0)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19F67AE0)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19F67A70)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int ProductInfoHeaderValue_TypeDefinitionIndex = 4841;

	class ProductInfoHeaderValue : public ::System::Object
	{
	public:
		::System::String* _Comment_k__BackingField; // 0x10
		::System::Net::Http::Headers::ProductHeaderValue* _Product_k__BackingField; // 0x18

		::System::Void _ctor(::System::Net::Http::Headers::ProductHeaderValue* product)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::Headers::ProductHeaderValue*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE__CTOR_OFFSET))(this, product);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE__CTOR_1_OFFSET))(this);
		}

		::System::String* get_Comment()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_GET_COMMENT_OFFSET))(this);
		}

		::System::Void set_Comment(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_SET_COMMENT_OFFSET))(this, value);
		}

		::System::Net::Http::Headers::ProductHeaderValue* get_Product()
		{
			return ((::System::Net::Http::Headers::ProductHeaderValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_GET_PRODUCT_OFFSET))(this);
		}

		::System::Void set_Product(::System::Net::Http::Headers::ProductHeaderValue* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::Headers::ProductHeaderValue*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_SET_PRODUCT_OFFSET))(this, value);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* input, ::System::Int32 minimalCount, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::ProductInfoHeaderValue*>*& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::ProductInfoHeaderValue*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_TRYPARSE_OFFSET))(input, minimalCount, result);
		}

		static ::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ::System::Net::Http::Headers::ProductInfoHeaderValue*& parsedValue)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::ProductInfoHeaderValue*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_TRYPARSEELEMENT_OFFSET))(lexer, parsedValue);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_TOSTRING_OFFSET))(this);
		}
	};
}
