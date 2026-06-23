#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SynchronisationStage_TypeDefinitionIndex = 6151;

	enum class SynchronisationStage : ::System::Int32
	{
		VertexProcessing = 0,
		PixelProcessing = 1,
	};
}
