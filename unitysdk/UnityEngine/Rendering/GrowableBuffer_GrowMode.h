#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GrowableBuffer_GrowMode_TypeDefinitionIndex = 35566;

	enum class GrowableBuffer_GrowMode : ::System::Int32
	{
		Fixed = 0,
		DoubleOnGrow = 1,
	};
}
