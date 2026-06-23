#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchDrawCommandFlags_TypeDefinitionIndex = 6208;

	enum class BatchDrawCommandFlags : ::System::Int32
	{
		None = 0,
		FlipWinding = 1,
		HasMotion = 2,
		IsLightMapped = 4,
		HasSortingPosition = 8,
		LODCrossFade = 16,
	};
}
