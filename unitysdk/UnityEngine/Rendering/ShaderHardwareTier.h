#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShaderHardwareTier_TypeDefinitionIndex = 6153;

	enum class ShaderHardwareTier : ::System::Int32
	{
		Tier1 = 0,
		Tier2 = 1,
		Tier3 = 2,
	};
}
