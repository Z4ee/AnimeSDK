#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::Users
{
	inline static constexpr unsigned int InputUserPairingOptions_TypeDefinitionIndex = 31760;

	enum class InputUserPairingOptions : ::System::Int32
	{
		None = 0,
		ForcePlatformUserAccountSelection = 1,
		ForceNoPlatformUserAccountSelection = 2,
		UnpairCurrentDevicesFromUser = 8,
	};
}
