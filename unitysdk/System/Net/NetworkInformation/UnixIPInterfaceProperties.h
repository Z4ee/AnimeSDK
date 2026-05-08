#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Net/NetworkInformation/IPInterfaceProperties.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net { class IPAddress; }
namespace System::Net::NetworkInformation { class IPAddressCollection; }
namespace System::Net::NetworkInformation { class IPAddressInformationCollection; }
namespace System::Net::NetworkInformation { class IPv4InterfaceProperties; }
namespace System::Net::NetworkInformation { class IPv6InterfaceProperties; }
namespace System::Net::NetworkInformation { class MulticastIPAddressInformationCollection; }
namespace System::Net::NetworkInformation { class UnicastIPAddressInformationCollection; }
namespace System::Net::NetworkInformation { class UnixNetworkInterface; }
namespace System::Text::RegularExpressions { class Regex; }

#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPINTERFACEPROPERTIES_GETIPV6PROPERTIES_OFFSET UNITYSDK_OFFSET(0x19EF44C0)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPINTERFACEPROPERTIES_GET_ANYCASTADDRESSES_OFFSET UNITYSDK_OFFSET(0x19EF4D10)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPINTERFACEPROPERTIES_GET_DHCPSERVERADDRESSES_OFFSET UNITYSDK_OFFSET(0x19EF4E90)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPINTERFACEPROPERTIES_GET_DNSADDRESSES_OFFSET UNITYSDK_OFFSET(0x19EF4F10)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPINTERFACEPROPERTIES_GET_DNSSUFFIX_OFFSET UNITYSDK_OFFSET(0x19EF4F30)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPINTERFACEPROPERTIES_GET_ISDNSENABLED_OFFSET UNITYSDK_OFFSET(0x19EF4F50)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPINTERFACEPROPERTIES_GET_ISDYNAMICDNSENABLED_OFFSET UNITYSDK_OFFSET(0x19EF4F60)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPINTERFACEPROPERTIES_GET_MULTICASTADDRESSES_OFFSET UNITYSDK_OFFSET(0x19EF4F70)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPINTERFACEPROPERTIES_GET_UNICASTADDRESSES_OFFSET UNITYSDK_OFFSET(0x19EF5160)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPINTERFACEPROPERTIES_GET_WINSSERVERSADDRESSES_OFFSET UNITYSDK_OFFSET(0x19EF5380)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPINTERFACEPROPERTIES_PARSERESOLVCONF_OFFSET UNITYSDK_OFFSET(0x19EF4510)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPINTERFACEPROPERTIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x19EF5400)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPINTERFACEPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x19EF44B0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int UnixIPInterfaceProperties_TypeDefinitionIndex = 3768;

	class UnixIPInterfaceProperties : public ::System::Net::NetworkInformation::IPInterfaceProperties
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_ns()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(UnixIPInterfaceProperties_TypeDefinitionIndex)->GetStaticField(0x33E0);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet_search()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(UnixIPInterfaceProperties_TypeDefinitionIndex)->GetStaticField(0x33E8);
		}
		::System::Net::NetworkInformation::IPv4InterfaceProperties* ipv4iface_properties; // 0x10
		::System::Net::NetworkInformation::UnixNetworkInterface* iface; // 0x18
		::System::Net::NetworkInformation::IPAddressCollection* dns_servers; // 0x20
		::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses; // 0x28
		::System::String* dns_suffix; // 0x30
		::System::DateTime last_parse; // 0x38

		::System::Void _ctor(::System::Net::NetworkInformation::UnixNetworkInterface* iface, ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::UnixNetworkInterface*, ::System::Collections::Generic::List_1<::System::Net::IPAddress*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPINTERFACEPROPERTIES__CTOR_OFFSET))(this, iface, addresses);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPINTERFACEPROPERTIES__CCTOR_OFFSET))();
		}

		::System::Net::NetworkInformation::IPv6InterfaceProperties* GetIPv6Properties()
		{
			return ((::System::Net::NetworkInformation::IPv6InterfaceProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPINTERFACEPROPERTIES_GETIPV6PROPERTIES_OFFSET))(this);
		}

		::System::Void ParseResolvConf()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPINTERFACEPROPERTIES_PARSERESOLVCONF_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IPAddressInformationCollection* get_AnycastAddresses()
		{
			return ((::System::Net::NetworkInformation::IPAddressInformationCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPINTERFACEPROPERTIES_GET_ANYCASTADDRESSES_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IPAddressCollection* get_DhcpServerAddresses()
		{
			return ((::System::Net::NetworkInformation::IPAddressCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPINTERFACEPROPERTIES_GET_DHCPSERVERADDRESSES_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IPAddressCollection* get_DnsAddresses()
		{
			return ((::System::Net::NetworkInformation::IPAddressCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPINTERFACEPROPERTIES_GET_DNSADDRESSES_OFFSET))(this);
		}

		::System::String* get_DnsSuffix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPINTERFACEPROPERTIES_GET_DNSSUFFIX_OFFSET))(this);
		}

		::System::Boolean get_IsDnsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPINTERFACEPROPERTIES_GET_ISDNSENABLED_OFFSET))(this);
		}

		::System::Boolean get_IsDynamicDnsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPINTERFACEPROPERTIES_GET_ISDYNAMICDNSENABLED_OFFSET))(this);
		}

		::System::Net::NetworkInformation::MulticastIPAddressInformationCollection* get_MulticastAddresses()
		{
			return ((::System::Net::NetworkInformation::MulticastIPAddressInformationCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPINTERFACEPROPERTIES_GET_MULTICASTADDRESSES_OFFSET))(this);
		}

		::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* get_UnicastAddresses()
		{
			return ((::System::Net::NetworkInformation::UnicastIPAddressInformationCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPINTERFACEPROPERTIES_GET_UNICASTADDRESSES_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IPAddressCollection* get_WinsServersAddresses()
		{
			return ((::System::Net::NetworkInformation::IPAddressCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPINTERFACEPROPERTIES_GET_WINSSERVERSADDRESSES_OFFSET))(this);
		}
	};
}
