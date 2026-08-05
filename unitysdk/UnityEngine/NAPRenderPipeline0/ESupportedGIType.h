#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ESupportedGIType_TypeDefinitionIndex = 5857;

	enum class ESupportedGIType : ::System::Int32
	{
		LightMap = 1,
		Kodama = 2,
		Lyra = 4,
		RayTracing = 8,
		SkyLightOnly = 16,
	};
}
