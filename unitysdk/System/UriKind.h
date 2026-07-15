#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int UriKind_TypeDefinitionIndex = 2462;

	enum class UriKind : ::System::Int32
	{
		RelativeOrAbsolute = 0,
		Absolute = 1,
		Relative = 2,
	};
}
