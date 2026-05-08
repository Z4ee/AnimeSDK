#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/UnixIPv4InterfaceProperties.h"

namespace System::Net::NetworkInformation { class MacOsNetworkInterface; }

#define SYSTEM_NET_NETWORKINFORMATION_MACOSIPV4INTERFACEPROPERTIES_GET_ISFORWARDINGENABLED_OFFSET UNITYSDK_OFFSET(0x18FBECF0)
#define SYSTEM_NET_NETWORKINFORMATION_MACOSIPV4INTERFACEPROPERTIES_GET_MTU_OFFSET UNITYSDK_OFFSET(0x18FBED00)
#define SYSTEM_NET_NETWORKINFORMATION_MACOSIPV4INTERFACEPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x18FBECE0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int MacOsIPv4InterfaceProperties_TypeDefinitionIndex = 3774;

	class MacOsIPv4InterfaceProperties : public ::System::Net::NetworkInformation::UnixIPv4InterfaceProperties
	{
	public:
		::System::Void _ctor(::System::Net::NetworkInformation::MacOsNetworkInterface* iface)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::MacOsNetworkInterface*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACOSIPV4INTERFACEPROPERTIES__CTOR_OFFSET))(this, iface);
		}

		::System::Boolean get_IsForwardingEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACOSIPV4INTERFACEPROPERTIES_GET_ISFORWARDINGENABLED_OFFSET))(this);
		}

		::System::Int32 get_Mtu()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MACOSIPV4INTERFACEPROPERTIES_GET_MTU_OFFSET))(this);
		}
	};
}
