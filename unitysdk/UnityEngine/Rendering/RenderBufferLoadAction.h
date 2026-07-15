#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderBufferLoadAction_TypeDefinitionIndex = 4679;

	enum class RenderBufferLoadAction : ::System::Int32
	{
		Load = 0,
		Clear = 1,
		DontCare = 2,
	};
}
