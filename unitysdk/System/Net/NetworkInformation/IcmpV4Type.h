#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int IcmpV4Type_TypeDefinitionIndex = 3714;

	enum class IcmpV4Type : ::System::Int32
	{
		ICMP4_ECHO_REPLY = 0,
		ICMP4_DST_UNREACH = 3,
		ICMP4_SOURCE_QUENCH = 4,
		ICMP4_TIME_EXCEEDED = 11,
		ICMP4_PARAM_PROB = 12,
		ICMP4_REDIRECT = 5,
		ICMP4_ECHO_REQUEST = 8,
		ICMP4_ROUTER_ADVERT = 9,
		ICMP4_ROUTER_SOLICIT = 10,
		ICMP4_TIMESTAMP_REQUEST = 13,
		ICMP4_TIMESTAMP_REPLY = 14,
		ICMP4_MASK_REQUEST = 17,
		ICMP4_MASK_REPLY = 18,
	};
}
