#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchCullingProjectionType_TypeDefinitionIndex = 6212;

	enum class BatchCullingProjectionType : ::System::Int32
	{
		Unknown = 0,
		Perspective = 1,
		Orthographic = 2,
	};
}
