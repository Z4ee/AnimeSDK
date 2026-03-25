#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int DateTimeKind_TypeDefinitionIndex = 225;

	enum class DateTimeKind : ::System::Int32
	{
		Unspecified = 0,
		Utc = 1,
		Local = 2,
	};
}
