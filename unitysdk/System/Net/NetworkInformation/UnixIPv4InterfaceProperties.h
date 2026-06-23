#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/IPv4InterfaceProperties.h"

namespace System::Net::NetworkInformation { class UnixNetworkInterface; }

#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPV4INTERFACEPROPERTIES_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1C89EA20)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPV4INTERFACEPROPERTIES_GET_ISAUTOMATICPRIVATEADDRESSINGACTIVE_OFFSET UNITYSDK_OFFSET(0x1C89EAD0)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPV4INTERFACEPROPERTIES_GET_ISAUTOMATICPRIVATEADDRESSINGENABLED_OFFSET UNITYSDK_OFFSET(0x1C89EAE0)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPV4INTERFACEPROPERTIES_GET_ISDHCPENABLED_OFFSET UNITYSDK_OFFSET(0x1C89EAF0)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPV4INTERFACEPROPERTIES_GET_USESWINS_OFFSET UNITYSDK_OFFSET(0x1C89EB00)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPV4INTERFACEPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1C89EA10)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int UnixIPv4InterfaceProperties_TypeDefinitionIndex = 3771;

	class UnixIPv4InterfaceProperties : public ::System::Net::NetworkInformation::IPv4InterfaceProperties
	{
	public:
		::System::Net::NetworkInformation::UnixNetworkInterface* iface; // 0x10

		::System::Void _ctor(::System::Net::NetworkInformation::UnixNetworkInterface* iface)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::UnixNetworkInterface*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPV4INTERFACEPROPERTIES__CTOR_OFFSET))(this, iface);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPV4INTERFACEPROPERTIES_GET_INDEX_OFFSET))(this);
		}

		::System::Boolean get_IsAutomaticPrivateAddressingActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPV4INTERFACEPROPERTIES_GET_ISAUTOMATICPRIVATEADDRESSINGACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsAutomaticPrivateAddressingEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPV4INTERFACEPROPERTIES_GET_ISAUTOMATICPRIVATEADDRESSINGENABLED_OFFSET))(this);
		}

		::System::Boolean get_IsDhcpEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPV4INTERFACEPROPERTIES_GET_ISDHCPENABLED_OFFSET))(this);
		}

		::System::Boolean get_UsesWins()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPV4INTERFACEPROPERTIES_GET_USESWINS_OFFSET))(this);
		}
	};
}
