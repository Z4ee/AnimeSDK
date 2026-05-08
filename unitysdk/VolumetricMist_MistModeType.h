#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int VolumetricMist_MistModeType_TypeDefinitionIndex = 29516;

enum class VolumetricMist_MistModeType : ::System::Int32
{
	Simple = 0,
	WithNoise = 1,
	AroundSurface = 2,
};
