#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterfaceFactory_UnixNetworkInterfaceAPI.h"

namespace System::Net::NetworkInformation { class NetworkInterface; }

#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI_FREEINTERFACEADDRESSES_OFFSET UNITYSDK_OFFSET(0x1E9A55A0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI_GETALLNETWORKINTERFACES_OFFSET UNITYSDK_OFFSET(0x1E9A57A0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI_GETINTERFACEADDRESSES_OFFSET UNITYSDK_OFFSET(0x1E9A56A0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A5570)

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
