#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterfaceFactory_UnixNetworkInterfaceAPI.h"

namespace System::Net { class IPAddress; }
namespace System::Net::NetworkInformation { class NetworkInterface; }

#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_MACOSNETWORKINTERFACEAPI_GETALLNETWORKINTERFACES_OFFSET UNITYSDK_OFFSET(0x1C89D740)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_MACOSNETWORKINTERFACEAPI_GETLOOPBACKINTERFACEINDEX_OFFSET UNITYSDK_OFFSET(0x1C89E340)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_MACOSNETWORKINTERFACEAPI_GETNETMASK_OFFSET UNITYSDK_OFFSET(0x1C89E410)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_MACOSNETWORKINTERFACEAPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1C89EA00)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int NetworkInterfaceFactory_MacOsNetworkInterfaceAPI_TypeDefinitionIndex = 3810;

	class NetworkInterfaceFactory_MacOsNetworkInterfaceAPI : public ::System::Net::NetworkInformation::NetworkInterfaceFactory_UnixNetworkInterfaceAPI
	{
	public:
		// static const ::System::Int32 AF_INET = 0x2; // 0x0
		// static const ::System::Int32 AF_INET6 = 0x1E; // 0x0
		// static const ::System::Int32 AF_LINK = 0x12; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_MACOSNETWORKINTERFACEAPI__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Net::NetworkInformation::NetworkInterface*>* GetAllNetworkInterfaces()
		{
			return ((::Il2CppArray<::System::Net::NetworkInformation::NetworkInterface*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_MACOSNETWORKINTERFACEAPI_GETALLNETWORKINTERFACES_OFFSET))(this);
		}

		::System::Int32 GetLoopbackInterfaceIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_MACOSNETWORKINTERFACEAPI_GETLOOPBACKINTERFACEINDEX_OFFSET))(this);
		}

		::System::Net::IPAddress* GetNetMask(::System::Net::IPAddress* address)
		{
			return ((::System::Net::IPAddress*(*)(::PVOID, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_MACOSNETWORKINTERFACEAPI_GETNETMASK_OFFSET))(this, address);
		}
	};
}
