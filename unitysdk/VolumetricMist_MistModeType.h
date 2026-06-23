#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int VolumetricMist_MistModeType_TypeDefinitionIndex = 26811;

enum class VolumetricMist_MistModeType : ::System::Int32
{
	WithNoise = 1,
	AroundSurface = 2,
	Simple = 0,
};
