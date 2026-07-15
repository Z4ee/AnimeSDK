#pragma once
#include "unitysdk/unitysdk.h"

namespace ZXing::PDF417::Internal
{
	inline static constexpr unsigned int Compaction_TypeDefinitionIndex = 6442;

	enum class Compaction : ::System::Int32
	{
		AUTO = 0,
		TEXT = 1,
		BYTE = 2,
		NUMERIC = 3,
	};
}
