#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int RigidbodySleepMode2D_TypeDefinitionIndex = 5273;

	enum class RigidbodySleepMode2D : ::System::Int32
	{
		NeverSleep = 0,
		StartAwake = 1,
		StartAsleep = 2,
	};
}
