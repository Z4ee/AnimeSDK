#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int UriFormat_TypeDefinitionIndex = 2464;

	enum class UriFormat : ::System::Int32
	{
		UriEscaped = 1,
		Unescaped = 2,
		SafeUnescaped = 3,
	};
}
