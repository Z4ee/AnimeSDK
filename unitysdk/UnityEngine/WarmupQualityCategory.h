#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int WarmupQualityCategory_TypeDefinitionIndex = 4369;

	enum class WarmupQualityCategory : ::System::Int32
	{
		UnTagged = 0,
		ShadowQuality = 1,
		LightQuality = 2,
		CharacterQuality = 3,
		EnvDetailQuality = 4,
		ReflectionQuality = 5,
		SFXQuality = 6,
		Num = 7,
	};
}
