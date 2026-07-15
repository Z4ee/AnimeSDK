#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int Camera_GateFitMode_TypeDefinitionIndex = 4032;

	enum class Camera_GateFitMode : ::System::Int32
	{
		Vertical = 1,
		Horizontal = 2,
		Fill = 3,
		Overscan = 4,
		None = 0,
	};
}
