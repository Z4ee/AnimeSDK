#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/IPAddressCollection.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_IP_ADDR_STRING.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_SOCKET_ADDRESS.h"

#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPADDRESSCOLLECTION_ADDSUBSEQUENTLYSTRING_OFFSET UNITYSDK_OFFSET(0x1C70E770)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPADDRESSCOLLECTION_FROMANYCAST_OFFSET UNITYSDK_OFFSET(0x1C70EB00)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPADDRESSCOLLECTION_FROMDNSSERVER_OFFSET UNITYSDK_OFFSET(0x1C70ECC0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPADDRESSCOLLECTION_FROMSOCKETADDRESS_OFFSET UNITYSDK_OFFSET(0x1C70EE80)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPADDRESSCOLLECTION_FROMWINSSERVER_OFFSET UNITYSDK_OFFSET(0x1C70EF60)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPADDRESSCOLLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C70F120)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPADDRESSCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C70E6C0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPADDRESSCOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C70E940)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPADDRESSCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C70E670)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32IPAddressCollection_TypeDefinitionIndex = 3753;

	class Win32IPAddressCollection : public ::System::Net::NetworkInformation::IPAddressCollection
	{
	public:
		static ::System::Net::NetworkInformation::Win32IPAddressCollection** StaticGet_Empty()
		{
			return (::System::Net::NetworkInformation::Win32IPAddressCollection**)Il2CppClass::FromTypeDefinitionIndex(Win32IPAddressCollection_TypeDefinitionIndex)->GetStaticField(0x2C70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPADDRESSCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::IntPtr>* heads)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::IntPtr>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPADDRESSCOLLECTION__CTOR_1_OFFSET))(this, heads);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Net::NetworkInformation::Win32_IP_ADDR_STRING>* al)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Net::NetworkInformation::Win32_IP_ADDR_STRING>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPADDRESSCOLLECTION__CTOR_2_OFFSET))(this, al);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPADDRESSCOLLECTION__CCTOR_OFFSET))();
		}

		static ::System::Net::NetworkInformation::Win32IPAddressCollection* FromAnycast(::System::IntPtr ptr)
		{
			return ((::System::Net::NetworkInformation::Win32IPAddressCollection*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPADDRESSCOLLECTION_FROMANYCAST_OFFSET))(ptr);
		}

		static ::System::Net::NetworkInformation::Win32IPAddressCollection* FromDnsServer(::System::IntPtr ptr)
		{
			return ((::System::Net::NetworkInformation::Win32IPAddressCollection*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPADDRESSCOLLECTION_FROMDNSSERVER_OFFSET))(ptr);
		}

		static ::System::Net::NetworkInformation::Win32IPAddressCollection* FromSocketAddress(::System::Net::NetworkInformation::Win32_SOCKET_ADDRESS addr)
		{
			return ((::System::Net::NetworkInformation::Win32IPAddressCollection*(*)(::System::Net::NetworkInformation::Win32_SOCKET_ADDRESS))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPADDRESSCOLLECTION_FROMSOCKETADDRESS_OFFSET))(addr);
		}

		static ::System::Net::NetworkInformation::Win32IPAddressCollection* FromWinsServer(::System::IntPtr ptr)
		{
			return ((::System::Net::NetworkInformation::Win32IPAddressCollection*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPADDRESSCOLLECTION_FROMWINSSERVER_OFFSET))(ptr);
		}

		::System::Void AddSubsequentlyString(::System::IntPtr head)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPADDRESSCOLLECTION_ADDSUBSEQUENTLYSTRING_OFFSET))(this, head);
		}
	};
}
