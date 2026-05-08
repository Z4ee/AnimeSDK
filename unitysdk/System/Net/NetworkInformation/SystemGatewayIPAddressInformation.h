#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/GatewayIPAddressInformation.h"

namespace System::Net { class IPAddress; }
namespace System::Net::NetworkInformation { class GatewayIPAddressInformationCollection; }
namespace System::Net::NetworkInformation { class IPAddressCollection; }

#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMGATEWAYIPADDRESSINFORMATION_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x1B1EEF40)
#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMGATEWAYIPADDRESSINFORMATION_TOGATEWAYIPADDRESSINFORMATIONCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1B1EEF50)
#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMGATEWAYIPADDRESSINFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1EEF30)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int SystemGatewayIPAddressInformation_TypeDefinitionIndex = 3741;

	class SystemGatewayIPAddressInformation : public ::System::Net::NetworkInformation::GatewayIPAddressInformation
	{
	public:
		::System::Net::IPAddress* address; // 0x10

		::System::Void _ctor(::System::Net::IPAddress* address)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMGATEWAYIPADDRESSINFORMATION__CTOR_OFFSET))(this, address);
		}

		::System::Net::IPAddress* get_Address()
		{
			return ((::System::Net::IPAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMGATEWAYIPADDRESSINFORMATION_GET_ADDRESS_OFFSET))(this);
		}

		static ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* ToGatewayIpAddressInformationCollection(::System::Net::NetworkInformation::IPAddressCollection* addresses)
		{
			return ((::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*(*)(::System::Net::NetworkInformation::IPAddressCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMGATEWAYIPADDRESSINFORMATION_TOGATEWAYIPADDRESSINFORMATIONCOLLECTION_OFFSET))(addresses);
		}
	};
}
