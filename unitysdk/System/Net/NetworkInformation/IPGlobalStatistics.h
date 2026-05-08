#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_NETWORKINFORMATION_IPGLOBALSTATISTICS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A32C1E0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int IPGlobalStatistics_TypeDefinitionIndex = 3711;

	class IPGlobalStatistics : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPGLOBALSTATISTICS__CTOR_OFFSET))(this);
		}
	};
}
