#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/UnixIPInterfaceProperties.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net { class IPAddress; }
namespace System::Net::NetworkInformation { class GatewayIPAddressInformationCollection; }
namespace System::Net::NetworkInformation { class IPAddressCollection; }
namespace System::Net::NetworkInformation { class IPv4InterfaceProperties; }
namespace System::Net::NetworkInformation { class LinuxNetworkInterface; }

#define SYSTEM_NET_NETWORKINFORMATION_LINUXIPINTERFACEPROPERTIES_GETIPV4PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A10A3D0)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXIPINTERFACEPROPERTIES_GET_GATEWAYADDRESSES_OFFSET UNITYSDK_OFFSET(0x1A10A900)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXIPINTERFACEPROPERTIES_PARSEROUTEINFO_OFFSET UNITYSDK_OFFSET(0x1A10A440)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXIPINTERFACEPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1A10A360)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int LinuxIPInterfaceProperties_TypeDefinitionIndex = 3769;

	class LinuxIPInterfaceProperties : public ::System::Net::NetworkInformation::UnixIPInterfaceProperties
	{
	public:
		::System::Void _ctor(::System::Net::NetworkInformation::LinuxNetworkInterface* iface, ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::LinuxNetworkInterface*, ::System::Collections::Generic::List_1<::System::Net::IPAddress*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXIPINTERFACEPROPERTIES__CTOR_OFFSET))(this, iface, addresses);
		}

		::System::Net::NetworkInformation::IPv4InterfaceProperties* GetIPv4Properties()
		{
			return ((::System::Net::NetworkInformation::IPv4InterfaceProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXIPINTERFACEPROPERTIES_GETIPV4PROPERTIES_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IPAddressCollection* ParseRouteInfo(::System::String* iface)
		{
			return ((::System::Net::NetworkInformation::IPAddressCollection*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXIPINTERFACEPROPERTIES_PARSEROUTEINFO_OFFSET))(this, iface);
		}

		::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* get_GatewayAddresses()
		{
			return ((::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXIPINTERFACEPROPERTIES_GET_GATEWAYADDRESSES_OFFSET))(this);
		}
	};
}
