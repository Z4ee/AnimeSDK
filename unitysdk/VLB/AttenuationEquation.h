#pragma once
#include "unitysdk/unitysdk.h"

namespace VLB
{
	inline static constexpr unsigned int AttenuationEquation_TypeDefinitionIndex = 45600;

	enum class AttenuationEquation : ::System::Int32
	{
		Linear = 0,
		Quadratic = 1,
		Blend = 2,
	};
}
