#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/UnixIPInterfaceProperties.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net { class IPAddress; }
namespace System::Net::NetworkInformation { class GatewayIPAddressInformationCollection; }
namespace System::Net::NetworkInformation { class IPv4InterfaceProperties; }
namespace System::Net::NetworkInformation { class MacOsNetworkInterface; }

#define SYSTEM_NET_NETWORKINFORMATION_MACOSIPINTERFACEPROPERTIES_GETIPV4PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1DEC5CC0)
#define SYSTEM_NET_NETWORKINFORMATION_MACOSIPINTERFACEPROPERTIES_GET_GATEWAYADDRESSES_OFFSET UNITYSDK_OFFSET(0x1DEC5D40)
#define SYSTEM_NET_NETWORKINFORMATION_MACOSIPINTERFACEPROPERTIES_PARSEROUTEINFO_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1DEC5D30)
#define SYSTEM_NET_NETWORKINFORMATION_MACOSIPINTERFACEPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC5C50)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int MacOsIPInterfaceProperties_TypeDefinitionIndex = 3769;

	class MacOsIPInterfaceProperties : public ::System::Net::NetworkInformation::UnixIPInterfaceProperties
	{
	public:
		::System::Void _ctor(::System::Net::NetworkInformation::MacOsNetworkInterface* iface, ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::MacOsNetworkInterface*, ::System::Collections::Generic::List_1<::System::Net::IPAddress*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACOSIPINTERFACEPROPERTIES__CTOR_OFFSET))(this, iface, addresses);
		}

		::System::Net::NetworkInformation::IPv4InterfaceProperties* GetIPv4Properties()
		{
			return ((::System::Net::NetworkInformation::IPv4InterfaceProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACOSIPINTERFACEPROPERTIES_GETIPV4PROPERTIES_OFFSET))(this);
		}

		static ::System::Boolean ParseRouteInfo_internal(::System::String* iface, ::Il2CppArray<::System::String*>*& gw_addr_list)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::String*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACOSIPINTERFACEPROPERTIES_PARSEROUTEINFO_INTERNAL_OFFSET))(iface, gw_addr_list);
		}

		::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* get_GatewayAddresses()
		{
			return ((::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACOSIPINTERFACEPROPERTIES_GET_GATEWAYADDRESSES_OFFSET))(this);
		}
	};
}
