#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int StencilOp_TypeDefinitionIndex = 4686;

	enum class StencilOp : ::System::Int32
	{
		Keep = 0,
		Zero = 1,
		Replace = 2,
		IncrementSaturate = 3,
		DecrementSaturate = 4,
		Invert = 5,
		IncrementWrap = 6,
		DecrementWrap = 7,
	};
}
