#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/MediaTypeHeaderValue.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class Lexer; }

#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEWITHQUALITYHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1852AEF0)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEWITHQUALITYHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1852B020)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEWITHQUALITYHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1852AEE0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int MediaTypeWithQualityHeaderValue_TypeDefinitionIndex = 4817;

	class MediaTypeWithQualityHeaderValue : public ::System::Net::Http::Headers::MediaTypeHeaderValue
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEWITHQUALITYHEADERVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*& parsedValue, ::System::Net::Http::Headers::Token& t)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*&, ::System::Net::Http::Headers::Token&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEWITHQUALITYHEADERVALUE_TRYPARSEELEMENT_OFFSET))(lexer, parsedValue, t);
		}

		static ::System::Boolean TryParse(::System::String* input, ::System::Int32 minimalCount, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>*& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEWITHQUALITYHEADERVALUE_TRYPARSE_OFFSET))(input, minimalCount, result);
		}
	};
}
