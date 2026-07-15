#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Selectable_Transition_TypeDefinitionIndex = 6000;

	enum class Selectable_Transition : ::System::Int32
	{
		None = 0,
		ColorTint = 1,
		SpriteSwap = 2,
		Animation = 3,
	};
}
