#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int MotionVectorGenerationMode_TypeDefinitionIndex = 3989;

	enum class MotionVectorGenerationMode : ::System::Int32
	{
		Camera = 0,
		Object = 1,
		ForceNoMotion = 2,
	};
}
