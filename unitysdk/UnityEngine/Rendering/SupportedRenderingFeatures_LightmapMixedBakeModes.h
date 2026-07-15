#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SupportedRenderingFeatures_LightmapMixedBakeModes_TypeDefinitionIndex = 4763;

	enum class SupportedRenderingFeatures_LightmapMixedBakeModes : ::System::Int32
	{
		None = 0,
		IndirectOnly = 1,
		Subtractive = 2,
		Shadowmask = 4,
	};
}
