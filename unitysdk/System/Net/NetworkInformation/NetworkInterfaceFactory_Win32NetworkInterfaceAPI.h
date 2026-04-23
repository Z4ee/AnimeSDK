#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterfaceFactory.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_IP_ADAPTER_ADDRESSES.h"

namespace System::Net::NetworkInformation { class NetworkInterface; }

#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_WIN32NETWORKINTERFACEAPI_GETADAPTERSADDRESSES_1_OFFSET UNITYSDK_OFFSET(0x1A1385A0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_WIN32NETWORKINTERFACEAPI_GETADAPTERSADDRESSES_OFFSET UNITYSDK_OFFSET(0x1A1384C0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_WIN32NETWORKINTERFACEAPI_GETALLNETWORKINTERFACES_OFFSET UNITYSDK_OFFSET(0x1A138960)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_WIN32NETWORKINTERFACEAPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A136760)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int NetworkInterfaceFactory_Win32NetworkInterfaceAPI_TypeDefinitionIndex = 2947;

	class NetworkInterfaceFactory_Win32NetworkInterfaceAPI : public ::System::Net::NetworkInformation::NetworkInterfaceFactory
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_WIN32NETWORKINTERFACEAPI__CTOR_OFFSET))(this);
		}

		static ::System::Int32 GetAdaptersAddresses(::System::UInt32 family, ::System::UInt32 flags, ::System::IntPtr reserved, ::System::IntPtr info, ::System::Int32& size)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::UInt32, ::System::IntPtr, ::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_WIN32NETWORKINTERFACEAPI_GETADAPTERSADDRESSES_OFFSET))(family, flags, reserved, info, size);
		}

		static ::Il2CppArray<::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES>* GetAdaptersAddresses_1()
		{
			return ((::Il2CppArray<::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_WIN32NETWORKINTERFACEAPI_GETADAPTERSADDRESSES_1_OFFSET))();
		}

		::Il2CppArray<::System::Net::NetworkInformation::NetworkInterface*>* GetAllNetworkInterfaces()
		{
			return ((::Il2CppArray<::System::Net::NetworkInformation::NetworkInterface*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_WIN32NETWORKINTERFACEAPI_GETALLNETWORKINTERFACES_OFFSET))(this);
		}
	};
}
