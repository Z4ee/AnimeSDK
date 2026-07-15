#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/IPInterfaceProperties.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_IP_ADAPTER_ADDRESSES.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_MIB_IFROW.h"

#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2__CTOR_OFFSET UNITYSDK_OFFSET(0x1961B190)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32IPInterfaceProperties2_TypeDefinitionIndex = 2936;

	class Win32IPInterfaceProperties2 : public ::System::Net::NetworkInformation::IPInterfaceProperties
	{
	public:
		::System::Net::NetworkInformation::Win32_MIB_IFROW mib4; // 0x10
		::System::Net::NetworkInformation::Win32_MIB_IFROW mib6; // 0x80
		::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES addr; // 0xF0

		::System::Void _ctor(::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES a1, ::System::Net::NetworkInformation::Win32_MIB_IFROW a2, ::System::Net::NetworkInformation::Win32_MIB_IFROW a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES, ::System::Net::NetworkInformation::Win32_MIB_IFROW, ::System::Net::NetworkInformation::Win32_MIB_IFROW))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
