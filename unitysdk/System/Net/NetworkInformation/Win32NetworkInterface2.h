#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterface.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterfaceComponent.h"
#include "unitysdk/System/Net/NetworkInformation/NetworkInterfaceType.h"
#include "unitysdk/System/Net/NetworkInformation/OperationalStatus.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_IP_ADAPTER_ADDRESSES.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_IP_ADAPTER_INFO.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_MIB_IFROW.h"

namespace System { class String; }
namespace System::Net::NetworkInformation { class IPInterfaceProperties; }
namespace System::Net::NetworkInformation { class IPv4InterfaceStatistics; }
namespace System::Net::NetworkInformation { class PhysicalAddress; }
namespace System::Net::NetworkInformation { class Win32IPv4InterfaceStatistics; }

#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GETADAPTERSINFO_1_OFFSET UNITYSDK_OFFSET(0x1C4A11F0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GETADAPTERSINFO_OFFSET UNITYSDK_OFFSET(0x1C4A0FA0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GETIFENTRY_OFFSET UNITYSDK_OFFSET(0x1C4A1070)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GETIPPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C4A1820)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GETIPV4STATISTICS_OFFSET UNITYSDK_OFFSET(0x1C4A1830)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GETPHYSICALADDRESS_OFFSET UNITYSDK_OFFSET(0x1C4A1840)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1C4A18F0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C4A1900)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GET_ISRECEIVEONLY_OFFSET UNITYSDK_OFFSET(0x1C4A1910)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C4A1920)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GET_NETWORKINTERFACETYPE_OFFSET UNITYSDK_OFFSET(0x1C4A1930)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GET_OPERATIONALSTATUS_OFFSET UNITYSDK_OFFSET(0x1C4A1940)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x1C4A1950)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GET_SUPPORTSMULTICAST_OFFSET UNITYSDK_OFFSET(0x1C4A1970)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_SUPPORTS_OFFSET UNITYSDK_OFFSET(0x1C4A18C0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A14E0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32NetworkInterface2_TypeDefinitionIndex = 3817;

	class Win32NetworkInterface2 : public ::System::Net::NetworkInformation::NetworkInterface
	{
	public:
		::System::Net::NetworkInformation::IPInterfaceProperties* ip_if_props; // 0x10
		::System::Net::NetworkInformation::Win32_MIB_IFROW mib4; // 0x18
		::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES addr; // 0x88
		::System::Net::NetworkInformation::Win32IPv4InterfaceStatistics* ip4stats; // 0x190
		::System::Net::NetworkInformation::Win32_MIB_IFROW mib6; // 0x198

		::System::Void _ctor(::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES addr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2__CTOR_OFFSET))(this, addr);
		}

		static ::System::Int32 GetAdaptersInfo(::System::IntPtr info, ::System::Int32& size)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GETADAPTERSINFO_OFFSET))(info, size);
		}

		static ::System::Int32 GetIfEntry(::System::Net::NetworkInformation::Win32_MIB_IFROW& row)
		{
			return ((::System::Int32(*)(::System::Net::NetworkInformation::Win32_MIB_IFROW&))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GETIFENTRY_OFFSET))(row);
		}

		static ::Il2CppArray<::System::Net::NetworkInformation::Win32_IP_ADAPTER_INFO>* GetAdaptersInfo_1()
		{
			return ((::Il2CppArray<::System::Net::NetworkInformation::Win32_IP_ADAPTER_INFO>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GETADAPTERSINFO_1_OFFSET))();
		}

		::System::Net::NetworkInformation::IPInterfaceProperties* GetIPProperties()
		{
			return ((::System::Net::NetworkInformation::IPInterfaceProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GETIPPROPERTIES_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IPv4InterfaceStatistics* GetIPv4Statistics()
		{
			return ((::System::Net::NetworkInformation::IPv4InterfaceStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GETIPV4STATISTICS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::PhysicalAddress* GetPhysicalAddress()
		{
			return ((::System::Net::NetworkInformation::PhysicalAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GETPHYSICALADDRESS_OFFSET))(this);
		}

		::System::Boolean Supports(::System::Net::NetworkInformation::NetworkInterfaceComponent networkInterfaceComponent)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::NetworkInformation::NetworkInterfaceComponent))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_SUPPORTS_OFFSET))(this, networkInterfaceComponent);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::String* get_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GET_ID_OFFSET))(this);
		}

		::System::Boolean get_IsReceiveOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GET_ISRECEIVEONLY_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GET_NAME_OFFSET))(this);
		}

		::System::Net::NetworkInformation::NetworkInterfaceType get_NetworkInterfaceType()
		{
			return ((::System::Net::NetworkInformation::NetworkInterfaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GET_NETWORKINTERFACETYPE_OFFSET))(this);
		}

		::System::Net::NetworkInformation::OperationalStatus get_OperationalStatus()
		{
			return ((::System::Net::NetworkInformation::OperationalStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GET_OPERATIONALSTATUS_OFFSET))(this);
		}

		::System::Int64 get_Speed()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GET_SPEED_OFFSET))(this);
		}

		::System::Boolean get_SupportsMulticast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE2_GET_SUPPORTSMULTICAST_OFFSET))(this);
		}
	};
}
