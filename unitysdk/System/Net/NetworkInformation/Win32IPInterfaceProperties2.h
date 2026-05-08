#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/IPInterfaceProperties.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_IP_ADAPTER_ADDRESSES.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_MIB_IFROW.h"

namespace System { class String; }
namespace System::Net::NetworkInformation { class GatewayIPAddressInformationCollection; }
namespace System::Net::NetworkInformation { class IPAddressCollection; }
namespace System::Net::NetworkInformation { class IPAddressInformationCollection; }
namespace System::Net::NetworkInformation { class IPv4InterfaceProperties; }
namespace System::Net::NetworkInformation { class IPv6InterfaceProperties; }
namespace System::Net::NetworkInformation { class MulticastIPAddressInformationCollection; }
namespace System::Net::NetworkInformation { class UnicastIPAddressInformationCollection; }

#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_GETIPV4PROPERTIES_OFFSET UNITYSDK_OFFSET(0x18FC07C0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_GETIPV6PROPERTIES_OFFSET UNITYSDK_OFFSET(0x18FC0890)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_GET_ANYCASTADDRESSES_OFFSET UNITYSDK_OFFSET(0x18FC0960)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_GET_DHCPSERVERADDRESSES_OFFSET UNITYSDK_OFFSET(0x18FC0B60)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_GET_DNSADDRESSES_OFFSET UNITYSDK_OFFSET(0x18FC0C90)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_GET_DNSSUFFIX_OFFSET UNITYSDK_OFFSET(0x18FC0D00)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_GET_GATEWAYADDRESSES_OFFSET UNITYSDK_OFFSET(0x18FC0D10)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_GET_ISDNSENABLED_OFFSET UNITYSDK_OFFSET(0x18FC0F70)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_GET_ISDYNAMICDNSENABLED_OFFSET UNITYSDK_OFFSET(0x18FC0F90)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_GET_MULTICASTADDRESSES_OFFSET UNITYSDK_OFFSET(0x18FC0FA0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_GET_UNICASTADDRESSES_OFFSET UNITYSDK_OFFSET(0x18FC11C0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_GET_WINSSERVERSADDRESSES_OFFSET UNITYSDK_OFFSET(0x18FC14E0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_WIN32FROMANYCAST_OFFSET UNITYSDK_OFFSET(0x18FC0970)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_WIN32FROMMULTICAST_OFFSET UNITYSDK_OFFSET(0x18FC0FB0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_WIN32FROMUNICAST_OFFSET UNITYSDK_OFFSET(0x18FC1290)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2__CTOR_OFFSET UNITYSDK_OFFSET(0x18FC0700)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32IPInterfaceProperties2_TypeDefinitionIndex = 3771;

	class Win32IPInterfaceProperties2 : public ::System::Net::NetworkInformation::IPInterfaceProperties
	{
	public:
		::System::Net::NetworkInformation::Win32_MIB_IFROW mib6; // 0x10
		::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES addr; // 0x80
		::System::Net::NetworkInformation::Win32_MIB_IFROW mib4; // 0x188

		::System::Void _ctor(::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES addr, ::System::Net::NetworkInformation::Win32_MIB_IFROW mib4, ::System::Net::NetworkInformation::Win32_MIB_IFROW mib6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES, ::System::Net::NetworkInformation::Win32_MIB_IFROW, ::System::Net::NetworkInformation::Win32_MIB_IFROW))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2__CTOR_OFFSET))(this, addr, mib4, mib6);
		}

		::System::Net::NetworkInformation::IPv4InterfaceProperties* GetIPv4Properties()
		{
			return ((::System::Net::NetworkInformation::IPv4InterfaceProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_GETIPV4PROPERTIES_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IPv6InterfaceProperties* GetIPv6Properties()
		{
			return ((::System::Net::NetworkInformation::IPv6InterfaceProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_GETIPV6PROPERTIES_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IPAddressInformationCollection* get_AnycastAddresses()
		{
			return ((::System::Net::NetworkInformation::IPAddressInformationCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_GET_ANYCASTADDRESSES_OFFSET))(this);
		}

		static ::System::Net::NetworkInformation::IPAddressInformationCollection* Win32FromAnycast(::System::IntPtr ptr)
		{
			return ((::System::Net::NetworkInformation::IPAddressInformationCollection*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_WIN32FROMANYCAST_OFFSET))(ptr);
		}

		::System::Net::NetworkInformation::IPAddressCollection* get_DhcpServerAddresses()
		{
			return ((::System::Net::NetworkInformation::IPAddressCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_GET_DHCPSERVERADDRESSES_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IPAddressCollection* get_DnsAddresses()
		{
			return ((::System::Net::NetworkInformation::IPAddressCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_GET_DNSADDRESSES_OFFSET))(this);
		}

		::System::String* get_DnsSuffix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_GET_DNSSUFFIX_OFFSET))(this);
		}

		::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* get_GatewayAddresses()
		{
			return ((::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_GET_GATEWAYADDRESSES_OFFSET))(this);
		}

		::System::Boolean get_IsDnsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_GET_ISDNSENABLED_OFFSET))(this);
		}

		::System::Boolean get_IsDynamicDnsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_GET_ISDYNAMICDNSENABLED_OFFSET))(this);
		}

		::System::Net::NetworkInformation::MulticastIPAddressInformationCollection* get_MulticastAddresses()
		{
			return ((::System::Net::NetworkInformation::MulticastIPAddressInformationCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_GET_MULTICASTADDRESSES_OFFSET))(this);
		}

		static ::System::Net::NetworkInformation::MulticastIPAddressInformationCollection* Win32FromMulticast(::System::IntPtr ptr)
		{
			return ((::System::Net::NetworkInformation::MulticastIPAddressInformationCollection*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_WIN32FROMMULTICAST_OFFSET))(ptr);
		}

		::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* get_UnicastAddresses()
		{
			return ((::System::Net::NetworkInformation::UnicastIPAddressInformationCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_GET_UNICASTADDRESSES_OFFSET))(this);
		}

		static ::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* Win32FromUnicast(::System::IntPtr ptr)
		{
			return ((::System::Net::NetworkInformation::UnicastIPAddressInformationCollection*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_WIN32FROMUNICAST_OFFSET))(ptr);
		}

		::System::Net::NetworkInformation::IPAddressCollection* get_WinsServersAddresses()
		{
			return ((::System::Net::NetworkInformation::IPAddressCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPINTERFACEPROPERTIES2_GET_WINSSERVERSADDRESSES_OFFSET))(this);
		}
	};
}
