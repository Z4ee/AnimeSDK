#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterfaceFactory_UnixNetworkInterfaceAPI.h"

namespace System::Net::NetworkInformation { class NetworkInterface; }

#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_MACOSNETWORKINTERFACEAPI_GETALLNETWORKINTERFACES_OFFSET UNITYSDK_OFFSET(0x1AF9C4A0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_MACOSNETWORKINTERFACEAPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF9B320)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int NetworkInterfaceFactory_MacOsNetworkInterfaceAPI_TypeDefinitionIndex = 2945;

	class NetworkInterfaceFactory_MacOsNetworkInterfaceAPI : public ::System::Net::NetworkInformation::NetworkInterfaceFactory_UnixNetworkInterfaceAPI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_MACOSNETWORKINTERFACEAPI__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Net::NetworkInformation::NetworkInterface*>* GetAllNetworkInterfaces()
		{
			return ((::Il2CppArray<::System::Net::NetworkInformation::NetworkInterface*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_MACOSNETWORKINTERFACEAPI_GETALLNETWORKINTERFACES_OFFSET))(this);
		}
	};
}
