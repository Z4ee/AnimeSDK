#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_NETWORKINFORMATION_IPV4INTERFACEPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1E97A940)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int IPv4InterfaceProperties_TypeDefinitionIndex = 3717;

	class IPv4InterfaceProperties : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_IPV4INTERFACEPROPERTIES__CTOR_OFFSET))(this);
		}
	};
}
