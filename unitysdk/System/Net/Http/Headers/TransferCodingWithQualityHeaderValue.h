#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"
#include "unitysdk/System/Net/Http/Headers/TransferCodingHeaderValue.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class Lexer; }

#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGWITHQUALITYHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1E7932D0)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGWITHQUALITYHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1E793230)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGWITHQUALITYHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E793220)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int TransferCodingWithQualityHeaderValue_TypeDefinitionIndex = 3827;

	class TransferCodingWithQualityHeaderValue : public ::System::Net::Http::Headers::TransferCodingHeaderValue
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGWITHQUALITYHEADERVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>*& a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGWITHQUALITYHEADERVALUE_TRYPARSE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* a1, ::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*& a2, ::System::Net::Http::Headers::Token& a3)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*&, ::System::Net::Http::Headers::Token&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGWITHQUALITYHEADERVALUE_TRYPARSEELEMENT_OFFSET))(a1, a2, a3);
		}
	};
}
