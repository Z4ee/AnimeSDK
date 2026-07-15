#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class Lexer; }
namespace System::Net::Http::Headers { class NameValueHeaderValue; }

#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CAA01A0)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CAA02C0)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x1CAA00F0)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1CAA0140)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1CAA0150)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CAA03B0)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1CAA0480)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1CAA03E0)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CAA0130)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA9FE70)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int TransferCodingHeaderValue_TypeDefinitionIndex = 3818;

	class TransferCodingHeaderValue : public ::System::Object
	{
	public:
		::System::String* value; // 0x10
		::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* parameters; // 0x18

		::System::Void _ctor(::System::Net::Http::Headers::TransferCodingHeaderValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::Headers::TransferCodingHeaderValue*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE__CTOR_1_OFFSET))(this);
		}

		::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* get_Parameters()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_GET_PARAMETERS_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_GET_VALUE_OFFSET))(this);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>*& a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_TRYPARSE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* a1, ::System::Net::Http::Headers::TransferCodingHeaderValue*& a2, ::System::Net::Http::Headers::Token& a3)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::TransferCodingHeaderValue*&, ::System::Net::Http::Headers::Token&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_TRYPARSEELEMENT_OFFSET))(a1, a2, a3);
		}
	};
}
