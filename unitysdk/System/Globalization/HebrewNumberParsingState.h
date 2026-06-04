#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Globalization
{
	inline static constexpr unsigned int HebrewNumberParsingState_TypeDefinitionIndex = 751;

	enum class HebrewNumberParsingState : ::System::Int32
	{
		InvalidHebrewNumber = 0,
		NotHebrewDigit = 1,
		FoundEndOfHebrewNumber = 2,
		ContinueParsing = 3,
	};
}
