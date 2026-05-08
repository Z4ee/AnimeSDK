#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HEADERS_PARSER_TIMESPANSECONDS_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1B019D10)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int Parser_TimeSpanSeconds_TypeDefinitionIndex = 24766;

	class Parser_TimeSpanSeconds : public ::System::Object
	{
	public:
		static ::System::Boolean TryParse(::System::String* input, ::System::TimeSpan& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PARSER_TIMESPANSECONDS_TRYPARSE_OFFSET))(input, result);
		}
	};
}
