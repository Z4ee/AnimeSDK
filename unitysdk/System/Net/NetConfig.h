#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_NETCONFIG_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1CECEBD0)
#define SYSTEM_NET_NETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CECEBC0)

namespace System::Net
{
	inline static constexpr unsigned int NetConfig_TypeDefinitionIndex = 3549;

	class NetConfig : public ::System::Object
	{
	public:
		::System::Int32 MaxResponseHeadersLength; // 0x10
		::System::Boolean ipv6Enabled; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETCONFIG__CTOR_OFFSET))(this);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETCONFIG_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}
	};
}
