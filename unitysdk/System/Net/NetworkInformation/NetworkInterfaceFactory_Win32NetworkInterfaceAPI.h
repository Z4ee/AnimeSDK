#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterfaceFactory.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_IP_ADAPTER_ADDRESSES.h"

namespace System { class String; }
namespace System::Net { class IPAddress; }
namespace System::Net::NetworkInformation { class NetworkInterface; }

#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_WIN32NETWORKINTERFACEAPI_GETADAPTERSADDRESSES_1_OFFSET UNITYSDK_OFFSET(0x1C70DD90)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_WIN32NETWORKINTERFACEAPI_GETADAPTERSADDRESSES_OFFSET UNITYSDK_OFFSET(0x1C70DC20)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_WIN32NETWORKINTERFACEAPI_GETALLNETWORKINTERFACES_OFFSET UNITYSDK_OFFSET(0x1C70E0E0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_WIN32NETWORKINTERFACEAPI_GETBESTINTERFACEEX_OFFSET UNITYSDK_OFFSET(0x1C70DD00)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_WIN32NETWORKINTERFACEAPI_GETBESTINTERFACEFORADDRESS_OFFSET UNITYSDK_OFFSET(0x1C70E260)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_WIN32NETWORKINTERFACEAPI_GETLOOPBACKINTERFACEINDEX_OFFSET UNITYSDK_OFFSET(0x1C70E370)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_WIN32NETWORKINTERFACEAPI_GETNETMASK_OFFSET UNITYSDK_OFFSET(0x1C70E3D0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_WIN32NETWORKINTERFACEAPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1C70E420)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int NetworkInterfaceFactory_Win32NetworkInterfaceAPI_TypeDefinitionIndex = 3813;

	class NetworkInterfaceFactory_Win32NetworkInterfaceAPI : public ::System::Net::NetworkInformation::NetworkInterfaceFactory
	{
	public:
		// static const ::System::String* IPHLPAPI; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_WIN32NETWORKINTERFACEAPI__CTOR_OFFSET))(this);
		}

		static ::System::Int32 GetAdaptersAddresses(::System::UInt32 family, ::System::UInt32 flags, ::System::IntPtr reserved, ::System::IntPtr info, ::System::Int32& size)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::UInt32, ::System::IntPtr, ::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_WIN32NETWORKINTERFACEAPI_GETADAPTERSADDRESSES_OFFSET))(family, flags, reserved, info, size);
		}

		static ::System::UInt32 GetBestInterfaceEx(::Il2CppArray<::System::Byte>* ipAddress, ::System::Int32& index)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_WIN32NETWORKINTERFACEAPI_GETBESTINTERFACEEX_OFFSET))(ipAddress, index);
		}

		static ::Il2CppArray<::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES>* GetAdaptersAddresses_1()
		{
			return ((::Il2CppArray<::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_WIN32NETWORKINTERFACEAPI_GETADAPTERSADDRESSES_1_OFFSET))();
		}

		::Il2CppArray<::System::Net::NetworkInformation::NetworkInterface*>* GetAllNetworkInterfaces()
		{
			return ((::Il2CppArray<::System::Net::NetworkInformation::NetworkInterface*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_WIN32NETWORKINTERFACEAPI_GETALLNETWORKINTERFACES_OFFSET))(this);
		}

		static ::System::Int32 GetBestInterfaceForAddress(::System::Net::IPAddress* addr)
		{
			return ((::System::Int32(*)(::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_WIN32NETWORKINTERFACEAPI_GETBESTINTERFACEFORADDRESS_OFFSET))(addr);
		}

		::System::Int32 GetLoopbackInterfaceIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_WIN32NETWORKINTERFACEAPI_GETLOOPBACKINTERFACEINDEX_OFFSET))(this);
		}

		::System::Net::IPAddress* GetNetMask(::System::Net::IPAddress* address)
		{
			return ((::System::Net::IPAddress*(*)(::PVOID, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINTERFACEFACTORY_WIN32NETWORKINTERFACEAPI_GETNETMASK_OFFSET))(this, address);
		}
	};
}
