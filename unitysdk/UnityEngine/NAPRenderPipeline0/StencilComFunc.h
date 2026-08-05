#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int StencilComFunc_TypeDefinitionIndex = 5860;

	enum class StencilComFunc : ::System::Int32
	{
		Disabled = 0,
		Never = 1,
		Less = 2,
		Equal = 3,
		LessEqual = 4,
		Greater = 5,
		NotEqual = 6,
		GreaterEqual = 7,
		Always = 8,
	};
}
