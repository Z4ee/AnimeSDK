#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int PlayerNotifications_TypeDefinitionIndex = 29054;

	enum class PlayerNotifications : ::System::Int32
	{
		SendMessages = 0,
		BroadcastMessages = 1,
		InvokeUnityEvents = 2,
		InvokeCSharpEvents = 3,
	};
}
