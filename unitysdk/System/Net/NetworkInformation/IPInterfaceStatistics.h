#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_NETWORKINFORMATION_IPINTERFACESTATISTICS__CTOR_OFFSET UNITYSDK_OFFSET(0x18FBECD0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int IPInterfaceStatistics_TypeDefinitionIndex = 3713;

	class IPInterfaceStatistics : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPINTERFACESTATISTICS__CTOR_OFFSET))(this);
		}
	};
}
