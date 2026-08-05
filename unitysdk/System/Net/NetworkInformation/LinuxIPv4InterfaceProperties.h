#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/UnixIPv4InterfaceProperties.h"

namespace System::Net::NetworkInformation { class LinuxNetworkInterface; }

#define SYSTEM_NET_NETWORKINFORMATION_LINUXIPV4INTERFACEPROPERTIES_GET_ISFORWARDINGENABLED_OFFSET UNITYSDK_OFFSET(0x1CC194E0)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXIPV4INTERFACEPROPERTIES_GET_MTU_OFFSET UNITYSDK_OFFSET(0x1CC195E0)
#define SYSTEM_NET_NETWORKINFORMATION_LINUXIPV4INTERFACEPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC194D0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int LinuxIPv4InterfaceProperties_TypeDefinitionIndex = 3772;

	class LinuxIPv4InterfaceProperties : public ::System::Net::NetworkInformation::UnixIPv4InterfaceProperties
	{
	public:
		::System::Void _ctor(::System::Net::NetworkInformation::LinuxNetworkInterface* iface)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::LinuxNetworkInterface*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXIPV4INTERFACEPROPERTIES__CTOR_OFFSET))(this, iface);
		}

		::System::Boolean get_IsForwardingEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXIPV4INTERFACEPROPERTIES_GET_ISFORWARDINGENABLED_OFFSET))(this);
		}

		::System::Int32 get_Mtu()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_LINUXIPV4INTERFACEPROPERTIES_GET_MTU_OFFSET))(this);
		}
	};
}
