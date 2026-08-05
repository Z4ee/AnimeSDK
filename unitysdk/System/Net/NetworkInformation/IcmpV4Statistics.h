#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_NETWORKINFORMATION_ICMPV4STATISTICS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC5C30)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int IcmpV4Statistics_TypeDefinitionIndex = 3719;

	class IcmpV4Statistics : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_ICMPV4STATISTICS__CTOR_OFFSET))(this);
		}
	};
}
