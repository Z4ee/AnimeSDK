#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int DateTimeParse_TM_TypeDefinitionIndex = 256;

	enum class DateTimeParse_TM : ::System::Int32
	{
		NotSet = -1,
		AM = 0,
		PM = 1,
	};
}
