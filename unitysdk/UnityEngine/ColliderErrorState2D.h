#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ColliderErrorState2D_TypeDefinitionIndex = 18786;

	enum class ColliderErrorState2D : ::System::Int32
	{
		None = 0,
		NoShapes = 1,
		RemovedShapes = 2,
	};
}
