#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ForceMode_TypeDefinitionIndex = 5294;

	enum class ForceMode : ::System::Int32
	{
		Force = 0,
		Acceleration = 5,
		Impulse = 1,
		VelocityChange = 2,
	};
}
