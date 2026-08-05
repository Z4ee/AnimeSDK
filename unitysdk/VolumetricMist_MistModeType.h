#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int VolumetricMist_MistModeType_TypeDefinitionIndex = 27340;

enum class VolumetricMist_MistModeType : ::System::Int32
{
	AroundSurface = 2,
	WithNoise = 1,
	Simple = 0,
};
