#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/CommonUnixIPGlobalProperties.h"

#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x186FB2B0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int UnixIPGlobalProperties_TypeDefinitionIndex = 2927;

	class UnixIPGlobalProperties : public ::System::Net::NetworkInformation::CommonUnixIPGlobalProperties
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES__CTOR_OFFSET))(this);
		}
	};
}
