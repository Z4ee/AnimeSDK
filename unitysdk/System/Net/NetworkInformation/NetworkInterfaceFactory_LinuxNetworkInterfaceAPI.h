#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterfaceFactory_UnixNetworkInterfaceAPI.h"

namespace System::Net::NetworkInformation { class NetworkInterface; }

#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI_FREEINTERFACEADDRESSES_OFFSET UNITYSDK_OFFSET(0x1B049970)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI_GETALLNETWORKINTERFACES_OFFSET UNITYSDK_OFFSET(0x1B049B70)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI_GETINTERFACEADDRESSES_OFFSET UNITYSDK_OFFSET(0x1B049A70)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B049940)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int NetworkInterfaceFactory_LinuxNetworkInterfaceAPI_TypeDefinitionIndex = 2957;

	class NetworkInterfaceFactory_LinuxNetworkInterfaceAPI : public ::System::Net::NetworkInformation::NetworkInterfaceFactory_UnixNetworkInterfaceAPI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI__CTOR_OFFSET))(this);
		}

		static ::System::Void FreeInterfaceAddresses(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI_FREEINTERFACEADDRESSES_OFFSET))(a1);
		}

		static ::System::Int32 GetInterfaceAddresses(::System::IntPtr& a1)
		{
			return ((::System::Int32(*)(::System::IntPtr&))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI_GETINTERFACEADDRESSES_OFFSET))(a1);
		}

		::Il2CppArray<::System::Net::NetworkInformation::NetworkInterface*>* GetAllNetworkInterfaces()
		{
			return ((::Il2CppArray<::System::Net::NetworkInformation::NetworkInterface*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI_GETALLNETWORKINTERFACES_OFFSET))(this);
		}
	};
}
