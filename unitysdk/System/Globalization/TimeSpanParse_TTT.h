#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Globalization
{
	inline static constexpr unsigned int TimeSpanParse_TTT_TypeDefinitionIndex = 773;

	enum class TimeSpanParse_TTT : ::System::Int32
	{
		None = 0,
		End = 1,
		Num = 2,
		Sep = 3,
		NumOverflow = 4,
	};
}
