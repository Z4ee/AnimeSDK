#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XsdDuration_DurationType_TypeDefinitionIndex = 2233;

	enum class XsdDuration_DurationType : ::System::Int32
	{
		Duration = 0,
		YearMonthDuration = 1,
		DayTimeDuration = 2,
	};
}
