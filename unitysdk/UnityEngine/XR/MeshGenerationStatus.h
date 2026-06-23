#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::XR
{
	inline static constexpr unsigned int MeshGenerationStatus_TypeDefinitionIndex = 27655;

	enum class MeshGenerationStatus : ::System::Int32
	{
		Success = 0,
		InvalidMeshId = 1,
		GenerationAlreadyInProgress = 2,
		Canceled = 3,
		UnknownError = 4,
	};
}
