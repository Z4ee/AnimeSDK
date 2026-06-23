#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HEADERS_PARSER_INT_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1D4903E0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int Parser_Int_TypeDefinitionIndex = 26162;

	class Parser_Int : public ::System::Object
	{
	public:
		static ::System::Boolean TryParse(::System::String* input, ::System::Int32& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PARSER_INT_TRYPARSE_OFFSET))(input, result);
		}
	};
}
