#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int NetworkInterfaceComponent_TypeDefinitionIndex = 2926;

	enum class NetworkInterfaceComponent : ::System::Int32
	{
		IPv4 = 0,
		IPv6 = 1,
	};
}
