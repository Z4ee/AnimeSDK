#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_MIBICMPSTATS.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32_MIBICMPINFO_TypeDefinitionIndex = 3782;

	struct alignas(4) Win32_MIBICMPINFO
	{
		::System::Net::NetworkInformation::Win32_MIBICMPSTATS InStats; // 0x10
		::System::Net::NetworkInformation::Win32_MIBICMPSTATS OutStats; // 0x44
	};
}
