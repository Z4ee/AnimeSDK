#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::AI
{
	inline static constexpr unsigned int ClearFlag_TypeDefinitionIndex = 5675;

	enum class ClearFlag : ::System::Int32
	{
		Agent = 1,
		Obstacle = 2,
		All = 3,
	};
}
