#pragma once
#include "unitysdk/unitysdk.h"

namespace VLB
{
	inline static constexpr unsigned int RenderingMode_TypeDefinitionIndex = 49417;

	enum class RenderingMode : ::System::Int32
	{
		MultiPass = 0,
		SinglePass = 1,
		GPUInstancing = 2,
	};
}
