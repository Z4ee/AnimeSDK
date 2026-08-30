#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_NETWORKINFORMATION_IPINTERFACEPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1B048A30)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int IPInterfaceProperties_TypeDefinitionIndex = 2929;

	class IPInterfaceProperties : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPINTERFACEPROPERTIES__CTOR_OFFSET))(this);
		}
	};
}
