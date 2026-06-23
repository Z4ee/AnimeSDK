#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class Lexer; }
namespace System::Net::Http::Headers { class NameValueHeaderValue; }

#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D494020)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D494130)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x1D493F30)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1D493FD0)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D494220)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1D4942F0)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1D494270)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D493FC0)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D493CE0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int TransferCodingHeaderValue_TypeDefinitionIndex = 26175;

	class TransferCodingHeaderValue : public ::System::Object
	{
	public:
		::System::String* value; // 0x10
		::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* parameters; // 0x18

		::System::Void _ctor(::System::Net::Http::Headers::TransferCodingHeaderValue* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Http::Headers::TransferCodingHeaderValue*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE__CTOR_OFFSET))(this, source);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE__CTOR_1_OFFSET))(this);
		}

		::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* get_Parameters()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_GET_PARAMETERS_OFFSET))(this);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* input, ::System::Int32 minimalCount, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>*& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_TRYPARSE_OFFSET))(input, minimalCount, result);
		}

		static ::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ::System::Net::Http::Headers::TransferCodingHeaderValue*& parsedValue, ::System::Net::Http::Headers::Token& t)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::TransferCodingHeaderValue*&, ::System::Net::Http::Headers::Token&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_TRYPARSEELEMENT_OFFSET))(lexer, parsedValue, t);
		}
	};
}
