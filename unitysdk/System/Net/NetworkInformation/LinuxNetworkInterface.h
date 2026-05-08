#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/OperationalStatus.h"
#include "unitysdk/System/Net/NetworkInformation/UnixNetworkInterface.h"

namespace System { class String; }
namespace System::Net::NetworkInformation { class IPInterfaceProperties; }
namespace System::Net::NetworkInformation { class IPv4InterfaceStatistics; }

#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKINTERFACE_GETIPPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A32C300)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKINTERFACE_GETIPV4STATISTICS_OFFSET UNITYSDK_OFFSET(0x1A32C3B0)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKINTERFACE_GET_IFACEPATH_OFFSET UNITYSDK_OFFSET(0x1A32C1F0)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKINTERFACE_GET_OPERATIONALSTATUS_OFFSET UNITYSDK_OFFSET(0x1A32C410)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKINTERFACE_GET_SUPPORTSMULTICAST_OFFSET UNITYSDK_OFFSET(0x1A32C930)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKINTERFACE_READLINE_OFFSET UNITYSDK_OFFSET(0x1A32C730)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A32C200)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int LinuxNetworkInterface_TypeDefinitionIndex = 3816;

	class LinuxNetworkInterface : public ::System::Net::NetworkInformation::UnixNetworkInterface
	{
	public:
		::System::String* iface_path; // 0x40
		::System::String* iface_flags_path; // 0x48
		::System::String* iface_operstate_path; // 0x50

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKINTERFACE__CTOR_OFFSET))(this, name);
		}

		::System::String* get_IfacePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKINTERFACE_GET_IFACEPATH_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IPInterfaceProperties* GetIPProperties()
		{
			return ((::System::Net::NetworkInformation::IPInterfaceProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKINTERFACE_GETIPPROPERTIES_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IPv4InterfaceStatistics* GetIPv4Statistics()
		{
			return ((::System::Net::NetworkInformation::IPv4InterfaceStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKINTERFACE_GETIPV4STATISTICS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::OperationalStatus get_OperationalStatus()
		{
			return ((::System::Net::NetworkInformation::OperationalStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKINTERFACE_GET_OPERATIONALSTATUS_OFFSET))(this);
		}

		::System::Boolean get_SupportsMulticast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKINTERFACE_GET_SUPPORTSMULTICAST_OFFSET))(this);
		}

		static ::System::String* ReadLine(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXNETWORKINTERFACE_READLINE_OFFSET))(path);
		}
	};
}
