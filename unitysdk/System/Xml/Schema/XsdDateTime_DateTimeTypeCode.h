#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XsdDateTime_DateTimeTypeCode_TypeDefinitionIndex = 2228;

	enum class XsdDateTime_DateTimeTypeCode : ::System::Int32
	{
		DateTime = 0,
		Time = 1,
		Date = 2,
		GYearMonth = 3,
		GYear = 4,
		GMonthDay = 5,
		GDay = 6,
		GMonth = 7,
		XdrDateTime = 8,
	};
}
