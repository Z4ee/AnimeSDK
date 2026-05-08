#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering::Universal
{
	inline static constexpr unsigned int RenderQueueType_TypeDefinitionIndex = 29730;

	enum class RenderQueueType : ::System::Int32
	{
		Opaque = 0,
		Transparent = 1,
	};
}
