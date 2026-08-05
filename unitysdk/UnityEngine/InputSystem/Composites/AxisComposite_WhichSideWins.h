#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::Composites
{
	inline static constexpr unsigned int AxisComposite_WhichSideWins_TypeDefinitionIndex = 32712;

	enum class AxisComposite_WhichSideWins : ::System::Int32
	{
		Neither = 0,
		Positive = 1,
		Negative = 2,
	};
}
