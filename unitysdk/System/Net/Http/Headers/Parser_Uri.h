#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }

#define SYSTEM_NET_HTTP_HEADERS_PARSER_URI_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1852C560)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int Parser_Uri_TypeDefinitionIndex = 4831;

	class Parser_Uri : public ::System::Object
	{
	public:
		static ::System::Boolean TryParse(::System::String* input, ::System::Uri*& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Uri*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PARSER_URI_TRYPARSE_OFFSET))(input, result);
		}
	};
}
