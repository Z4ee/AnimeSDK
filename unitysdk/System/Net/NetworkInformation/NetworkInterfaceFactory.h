#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class IPAddress; }
namespace System::Net::NetworkInformation { class NetworkInterface; }

#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x1E7E8B40)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E8CD0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int NetworkInterfaceFactory_TypeDefinitionIndex = 3808;

	class NetworkInterfaceFactory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY__CTOR_OFFSET))(this);
		}

		static ::System::Net::NetworkInformation::NetworkInterfaceFactory* Create()
		{
			return ((::System::Net::NetworkInformation::NetworkInterfaceFactory*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_CREATE_OFFSET))();
		}
	};
}
