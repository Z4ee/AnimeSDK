#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int PenButton_TypeDefinitionIndex = 31635;

	enum class PenButton : ::System::Int32
	{
		Tip = 0,
		Eraser = 1,
		BarrelFirst = 2,
		BarrelSecond = 3,
		InRange = 4,
		BarrelThird = 5,
		BarrelFourth = 6,
		Barrel1 = 2,
		Barrel2 = 3,
		Barrel3 = 5,
		Barrel4 = 6,
	};
}
