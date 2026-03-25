#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/IPInterfaceProperties.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_IP_ADAPTER_ADDRESSES.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_MIB_IFROW.h"

#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2__CTOR_OFFSET UNITYSDK_OFFSET(0x186FF360)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32IPInterfaceProperties2_TypeDefinitionIndex = 2931;

	class Win32IPInterfaceProperties2 : public ::System::Net::NetworkInformation::IPInterfaceProperties
	{
	public:
		::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES addr; // 0x10
		::System::Net::NetworkInformation::Win32_MIB_IFROW mib4; // 0x118
		::System::Net::NetworkInformation::Win32_MIB_IFROW mib6; // 0x188

		::System::Void _ctor(::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES addr, ::System::Net::NetworkInformation::Win32_MIB_IFROW mib4, ::System::Net::NetworkInformation::Win32_MIB_IFROW mib6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES, ::System::Net::NetworkInformation::Win32_MIB_IFROW, ::System::Net::NetworkInformation::Win32_MIB_IFROW))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2__CTOR_OFFSET))(this, addr, mib4, mib6);
		}
	};
}
