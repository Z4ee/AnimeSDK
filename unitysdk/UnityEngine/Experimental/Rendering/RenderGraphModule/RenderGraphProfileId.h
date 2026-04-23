#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphProfileId_TypeDefinitionIndex = 33370;

	enum class RenderGraphProfileId : ::System::Int32
	{
		RenderGraphClear = 0,
		RenderGraphClearDebug = 1,
	};
}
