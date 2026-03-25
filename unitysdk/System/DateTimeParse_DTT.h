#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int DateTimeParse_DTT_TypeDefinitionIndex = 255;

	enum class DateTimeParse_DTT : ::System::Int32
	{
		End = 0,
		NumEnd = 1,
		NumAmpm = 2,
		NumSpace = 3,
		NumDatesep = 4,
		NumTimesep = 5,
		MonthEnd = 6,
		MonthSpace = 7,
		MonthDatesep = 8,
		NumDatesuff = 9,
		NumTimesuff = 10,
		DayOfWeek = 11,
		YearSpace = 12,
		YearDateSep = 13,
		YearEnd = 14,
		TimeZone = 15,
		Era = 16,
		NumUTCTimeMark = 17,
		Unk = 18,
		NumLocalTimeMark = 19,
		Max = 20,
	};
}
