#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HEADERS_PARSER_EMAILADDRESS_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1CA9BF10)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int Parser_EmailAddress_TypeDefinitionIndex = 3803;

	class Parser_EmailAddress : public ::System::Object
	{
	public:
		static ::System::Boolean TryParse(::System::String* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PARSER_EMAILADDRESS_TRYPARSE_OFFSET))(a1, a2);
		}
	};
}
