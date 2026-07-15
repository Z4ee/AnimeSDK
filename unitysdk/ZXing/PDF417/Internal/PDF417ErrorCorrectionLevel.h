#pragma once
#include "unitysdk/unitysdk.h"

namespace ZXing::PDF417::Internal
{
	inline static constexpr unsigned int PDF417ErrorCorrectionLevel_TypeDefinitionIndex = 6477;

	enum class PDF417ErrorCorrectionLevel : ::System::Int32
	{
		L0 = 0,
		L1 = 1,
		L2 = 2,
		L3 = 3,
		L4 = 4,
		L5 = 5,
		L6 = 6,
		L7 = 7,
		L8 = 8,
	};
}
