#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InitiateUserAccountPairingCommand_Result_TypeDefinitionIndex = 31849;

	enum class InitiateUserAccountPairingCommand_Result : ::System::Int32
	{
		SuccessfullyInitiated = 1,
		ErrorNotSupported = -1,
		ErrorAlreadyInProgress = -2,
	};
}
