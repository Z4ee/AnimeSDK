#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchCullingFlags_TypeDefinitionIndex = 6210;

	enum class BatchCullingFlags : ::System::Int32
	{
		None = 0,
		CullLightmappedShadowCasters = 1,
	};
}
