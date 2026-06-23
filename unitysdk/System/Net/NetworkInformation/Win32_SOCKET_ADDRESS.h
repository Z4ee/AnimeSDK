#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net { class IPAddress; }

#define SYSTEM_NET_NETWORKINFORMATION_WIN32_SOCKET_ADDRESS_GETIPADDRESS_OFFSET UNITYSDK_OFFSET(0x99A690)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32_SOCKET_ADDRESS_TypeDefinitionIndex = 3849;

	struct alignas(8) Win32_SOCKET_ADDRESS
	{
		// static const ::System::Int32 AF_INET6 = 0x17; // 0x0
		::System::IntPtr Sockaddr; // 0x10
		::System::Int32 SockaddrLength; // 0x18

		::System::Net::IPAddress* GetIPAddress()
		{
			return ((::System::Net::IPAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32_SOCKET_ADDRESS_GETIPADDRESS_OFFSET))(this);
		}
	};
}
