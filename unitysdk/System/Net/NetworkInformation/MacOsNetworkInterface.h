#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/OperationalStatus.h"
#include "unitysdk/System/Net/NetworkInformation/UnixNetworkInterface.h"

namespace System { class String; }
namespace System::Net::NetworkInformation { class IPInterfaceProperties; }
namespace System::Net::NetworkInformation { class IPv4InterfaceStatistics; }

#define SYSTEM_NET_NETWORKINFORMATION_MACOSNETWORKINTERFACE_GETIPPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B406120)
#define SYSTEM_NET_NETWORKINFORMATION_MACOSNETWORKINTERFACE_GETIPV4STATISTICS_OFFSET UNITYSDK_OFFSET(0x1B4061D0)
#define SYSTEM_NET_NETWORKINFORMATION_MACOSNETWORKINTERFACE_GET_OPERATIONALSTATUS_OFFSET UNITYSDK_OFFSET(0x1B406220)
#define SYSTEM_NET_NETWORKINFORMATION_MACOSNETWORKINTERFACE_GET_SUPPORTSMULTICAST_OFFSET UNITYSDK_OFFSET(0x1B406230)
#define SYSTEM_NET_NETWORKINFORMATION_MACOSNETWORKINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4060A0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int MacOsNetworkInterface_TypeDefinitionIndex = 3816;

	class MacOsNetworkInterface : public ::System::Net::NetworkInformation::UnixNetworkInterface
	{
	public:
		::System::UInt32 _ifa_flags; // 0x40

		::System::Void _ctor(::System::String* name, ::System::UInt32 ifa_flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACOSNETWORKINTERFACE__CTOR_OFFSET))(this, name, ifa_flags);
		}

		::System::Net::NetworkInformation::IPInterfaceProperties* GetIPProperties()
		{
			return ((::System::Net::NetworkInformation::IPInterfaceProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACOSNETWORKINTERFACE_GETIPPROPERTIES_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IPv4InterfaceStatistics* GetIPv4Statistics()
		{
			return ((::System::Net::NetworkInformation::IPv4InterfaceStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACOSNETWORKINTERFACE_GETIPV4STATISTICS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::OperationalStatus get_OperationalStatus()
		{
			return ((::System::Net::NetworkInformation::OperationalStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACOSNETWORKINTERFACE_GET_OPERATIONALSTATUS_OFFSET))(this);
		}

		::System::Boolean get_SupportsMulticast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACOSNETWORKINTERFACE_GET_SUPPORTSMULTICAST_OFFSET))(this);
		}
	};
}
