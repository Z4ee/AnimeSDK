#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/in6_addr.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int sockaddr_in6_TypeDefinitionIndex = 2941;

	struct alignas(8) sockaddr_in6
	{
		::System::UInt16 sin6_family; // 0x10
		::System::UInt16 sin6_port; // 0x12
		::System::UInt32 sin6_flowinfo; // 0x14
		::System::Net::NetworkInformation::in6_addr sin6_addr; // 0x18
		::System::UInt32 sin6_scope_id; // 0x20
	};
}
