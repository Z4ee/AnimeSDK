#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchCullingFlags_TypeDefinitionIndex = 6214;

	enum class BatchCullingFlags : ::System::Int32
	{
		None = 0,
		CullLightmappedShadowCasters = 1,
	};
}
