#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int MacNetworkChange_NetworkReachabilityFlags_TypeDefinitionIndex = 3804;

	enum class MacNetworkChange_NetworkReachabilityFlags : ::System::Int32
	{
		None = 0,
		TransientConnection = 1,
		Reachable = 2,
		ConnectionRequired = 4,
		ConnectionOnTraffic = 8,
		InterventionRequired = 16,
		ConnectionOnDemand = 32,
		IsLocalAddress = 65536,
		IsDirect = 131072,
		IsWWAN = 262144,
		ConnectionAutomatic = 8,
	};
}
