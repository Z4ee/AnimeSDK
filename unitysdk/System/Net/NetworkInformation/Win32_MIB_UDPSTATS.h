#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32_MIB_UDPSTATS_TypeDefinitionIndex = 3831;

	struct alignas(4) Win32_MIB_UDPSTATS
	{
		::System::UInt32 InDatagrams; // 0x10
		::System::UInt32 NoPorts; // 0x14
		::System::UInt32 InErrors; // 0x18
		::System::UInt32 OutDatagrams; // 0x1C
		::System::Int32 NumAddrs; // 0x20
	};
}
