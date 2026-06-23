#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterfaceFactory_UnixNetworkInterfaceAPI.h"
#include "unitysdk/System/Net/NetworkInformation/ifaddrs.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Net { class IPAddress; }
namespace System::Net::NetworkInformation { class NetworkInterface; }

#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI_FREEINTERFACEADDRESSES_OFFSET UNITYSDK_OFFSET(0x1C89C110)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI_GETALLNETWORKINTERFACES_OFFSET UNITYSDK_OFFSET(0x1C89C210)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI_GETINTERFACEADDRESSES_OFFSET UNITYSDK_OFFSET(0x1C89C190)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI_GETLOOPBACKINTERFACEINDEX_OFFSET UNITYSDK_OFFSET(0x1C89D000)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI_GETNETMASK_OFFSET UNITYSDK_OFFSET(0x1C89D0D0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI_GETNETWORKINTERFACES_OFFSET UNITYSDK_OFFSET(0x1C89D6E0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1C89D730)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int NetworkInterfaceFactory_LinuxNetworkInterfaceAPI_TypeDefinitionIndex = 3811;

	class NetworkInterfaceFactory_LinuxNetworkInterfaceAPI : public ::System::Net::NetworkInformation::NetworkInterfaceFactory_UnixNetworkInterfaceAPI
	{
	public:
		// static const ::System::Int32 AF_INET = 0x2; // 0x0
		// static const ::System::Int32 AF_INET6 = 0xA; // 0x0
		// static const ::System::Int32 AF_PACKET = 0x11; // 0x0

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

		::System::Int32 GetLoopbackInterfaceIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI_GETLOOPBACKINTERFACEINDEX_OFFSET))(this);
		}

		::System::Net::IPAddress* GetNetMask(::System::Net::IPAddress* address)
		{
			return ((::System::Net::IPAddress*(*)(::PVOID, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI_GETNETMASK_OFFSET))(this, address);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Net::NetworkInformation::ifaddrs>* GetNetworkInterfaces()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Net::NetworkInformation::ifaddrs>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_LINUXNETWORKINTERFACEAPI_GETNETWORKINTERFACES_OFFSET))();
		}
	};
}
