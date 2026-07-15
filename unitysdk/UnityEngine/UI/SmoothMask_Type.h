#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int SmoothMask_Type_TypeDefinitionIndex = 6009;

	enum class SmoothMask_Type : ::System::Int32
	{
		Unused = 0,
		Texture = 1,
		Rectangle = 2,
		Circle = 3,
		CircleEnvelope = 4,
		CircleFit = 5,
	};
}
