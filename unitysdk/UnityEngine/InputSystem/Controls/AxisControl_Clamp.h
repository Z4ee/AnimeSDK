#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int AxisControl_Clamp_TypeDefinitionIndex = 32008;

	enum class AxisControl_Clamp : ::System::Int32
	{
		None = 0,
		BeforeNormalize = 1,
		AfterNormalize = 2,
		ToConstantBeforeNormalize = 3,
	};
}
