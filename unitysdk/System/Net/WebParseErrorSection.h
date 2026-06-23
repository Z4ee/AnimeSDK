#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int WebParseErrorSection_TypeDefinitionIndex = 3368;

	enum class WebParseErrorSection : ::System::Int32
	{
		Generic = 0,
		ResponseHeader = 1,
		ResponseStatusLine = 2,
		ResponseBody = 3,
	};
}
