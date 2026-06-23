#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_MIBICMPSTATS_EX.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32_MIB_ICMP_EX_TypeDefinitionIndex = 3787;

	struct alignas(8) Win32_MIB_ICMP_EX
	{
		::System::Net::NetworkInformation::Win32_MIBICMPSTATS_EX InStats; // 0x10
		::System::Net::NetworkInformation::Win32_MIBICMPSTATS_EX OutStats; // 0x20
	};
}
