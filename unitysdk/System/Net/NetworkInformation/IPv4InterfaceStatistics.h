#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_NETWORKINFORMATION_IPV4INTERFACESTATISTICS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B048A40)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int IPv4InterfaceStatistics_TypeDefinitionIndex = 2930;

	class IPv4InterfaceStatistics : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPV4INTERFACESTATISTICS__CTOR_OFFSET))(this);
		}
	};
}
