#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/Win32LengthFlagsUnion.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_SOCKET_ADDRESS.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32_IP_ADAPTER_WINS_SERVER_ADDRESS_TypeDefinitionIndex = 3846;

	struct alignas(8) Win32_IP_ADAPTER_WINS_SERVER_ADDRESS
	{
		::System::Net::NetworkInformation::Win32LengthFlagsUnion LengthFlags; // 0x10
		::System::IntPtr Next; // 0x18
		::System::Net::NetworkInformation::Win32_SOCKET_ADDRESS Address; // 0x20
	};
}
