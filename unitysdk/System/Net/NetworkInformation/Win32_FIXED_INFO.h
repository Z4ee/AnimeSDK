#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/NetBiosNodeType.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_IP_ADDR_STRING.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32_FIXED_INFO_TypeDefinitionIndex = 2957;

	struct alignas(8) Win32_FIXED_INFO
	{
		::System::String* HostName; // 0x10
		::System::String* DomainName; // 0x18
		::System::IntPtr CurrentDnsServer; // 0x20
		::System::Net::NetworkInformation::Win32_IP_ADDR_STRING DnsServerList; // 0x28
		::System::Net::NetworkInformation::NetBiosNodeType NodeType; // 0x48
		::System::String* ScopeId; // 0x50
		::System::UInt32 EnableRouting; // 0x58
		::System::UInt32 EnableProxy; // 0x5C
		::System::UInt32 EnableDns; // 0x60
	};
}
