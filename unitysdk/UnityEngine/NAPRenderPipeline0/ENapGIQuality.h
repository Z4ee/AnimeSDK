#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ENapGIQuality_TypeDefinitionIndex = 5856;

	enum class ENapGIQuality : ::System::Int32
	{
		JustSkyLight = 0,
		KodamaAndLightMap = 2,
		Lyra = 3,
		Rtx = 4,
	};
}
