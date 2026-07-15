#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int CreateClipFlags_TypeDefinitionIndex = 36700;

	enum class CreateClipFlags : ::System::Int32
	{
		None = 0,
		OnRoot = 1,
		OnNormal = 2,
		OnLayerChild = 4,
		All = 7,
	};
}
