#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShadowCastingMode_TypeDefinitionIndex = 4693;

	enum class ShadowCastingMode : ::System::Int32
	{
		Off = 0,
		On = 1,
		TwoSided = 2,
		ShadowsOnly = 3,
	};
}
