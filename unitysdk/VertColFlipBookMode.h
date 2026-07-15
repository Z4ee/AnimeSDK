#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int VertColFlipBookMode_TypeDefinitionIndex = 45336;

enum class VertColFlipBookMode : ::System::Int32
{
	SixChannels4Bit = 0,
	LowThreeChannels8Bit = 1,
	HighThreeChannels8Bit = 2,
};
