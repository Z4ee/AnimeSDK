#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_IP_ADDR_STRING.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_NETWORKINFORMATION_WIN32_IP_PER_ADAPTER_INFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC9060)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32_IP_PER_ADAPTER_INFO_TypeDefinitionIndex = 3775;

	class Win32_IP_PER_ADAPTER_INFO : public ::System::Object
	{
	public:
		::System::UInt32 AutoconfigEnabled; // 0x10
		::System::UInt32 AutoconfigActive; // 0x14
		::System::IntPtr CurrentDnsServer; // 0x18
		::System::Net::NetworkInformation::Win32_IP_ADDR_STRING DnsServerList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32_IP_PER_ADAPTER_INFO__CTOR_OFFSET))(this);
		}
	};
}
