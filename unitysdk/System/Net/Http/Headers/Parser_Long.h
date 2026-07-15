#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HEADERS_PARSER_LONG_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1CA9C0E0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int Parser_Long_TypeDefinitionIndex = 3806;

	class Parser_Long : public ::System::Object
	{
	public:
		static ::System::Boolean TryParse(::System::String* a1, ::System::Int64& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int64&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PARSER_LONG_TRYPARSE_OFFSET))(a1, a2);
		}
	};
}
