#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::XR
{
	inline static constexpr unsigned int ConnectionChangeType_TypeDefinitionIndex = 25154;

	enum class ConnectionChangeType : ::System::UInt32
	{
		Connected = 0x0,
		Disconnected = 0x1,
		ConfigChange = 0x2,
	};
}
