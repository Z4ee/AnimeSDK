#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"
#include "unitysdk/System/Net/Http/Headers/TransferCodingHeaderValue.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class Lexer; }

#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGWITHQUALITYHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1D4944A0)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGWITHQUALITYHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1D494420)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGWITHQUALITYHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D494410)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int TransferCodingWithQualityHeaderValue_TypeDefinitionIndex = 26176;

	class TransferCodingWithQualityHeaderValue : public ::System::Net::Http::Headers::TransferCodingHeaderValue
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGWITHQUALITYHEADERVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* input, ::System::Int32 minimalCount, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>*& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGWITHQUALITYHEADERVALUE_TRYPARSE_OFFSET))(input, minimalCount, result);
		}

		static ::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*& parsedValue, ::System::Net::Http::Headers::Token& t)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*&, ::System::Net::Http::Headers::Token&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGWITHQUALITYHEADERVALUE_TRYPARSEELEMENT_OFFSET))(lexer, parsedValue, t);
		}
	};
}
