#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CommandBufferExecutionFlags_TypeDefinitionIndex = 4708;

	enum class CommandBufferExecutionFlags : ::System::Int32
	{
		None = 0,
		AsyncCompute = 2,
	};
}
