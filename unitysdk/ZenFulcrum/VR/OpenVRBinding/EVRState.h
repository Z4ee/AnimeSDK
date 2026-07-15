#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int EVRState_TypeDefinitionIndex = 37068;

	enum class EVRState : ::System::Int32
	{
		Undefined = -1,
		Off = 0,
		Searching = 1,
		Searching_Alert = 2,
		Ready = 3,
		Ready_Alert = 4,
		NotReady = 5,
		Standby = 6,
		Ready_Alert_Low = 7,
	};
}
