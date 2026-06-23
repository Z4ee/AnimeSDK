#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/Win32IPGlobalProperties_Win32_IN6_ADDR.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class IPEndPoint; }

#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_WIN32_MIB_UDP6ROW_GET_LOCALENDPOINT_OFFSET UNITYSDK_OFFSET(0x1C4A0430)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_WIN32_MIB_UDP6ROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A0520)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32IPGlobalProperties_Win32_MIB_UDP6ROW_TypeDefinitionIndex = 3763;

	class Win32IPGlobalProperties_Win32_MIB_UDP6ROW : public ::System::Object
	{
	public:
		::System::Net::NetworkInformation::Win32IPGlobalProperties_Win32_IN6_ADDR LocalAddr; // 0x10
		::System::UInt32 LocalScopeId; // 0x18
		::System::UInt32 LocalPort; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_WIN32_MIB_UDP6ROW__CTOR_OFFSET))(this);
		}

		::System::Net::IPEndPoint* get_LocalEndPoint()
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_WIN32_MIB_UDP6ROW_GET_LOCALENDPOINT_OFFSET))(this);
		}
	};
}
