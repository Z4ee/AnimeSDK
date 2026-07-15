#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int MacOsArpHardware_TypeDefinitionIndex = 2945;

	enum class MacOsArpHardware : ::System::Int32
	{
		ETHER = 6,
		ATM = 37,
		SLIP = 28,
		PPP = 23,
		LOOPBACK = 24,
		FDDI = 15,
	};
}
