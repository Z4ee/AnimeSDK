#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/IPv6InterfaceProperties.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_MIB_IFROW.h"

#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPV6INTERFACEPROPERTIES_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1E28CA50)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPV6INTERFACEPROPERTIES_GET_MTU_OFFSET UNITYSDK_OFFSET(0x1E28CA60)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPV6INTERFACEPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1E28CA00)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32IPv6InterfaceProperties_TypeDefinitionIndex = 3779;

	class Win32IPv6InterfaceProperties : public ::System::Net::NetworkInformation::IPv6InterfaceProperties
	{
	public:
		::System::Net::NetworkInformation::Win32_MIB_IFROW mib; // 0x10

		::System::Void _ctor(::System::Net::NetworkInformation::Win32_MIB_IFROW mib)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::Win32_MIB_IFROW))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPV6INTERFACEPROPERTIES__CTOR_OFFSET))(this, mib);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPV6INTERFACEPROPERTIES_GET_INDEX_OFFSET))(this);
		}

		::System::Int32 get_Mtu()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPV6INTERFACEPROPERTIES_GET_MTU_OFFSET))(this);
		}
	};
}
