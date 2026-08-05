#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class IPAddress; }

#define SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8BA20)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int IPAddressInformation_TypeDefinitionIndex = 3707;

	class IPAddressInformation : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPADDRESSINFORMATION__CTOR_OFFSET))(this);
		}
	};
}
