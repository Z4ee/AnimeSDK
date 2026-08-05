#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapLightType_TypeDefinitionIndex = 5854;

	enum class NapLightType : ::System::Int32
	{
		NotSet = -1,
		Spot = 0,
		Directional = 1,
		Point = 2,
		Area = 3,
		Rectangle = 3,
		Disc = 4,
		DirectionalForUI = 5,
		FogProxy = 6,
	};
}
