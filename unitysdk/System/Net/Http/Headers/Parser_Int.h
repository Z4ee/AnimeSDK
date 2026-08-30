#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HEADERS_PARSER_INT_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1E78ECC0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int Parser_Int_TypeDefinitionIndex = 3813;

	class Parser_Int : public ::System::Object
	{
	public:
		static ::System::Boolean TryParse(::System::String* a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PARSER_INT_TRYPARSE_OFFSET))(a1, a2);
		}
	};
}
