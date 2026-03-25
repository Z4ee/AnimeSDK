#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int ParseFailureKind_TypeDefinitionIndex = 263;

	enum class ParseFailureKind : ::System::Int32
	{
		None = 0,
		ArgumentNull = 1,
		Format = 2,
		FormatWithParameter = 3,
		FormatBadDateTimeCalendar = 4,
	};
}
