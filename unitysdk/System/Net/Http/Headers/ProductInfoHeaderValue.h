#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class Lexer; }
namespace System::Net::Http::Headers { class ProductHeaderValue; }

#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1ADDD7C0)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ADDD910)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0x1ADDD6E0)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_GET_PRODUCT_OFFSET UNITYSDK_OFFSET(0x1ADDD700)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_SET_COMMENT_OFFSET UNITYSDK_OFFSET(0x1ADDD6F0)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_SET_PRODUCT_OFFSET UNITYSDK_OFFSET(0x1ADDD710)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1ADDD720)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ADDDDC0)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1ADDDB70)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1ADDD9B0)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ADDD6D0)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADDD660)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int ProductInfoHeaderValue_TypeDefinitionIndex = 3808;

	class ProductInfoHeaderValue : public ::System::Object
	{
	public:
		::System::String* _Comment_k__BackingField; // 0x10
		::System::Net::Http::Headers::ProductHeaderValue* _Product_k__BackingField; // 0x18

		::System::Void _ctor(::System::Net::Http::Headers::ProductHeaderValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::Headers::ProductHeaderValue*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE__CTOR_1_OFFSET))(this);
		}

		::System::String* get_Comment()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_GET_COMMENT_OFFSET))(this);
		}

		::System::Void set_Comment(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_SET_COMMENT_OFFSET))(this, a1);
		}

		::System::Net::Http::Headers::ProductHeaderValue* get_Product()
		{
			return ((::System::Net::Http::Headers::ProductHeaderValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_GET_PRODUCT_OFFSET))(this);
		}

		::System::Void set_Product(::System::Net::Http::Headers::ProductHeaderValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::Headers::ProductHeaderValue*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_SET_PRODUCT_OFFSET))(this, a1);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::ProductInfoHeaderValue*>*& a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::ProductInfoHeaderValue*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_TRYPARSE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* a1, ::System::Net::Http::Headers::ProductInfoHeaderValue*& a2)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::ProductInfoHeaderValue*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_TRYPARSEELEMENT_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_TOSTRING_OFFSET))(this);
		}
	};
}
