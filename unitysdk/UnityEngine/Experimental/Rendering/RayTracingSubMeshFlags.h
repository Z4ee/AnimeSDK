#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int RayTracingSubMeshFlags_TypeDefinitionIndex = 6336;

	enum class RayTracingSubMeshFlags : ::System::Int32
	{
		Disabled = 0,
		Enabled = 1,
		ClosestHitOnly = 2,
		UniqueAnyHitCalls = 4,
	};
}
