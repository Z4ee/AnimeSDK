#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/Token.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Http::Headers { class Lexer; }
namespace System::Net::Http::Headers { template <typename T> class ElementTryParser_1; }

#define SYSTEM_NET_HTTP_HEADERS_COLLECTIONPARSER_TRYPARSESTRINGELEMENT_OFFSET UNITYSDK_OFFSET(0x1E7D88A0)
#define SYSTEM_NET_HTTP_HEADERS_COLLECTIONPARSER_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1E7D8800)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int CollectionParser_TypeDefinitionIndex = 3780;

	class CollectionParser : public ::System::Object
	{
	public:
		static ::System::Boolean TryParse(::System::String* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::String*>*& a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_COLLECTIONPARSER_TRYPARSE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryParseStringElement(::System::Net::Http::Headers::Lexer* a1, ::System::String*& a2, ::System::Net::Http::Headers::Token& a3)
		{
			return ((::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::String*&, ::System::Net::Http::Headers::Token&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_COLLECTIONPARSER_TRYPARSESTRINGELEMENT_OFFSET))(a1, a2, a3);
		}
	};
}
