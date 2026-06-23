#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorTickState_TypeDefinitionIndex = 6618;

	enum class AnimatorTickState : ::System::Int32
	{
		NormalTick = 0,
		Idle = 1,
		InterleavedTick = 2,
	};
}
