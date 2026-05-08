#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UIElements::UIR::Implementation
{
	inline static constexpr unsigned int ClipMethod_TypeDefinitionIndex = 25116;

	enum class ClipMethod : ::System::Int32
	{
		Undetermined = 0,
		NotClipped = 1,
		Scissor = 2,
		ShaderDiscard = 3,
		Stencil = 4,
	};
}
