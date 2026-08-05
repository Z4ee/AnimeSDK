#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/AlignmentUnion.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterfaceType.h"
#include "unitysdk/System/Net/NetworkInformation/OperationalStatus.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_SOCKET_ADDRESS.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_NET_NETWORKINFORMATION_WIN32_IP_ADAPTER_ADDRESSES_GET_DDNSENABLED_OFFSET UNITYSDK_OFFSET(0x9A50F0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32_IP_ADAPTER_ADDRESSES_GET_DHCPENABLED_OFFSET UNITYSDK_OFFSET(0x9A5100)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32_IP_ADAPTER_ADDRESSES_GET_ISRECEIVEONLY_OFFSET UNITYSDK_OFFSET(0x9A5110)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32_IP_ADAPTER_ADDRESSES_GET_NOMULTICAST_OFFSET UNITYSDK_OFFSET(0x9A5120)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32_IP_ADAPTER_ADDRESSES_TypeDefinitionIndex = 3837;

	struct alignas(8) Win32_IP_ADAPTER_ADDRESSES
	{
		// static const ::System::Int32 GAA_FLAG_INCLUDE_WINS_INFO = 0x40; // 0x0
		// static const ::System::Int32 GAA_FLAG_INCLUDE_GATEWAYS = 0x80; // 0x0
		// static const ::System::Int32 MAX_ADAPTER_ADDRESS_LENGTH = 0x8; // 0x0
		// static const ::System::Int32 MAX_DHCPV6_DUID_LENGTH = 0x82; // 0x0
		// static const ::System::Int32 IP_ADAPTER_DDNS_ENABLED = 0x1; // 0x0
		// static const ::System::Int32 IP_ADAPTER_DHCP_ENABLED = 0x4; // 0x0
		// static const ::System::Int32 IP_ADAPTER_RECEIVE_ONLY = 0x8; // 0x0
		// static const ::System::Int32 IP_ADAPTER_NO_MULTICAST = 0x10; // 0x0
		::System::Net::NetworkInformation::AlignmentUnion Alignment; // 0x10
		::System::IntPtr Next; // 0x18
		::System::String* AdapterName; // 0x20
		::System::IntPtr FirstUnicastAddress; // 0x28
		::System::IntPtr FirstAnycastAddress; // 0x30
		::System::IntPtr FirstMulticastAddress; // 0x38
		::System::IntPtr FirstDnsServerAddress; // 0x40
		::System::String* DnsSuffix; // 0x48
		::System::String* Description; // 0x50
		::System::String* FriendlyName; // 0x58
		::Il2CppArray<::System::Byte>* PhysicalAddress; // 0x60
		::System::UInt32 PhysicalAddressLength; // 0x68
		::System::UInt32 Flags; // 0x6C
		::System::UInt32 Mtu; // 0x70
		::System::Net::NetworkInformation::NetworkInterfaceType IfType; // 0x74
		::System::Net::NetworkInformation::OperationalStatus OperStatus; // 0x78
		::System::Int32 Ipv6IfIndex; // 0x7C
		::Il2CppArray<::System::UInt32>* ZoneIndices; // 0x80
		::System::IntPtr FirstPrefix; // 0x88
		::System::UInt64 TransmitLinkSpeed; // 0x90
		::System::UInt64 ReceiveLinkSpeed; // 0x98
		::System::IntPtr FirstWinsServerAddress; // 0xA0
		::System::IntPtr FirstGatewayAddress; // 0xA8
		::System::UInt32 Ipv4Metric; // 0xB0
		::System::UInt32 Ipv6Metric; // 0xB4
		::System::UInt64 Luid; // 0xB8
		::System::Net::NetworkInformation::Win32_SOCKET_ADDRESS Dhcpv4Server; // 0xC0
		::System::UInt32 CompartmentId; // 0xD0
		::System::UInt64 NetworkGuid; // 0xD8
		::System::Int32 ConnectionType; // 0xE0
		::System::Int32 TunnelType; // 0xE4
		::System::Net::NetworkInformation::Win32_SOCKET_ADDRESS Dhcpv6Server; // 0xE8
		::Il2CppArray<::System::Byte>* Dhcpv6ClientDuid; // 0xF8
		::System::UInt64 Dhcpv6ClientDuidLength; // 0x100
		::System::UInt64 Dhcpv6Iaid; // 0x108
		::System::IntPtr FirstDnsSuffix; // 0x110

		::System::Boolean get_DdnsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32_IP_ADAPTER_ADDRESSES_GET_DDNSENABLED_OFFSET))(this);
		}

		::System::Boolean get_DhcpEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32_IP_ADAPTER_ADDRESSES_GET_DHCPENABLED_OFFSET))(this);
		}

		::System::Boolean get_IsReceiveOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32_IP_ADAPTER_ADDRESSES_GET_ISRECEIVEONLY_OFFSET))(this);
		}

		::System::Boolean get_NoMulticast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32_IP_ADAPTER_ADDRESSES_GET_NOMULTICAST_OFFSET))(this);
		}
	};
}
