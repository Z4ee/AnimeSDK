#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterfaceFactory_UnixNetworkInterfaceAPI.h"

namespace System::Net::NetworkInformation { class NetworkInterface; }

#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI_FREEINTERFACEADDRESSES_OFFSET UNITYSDK_OFFSET(0x186FC100)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI_GETALLNETWORKINTERFACES_OFFSET UNITYSDK_OFFSET(0x186FC300)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI_GETINTERFACEADDRESSES_OFFSET UNITYSDK_OFFSET(0x186FC200)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI__CTOR_OFFSET UNITYSDK_OFFSET(0x186FC0D0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int NetworkInterfaceFactory_LinuxNetworkInterfaceAPI_TypeDefinitionIndex = 2945;

	class NetworkInterfaceFactory_LinuxNetworkInterfaceAPI : public ::System::Net::NetworkInformation::NetworkInterfaceFactory_UnixNetworkInterfaceAPI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI__CTOR_OFFSET))(this);
		}

		static ::System::Void FreeInterfaceAddresses(::System::IntPtr ifap)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI_FREEINTERFACEADDRESSES_OFFSET))(ifap);
		}

		static ::System::Int32 GetInterfaceAddresses(::System::IntPtr& ifap)
		{
			return ((::System::Int32(*)(::System::IntPtr&))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI_GETINTERFACEADDRESSES_OFFSET))(ifap);
		}

		::Il2CppArray<::System::Net::NetworkInformation::NetworkInterface*>* GetAllNetworkInterfaces()
		{
			return ((::Il2CppArray<::System::Net::NetworkInformation::NetworkInterface*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI_GETALLNETWORKINTERFACES_OFFSET))(this);
		}
	};
}
