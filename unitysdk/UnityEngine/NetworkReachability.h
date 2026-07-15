#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int NetworkReachability_TypeDefinitionIndex = 4023;

	enum class NetworkReachability : ::System::Int32
	{
		NotReachable = 0,
		ReachableViaCarrierDataNetwork = 1,
		ReachableViaLocalAreaNetwork = 2,
	};
}
