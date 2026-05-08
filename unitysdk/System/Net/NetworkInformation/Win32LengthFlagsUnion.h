#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_NET_NETWORKINFORMATION_WIN32LENGTHFLAGSUNION_GET_ISDNSELIGIBLE_OFFSET UNITYSDK_OFFSET(0x8E3F00)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32LENGTHFLAGSUNION_GET_ISTRANSIENT_OFFSET UNITYSDK_OFFSET(0x8E3F10)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32LengthFlagsUnion_TypeDefinitionIndex = 3842;

	struct alignas(4) Win32LengthFlagsUnion
	{
		// static const ::System::Int32 IP_ADAPTER_ADDRESS_DNS_ELIGIBLE = 0x1; // 0x0
		// static const ::System::Int32 IP_ADAPTER_ADDRESS_TRANSIENT = 0x2; // 0x0
		::System::UInt32 Length; // 0x10
		::System::UInt32 Flags; // 0x14

		::System::Boolean get_IsDnsEligible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32LENGTHFLAGSUNION_GET_ISDNSELIGIBLE_OFFSET))(this);
		}

		::System::Boolean get_IsTransient()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32LENGTHFLAGSUNION_GET_ISTRANSIENT_OFFSET))(this);
		}
	};
}
