#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpCompletionOption_TypeDefinitionIndex = 24711;

	enum class HttpCompletionOption : ::System::Int32
	{
		ResponseContentRead = 0,
		ResponseHeadersRead = 1,
	};
}
