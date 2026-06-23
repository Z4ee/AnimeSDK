#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/IPAddressInformation.h"

namespace System::Net { class IPAddress; }

#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMIPADDRESSINFORMATION_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x1D5D6D70)
#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMIPADDRESSINFORMATION_GET_ISDNSELIGIBLE_OFFSET UNITYSDK_OFFSET(0x1D5D6D90)
#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMIPADDRESSINFORMATION_GET_ISTRANSIENT_OFFSET UNITYSDK_OFFSET(0x1D5D6D80)
#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMIPADDRESSINFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D6D60)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int SystemIPAddressInformation_TypeDefinitionIndex = 3741;

	class SystemIPAddressInformation : public ::System::Net::NetworkInformation::IPAddressInformation
	{
	public:
		::System::Net::IPAddress* address; // 0x10
		::System::Boolean transient; // 0x18
		::System::Boolean dnsEligible; // 0x19

		::System::Void _ctor(::System::Net::IPAddress* address, ::System::Boolean isDnsEligible, ::System::Boolean isTransient)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPAddress*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMIPADDRESSINFORMATION__CTOR_OFFSET))(this, address, isDnsEligible, isTransient);
		}

		::System::Net::IPAddress* get_Address()
		{
			return ((::System::Net::IPAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMIPADDRESSINFORMATION_GET_ADDRESS_OFFSET))(this);
		}

		::System::Boolean get_IsTransient()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMIPADDRESSINFORMATION_GET_ISTRANSIENT_OFFSET))(this);
		}

		::System::Boolean get_IsDnsEligible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMIPADDRESSINFORMATION_GET_ISDNSELIGIBLE_OFFSET))(this);
		}
	};
}
