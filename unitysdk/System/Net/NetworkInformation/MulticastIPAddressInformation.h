#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/DuplicateAddressDetectionState.h"
#include "unitysdk/System/Net/NetworkInformation/IPAddressInformation.h"
#include "unitysdk/System/Net/NetworkInformation/PrefixOrigin.h"
#include "unitysdk/System/Net/NetworkInformation/SuffixOrigin.h"

#define SYSTEM_NET_NETWORKINFORMATION_MULTICASTIPADDRESSINFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CECF030)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int MulticastIPAddressInformation_TypeDefinitionIndex = 3721;

	class MulticastIPAddressInformation : public ::System::Net::NetworkInformation::IPAddressInformation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MULTICASTIPADDRESSINFORMATION__CTOR_OFFSET))(this);
		}
	};
}
