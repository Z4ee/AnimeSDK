#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterface.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterfaceType.h"
#include "unitysdk/System/Net/NetworkInformation/OperationalStatus.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_IP_ADAPTER_ADDRESSES.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_MIB_IFROW.h"

namespace System { class String; }
namespace System::Net::NetworkInformation { class IPInterfaceProperties; }
namespace System::Net::NetworkInformation { class PhysicalAddress; }
namespace System::Net::NetworkInformation { class Win32IPv4InterfaceStatistics; }

#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GETIFENTRY_OFFSET UNITYSDK_OFFSET(0x1AF9EB50)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GETPHYSICALADDRESS_OFFSET UNITYSDK_OFFSET(0x1AF9ECD0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1AF9ED30)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GET_NETWORKINTERFACETYPE_OFFSET UNITYSDK_OFFSET(0x1AF9ED40)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GET_OPERATIONALSTATUS_OFFSET UNITYSDK_OFFSET(0x1AF9ED50)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF9D790)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32NetworkInterface2_TypeDefinitionIndex = 2951;

	class Win32NetworkInterface2 : public ::System::Net::NetworkInformation::NetworkInterface
	{
	public:
		::System::Net::NetworkInformation::Win32IPv4InterfaceStatistics* ip4stats; // 0x10
		::System::Net::NetworkInformation::Win32_MIB_IFROW mib6; // 0x18
		::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES addr; // 0x88
		::System::Net::NetworkInformation::Win32_MIB_IFROW mib4; // 0x190
		::System::Net::NetworkInformation::IPInterfaceProperties* ip_if_props; // 0x200

		::System::Void _ctor(::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2__CTOR_OFFSET))(this, a1);
		}

		static ::System::Int32 GetIfEntry(::System::Net::NetworkInformation::Win32_MIB_IFROW& a1)
		{
			return ((::System::Int32(*)(::System::Net::NetworkInformation::Win32_MIB_IFROW&))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GETIFENTRY_OFFSET))(a1);
		}

		::System::Net::NetworkInformation::PhysicalAddress* GetPhysicalAddress()
		{
			return ((::System::Net::NetworkInformation::PhysicalAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GETPHYSICALADDRESS_OFFSET))(this);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Net::NetworkInformation::NetworkInterfaceType get_NetworkInterfaceType()
		{
			return ((::System::Net::NetworkInformation::NetworkInterfaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GET_NETWORKINTERFACETYPE_OFFSET))(this);
		}

		::System::Net::NetworkInformation::OperationalStatus get_OperationalStatus()
		{
			return ((::System::Net::NetworkInformation::OperationalStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GET_OPERATIONALSTATUS_OFFSET))(this);
		}
	};
}
