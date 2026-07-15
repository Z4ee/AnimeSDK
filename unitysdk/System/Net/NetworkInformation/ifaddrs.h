#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/ifa_ifu.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int ifaddrs_TypeDefinitionIndex = 2939;

	struct alignas(8) ifaddrs
	{
		::System::IntPtr ifa_next; // 0x10
		::System::String* ifa_name; // 0x18
		::System::UInt32 ifa_flags; // 0x20
		::System::IntPtr ifa_addr; // 0x28
		::System::IntPtr ifa_netmask; // 0x30
		::System::Net::NetworkInformation::ifa_ifu ifa_ifu; // 0x38
		::System::IntPtr ifa_data; // 0x40
	};
}
