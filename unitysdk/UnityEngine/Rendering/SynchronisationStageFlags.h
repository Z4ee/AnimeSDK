#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SynchronisationStageFlags_TypeDefinitionIndex = 6199;

	enum class SynchronisationStageFlags : ::System::Int32
	{
		TopOfPipe = 0,
		VertexProcessing = 1,
		PixelProcessing = 2,
		ComputeProcessing = 4,
		AllGPUOperations = 7,
	};
}
