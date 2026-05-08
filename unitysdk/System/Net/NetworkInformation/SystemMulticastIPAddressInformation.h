#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/DuplicateAddressDetectionState.h"
#include "unitysdk/System/Net/NetworkInformation/MulticastIPAddressInformation.h"
#include "unitysdk/System/Net/NetworkInformation/PrefixOrigin.h"
#include "unitysdk/System/Net/NetworkInformation/SuffixOrigin.h"

namespace System::Net { class IPAddress; }
namespace System::Net::NetworkInformation { class IPAddressInformationCollection; }
namespace System::Net::NetworkInformation { class MulticastIPAddressInformationCollection; }
namespace System::Net::NetworkInformation { class SystemIPAddressInformation; }

#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMMULTICASTIPADDRESSINFORMATION_GET_ADDRESSPREFERREDLIFETIME_OFFSET UNITYSDK_OFFSET(0x19AFBC60)
#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMMULTICASTIPADDRESSINFORMATION_GET_ADDRESSVALIDLIFETIME_OFFSET UNITYSDK_OFFSET(0x19AFBC50)
#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMMULTICASTIPADDRESSINFORMATION_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x19AFBBC0)
#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMMULTICASTIPADDRESSINFORMATION_GET_DHCPLEASELIFETIME_OFFSET UNITYSDK_OFFSET(0x19AFBC70)
#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMMULTICASTIPADDRESSINFORMATION_GET_DUPLICATEADDRESSDETECTIONSTATE_OFFSET UNITYSDK_OFFSET(0x19AFBC40)
#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMMULTICASTIPADDRESSINFORMATION_GET_ISDNSELIGIBLE_OFFSET UNITYSDK_OFFSET(0x19AFBC00)
#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMMULTICASTIPADDRESSINFORMATION_GET_ISTRANSIENT_OFFSET UNITYSDK_OFFSET(0x19AFBBE0)
#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMMULTICASTIPADDRESSINFORMATION_GET_PREFIXORIGIN_OFFSET UNITYSDK_OFFSET(0x19AFBC20)
#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMMULTICASTIPADDRESSINFORMATION_GET_SUFFIXORIGIN_OFFSET UNITYSDK_OFFSET(0x19AFBC30)
#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMMULTICASTIPADDRESSINFORMATION_TOMULTICASTIPADDRESSINFORMATIONCOLLECTION_OFFSET UNITYSDK_OFFSET(0x19AFBC80)
#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMMULTICASTIPADDRESSINFORMATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19AFBBB0)
#define SYSTEM_NET_NETWORKINFORMATION_SYSTEMMULTICASTIPADDRESSINFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19AFBBA0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int SystemMulticastIPAddressInformation_TypeDefinitionIndex = 3743;

	class SystemMulticastIPAddressInformation : public ::System::Net::NetworkInformation::MulticastIPAddressInformation
	{
	public:
		::System::Net::NetworkInformation::SystemIPAddressInformation* innerInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMMULTICASTIPADDRESSINFORMATION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Net::NetworkInformation::SystemIPAddressInformation* addressInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::SystemIPAddressInformation*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMMULTICASTIPADDRESSINFORMATION__CTOR_1_OFFSET))(this, addressInfo);
		}

		::System::Net::IPAddress* get_Address()
		{
			return ((::System::Net::IPAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMMULTICASTIPADDRESSINFORMATION_GET_ADDRESS_OFFSET))(this);
		}

		::System::Boolean get_IsTransient()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMMULTICASTIPADDRESSINFORMATION_GET_ISTRANSIENT_OFFSET))(this);
		}

		::System::Boolean get_IsDnsEligible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMMULTICASTIPADDRESSINFORMATION_GET_ISDNSELIGIBLE_OFFSET))(this);
		}

		::System::Net::NetworkInformation::PrefixOrigin get_PrefixOrigin()
		{
			return ((::System::Net::NetworkInformation::PrefixOrigin(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMMULTICASTIPADDRESSINFORMATION_GET_PREFIXORIGIN_OFFSET))(this);
		}

		::System::Net::NetworkInformation::SuffixOrigin get_SuffixOrigin()
		{
			return ((::System::Net::NetworkInformation::SuffixOrigin(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMMULTICASTIPADDRESSINFORMATION_GET_SUFFIXORIGIN_OFFSET))(this);
		}

		::System::Net::NetworkInformation::DuplicateAddressDetectionState get_DuplicateAddressDetectionState()
		{
			return ((::System::Net::NetworkInformation::DuplicateAddressDetectionState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMMULTICASTIPADDRESSINFORMATION_GET_DUPLICATEADDRESSDETECTIONSTATE_OFFSET))(this);
		}

		::System::Int64 get_AddressValidLifetime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMMULTICASTIPADDRESSINFORMATION_GET_ADDRESSVALIDLIFETIME_OFFSET))(this);
		}

		::System::Int64 get_AddressPreferredLifetime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMMULTICASTIPADDRESSINFORMATION_GET_ADDRESSPREFERREDLIFETIME_OFFSET))(this);
		}

		::System::Int64 get_DhcpLeaseLifetime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMMULTICASTIPADDRESSINFORMATION_GET_DHCPLEASELIFETIME_OFFSET))(this);
		}

		static ::System::Net::NetworkInformation::MulticastIPAddressInformationCollection* ToMulticastIpAddressInformationCollection(::System::Net::NetworkInformation::IPAddressInformationCollection* addresses)
		{
			return ((::System::Net::NetworkInformation::MulticastIPAddressInformationCollection*(*)(::System::Net::NetworkInformation::IPAddressInformationCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_SYSTEMMULTICASTIPADDRESSINFORMATION_TOMULTICASTIPADDRESSINFORMATIONCOLLECTION_OFFSET))(addresses);
		}
	};
}
