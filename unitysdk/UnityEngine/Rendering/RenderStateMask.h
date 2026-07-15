#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderStateMask_TypeDefinitionIndex = 4752;

	enum class RenderStateMask : ::System::Int32
	{
		Nothing = 0,
		Blend = 1,
		Raster = 2,
		Depth = 4,
		Stencil = 8,
		Everything = 15,
	};
}
