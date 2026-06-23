#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

#define SYSTEM_NET_NETWORKINFORMATION_NETWORKAVAILABILITYEVENTARGS_GET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1C6DAC30)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKAVAILABILITYEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6DAC40)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKAVAILABILITYEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6DABD0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int NetworkAvailabilityEventArgs_TypeDefinitionIndex = 3724;

	class NetworkAvailabilityEventArgs : public ::System::EventArgs
	{
	public:
		::System::Boolean isAvailable; // 0x10

		::System::Void _ctor(::System::Boolean isAvailable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKAVAILABILITYEVENTARGS__CTOR_OFFSET))(this, isAvailable);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKAVAILABILITYEVENTARGS__CTOR_1_OFFSET))(this);
		}

		::System::Boolean get_IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKAVAILABILITYEVENTARGS_GET_ISAVAILABLE_OFFSET))(this);
		}
	};
}
