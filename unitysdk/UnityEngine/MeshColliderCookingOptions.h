#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int MeshColliderCookingOptions_TypeDefinitionIndex = 5295;

	enum class MeshColliderCookingOptions : ::System::Int32
	{
		None = 0,
		InflateConvexMesh = 1,
		CookForFasterSimulation = 2,
		EnableMeshCleaning = 4,
		WeldColocatedVertices = 8,
		UseFastMidphase = 16,
	};
}
