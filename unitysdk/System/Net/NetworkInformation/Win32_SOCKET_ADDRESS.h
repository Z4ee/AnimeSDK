#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32_SOCKET_ADDRESS_TypeDefinitionIndex = 2962;

	struct alignas(8) Win32_SOCKET_ADDRESS
	{
		::System::IntPtr Sockaddr; // 0x10
		::System::Int32 SockaddrLength; // 0x18
	};
}
