#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/MediaTypeHeaderValue.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class Lexer; }

#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEWITHQUALITYHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1E78D940)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEWITHQUALITYHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1E78DA70)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEWITHQUALITYHEADERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E78D930)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int MediaTypeWithQualityHeaderValue_TypeDefinitionIndex = 3804;

	class MediaTypeWithQualityHeaderValue : public ::System::Net::Http::Headers::MediaTypeHeaderValue
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEWITHQUALITYHEADERVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* a1, ::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*& a2, ::System::Net::Http::Headers::Token& a3)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*&, ::System::Net::Http::Headers::Token&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEWITHQUALITYHEADERVALUE_TRYPARSEELEMENT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>*& a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEWITHQUALITYHEADERVALUE_TRYPARSE_OFFSET))(a1, a2, a3);
		}
	};
}
