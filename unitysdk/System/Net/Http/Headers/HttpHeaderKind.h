#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int HttpHeaderKind_TypeDefinitionIndex = 4812;

	enum class HttpHeaderKind : ::System::Int32
	{
		None = 0,
		Request = 1,
		Response = 2,
		Content = 4,
	};
}
