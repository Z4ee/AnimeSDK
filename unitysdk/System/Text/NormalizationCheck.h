#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Text
{
	inline static constexpr unsigned int NormalizationCheck_TypeDefinitionIndex = 510;

	enum class NormalizationCheck : ::System::Int32
	{
		Yes = 0,
		No = 1,
		Maybe = 2,
	};
}
