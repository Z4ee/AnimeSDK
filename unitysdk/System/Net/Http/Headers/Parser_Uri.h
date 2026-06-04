#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }

#define SYSTEM_NET_HTTP_HEADERS_PARSER_URI_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1ADDCF70)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int Parser_Uri_TypeDefinitionIndex = 3806;

	class Parser_Uri : public ::System::Object
	{
	public:
		static ::System::Boolean TryParse(::System::String* a1, ::System::Uri*& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Uri*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PARSER_URI_TRYPARSE_OFFSET))(a1, a2);
		}
	};
}
