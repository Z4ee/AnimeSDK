#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::Interactions
{
	inline static constexpr unsigned int PressBehavior_TypeDefinitionIndex = 29373;

	enum class PressBehavior : ::System::Int32
	{
		PressOnly = 0,
		ReleaseOnly = 1,
		PressAndRelease = 2,
	};
}
