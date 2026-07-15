#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int RotationOrder_TypeDefinitionIndex = 4394;

	enum class RotationOrder : ::System::Int32
	{
		OrderXYZ = 0,
		OrderXZY = 1,
		OrderYZX = 2,
		OrderYXZ = 3,
		OrderZXY = 4,
		OrderZYX = 5,
	};
}
