#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterfaceFactory.h"

namespace System { class String; }

#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_UNIXNETWORKINTERFACEAPI_FREEIFADDRS_OFFSET UNITYSDK_OFFSET(0x1D255830)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_UNIXNETWORKINTERFACEAPI_GETIFADDRS_OFFSET UNITYSDK_OFFSET(0x1D2557B0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_UNIXNETWORKINTERFACEAPI_IF_NAMETOINDEX_OFFSET UNITYSDK_OFFSET(0x1D255710)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_UNIXNETWORKINTERFACEAPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2558B0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int NetworkInterfaceFactory_UnixNetworkInterfaceAPI_TypeDefinitionIndex = 3809;

	class NetworkInterfaceFactory_UnixNetworkInterfaceAPI : public ::System::Net::NetworkInformation::NetworkInterfaceFactory
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_UNIXNETWORKINTERFACEAPI__CTOR_OFFSET))(this);
		}

		static ::System::Int32 if_nametoindex(::System::String* ifname)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_UNIXNETWORKINTERFACEAPI_IF_NAMETOINDEX_OFFSET))(ifname);
		}

		static ::System::Int32 getifaddrs(::System::IntPtr& ifap)
		{
			return ((::System::Int32(*)(::System::IntPtr&))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_UNIXNETWORKINTERFACEAPI_GETIFADDRS_OFFSET))(ifap);
		}

		static ::System::Void freeifaddrs(::System::IntPtr ifap)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_UNIXNETWORKINTERFACEAPI_FREEIFADDRS_OFFSET))(ifap);
		}
	};
}
