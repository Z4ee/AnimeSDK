#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/DuplicateAddressDetectionState.h"
#include "unitysdk/System/Net/NetworkInformation/IPAddressInformation.h"
#include "unitysdk/System/Net/NetworkInformation/PrefixOrigin.h"
#include "unitysdk/System/Net/NetworkInformation/SuffixOrigin.h"

namespace System::Net { class IPAddress; }

#define SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATION_GET_PREFIXLENGTH_OFFSET UNITYSDK_OFFSET(0x1B406830)
#define SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B406880)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int UnicastIPAddressInformation_TypeDefinitionIndex = 3748;

	class UnicastIPAddressInformation : public ::System::Net::NetworkInformation::IPAddressInformation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_PrefixLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNICASTIPADDRESSINFORMATION_GET_PREFIXLENGTH_OFFSET))(this);
		}
	};
}
