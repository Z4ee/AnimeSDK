#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net::NetworkInformation { class GatewayIPAddressInformationCollection; }
namespace System::Net::NetworkInformation { class IPAddressCollection; }
namespace System::Net::NetworkInformation { class IPAddressInformationCollection; }
namespace System::Net::NetworkInformation { class IPv4InterfaceProperties; }
namespace System::Net::NetworkInformation { class IPv6InterfaceProperties; }
namespace System::Net::NetworkInformation { class MulticastIPAddressInformationCollection; }
namespace System::Net::NetworkInformation { class UnicastIPAddressInformationCollection; }

#define SYSTEM_NET_NETWORKINFORMATION_IPINTERFACEPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1D623CF0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int IPInterfaceProperties_TypeDefinitionIndex = 3711;

	class IPInterfaceProperties : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPINTERFACEPROPERTIES__CTOR_OFFSET))(this);
		}
	};
}
