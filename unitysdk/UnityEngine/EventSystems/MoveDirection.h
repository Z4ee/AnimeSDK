#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int MoveDirection_TypeDefinitionIndex = 6108;

	enum class MoveDirection : ::System::Int32
	{
		Left = 0,
		Up = 1,
		Right = 2,
		Down = 3,
		None = 4,
	};
}
