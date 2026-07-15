#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RuntimeAtlasManager_RuntimeAtlas_Status_TypeDefinitionIndex = 5977;

	enum class RuntimeAtlasManager_RuntimeAtlas_Status : ::System::Int32
	{
		Free = 0,
		Root = 1,
		Leaf = 2,
	};
}
