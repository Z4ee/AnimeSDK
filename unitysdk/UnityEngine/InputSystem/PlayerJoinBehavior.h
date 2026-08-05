#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int PlayerJoinBehavior_TypeDefinitionIndex = 32329;

	enum class PlayerJoinBehavior : ::System::Int32
	{
		JoinPlayersWhenButtonIsPressed = 0,
		JoinPlayersWhenJoinActionIsTriggered = 1,
		JoinPlayersManually = 2,
	};
}
