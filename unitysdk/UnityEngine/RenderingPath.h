#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int RenderingPath_TypeDefinitionIndex = 3957;

	enum class RenderingPath : ::System::Int32
	{
		UsePlayerSettings = -1,
		VertexLit = 0,
		Forward = 1,
		DeferredLighting = 2,
		DeferredShading = 3,
	};
}
