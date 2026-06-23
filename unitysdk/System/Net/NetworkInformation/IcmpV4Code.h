#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int IcmpV4Code_TypeDefinitionIndex = 3715;

	enum class IcmpV4Code : ::System::Int32
	{
		ICMP4_UNREACH_NET = 0,
		ICMP4_UNREACH_HOST = 1,
		ICMP4_UNREACH_PROTOCOL = 2,
		ICMP4_UNREACH_PORT = 3,
		ICMP4_UNREACH_FRAG_NEEDED = 4,
		ICMP4_UNREACH_SOURCEROUTE_FAILED = 5,
		ICMP4_UNREACH_NET_UNKNOWN = 6,
		ICMP4_UNREACH_HOST_UNKNOWN = 7,
		ICMP4_UNREACH_ISOLATED = 8,
		ICMP4_UNREACH_NET_ADMIN = 9,
		ICMP4_UNREACH_HOST_ADMIN = 10,
		ICMP4_UNREACH_NET_TOS = 11,
		ICMP4_UNREACH_HOST_TOS = 12,
		ICMP4_UNREACH_ADMIN = 13,
	};
}
