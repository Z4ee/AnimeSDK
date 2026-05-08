#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::Users
{
	inline static constexpr unsigned int InputUser_UserFlags_TypeDefinitionIndex = 29096;

	enum class InputUser_UserFlags : ::System::Int32
	{
		BindToAllDevices = 1,
		UserAccountSelectionInProgress = 2,
	};
}
