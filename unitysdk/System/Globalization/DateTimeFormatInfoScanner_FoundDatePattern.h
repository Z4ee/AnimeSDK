#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Globalization
{
	inline static constexpr unsigned int DateTimeFormatInfoScanner_FoundDatePattern_TypeDefinitionIndex = 747;

	enum class DateTimeFormatInfoScanner_FoundDatePattern : ::System::Int32
	{
		None = 0,
		FoundYearPatternFlag = 1,
		FoundMonthPatternFlag = 2,
		FoundDayPatternFlag = 4,
		FoundYMDPatternFlag = 7,
	};
}
