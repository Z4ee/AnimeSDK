#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::Interactions
{
	inline static constexpr unsigned int MultiTapInteraction_TapPhase_TypeDefinitionIndex = 29371;

	enum class MultiTapInteraction_TapPhase : ::System::Int32
	{
		None = 0,
		WaitingForNextRelease = 1,
		WaitingForNextPress = 2,
	};
}
