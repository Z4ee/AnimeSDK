#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_NETWORKINFORMATION_ICMPV6STATISTICS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7EAC80)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int IcmpV6Statistics_TypeDefinitionIndex = 3721;

	class IcmpV6Statistics : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_ICMPV6STATISTICS__CTOR_OFFSET))(this);
		}
	};
}
