#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int LinuxArpHardware_TypeDefinitionIndex = 2944;

	enum class LinuxArpHardware : ::System::Int32
	{
		ETHER = 1,
		EETHER = 2,
		PRONET = 4,
		ATM = 19,
		SLIP = 256,
		CSLIP = 257,
		SLIP6 = 258,
		CSLIP6 = 259,
		PPP = 512,
		LOOPBACK = 772,
		FDDI = 774,
		TUNNEL = 768,
		TUNNEL6 = 769,
		SIT = 776,
		IPDDP = 777,
		IPGRE = 778,
		IP6GRE = 823,
	};
}
