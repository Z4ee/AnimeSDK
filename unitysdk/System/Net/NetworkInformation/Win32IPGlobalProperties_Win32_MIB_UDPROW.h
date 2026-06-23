#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class IPEndPoint; }

#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_WIN32_MIB_UDPROW_GET_LOCALENDPOINT_OFFSET UNITYSDK_OFFSET(0x1C2EF1B0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_WIN32_MIB_UDPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2EF280)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32IPGlobalProperties_Win32_MIB_UDPROW_TypeDefinitionIndex = 3762;

	class Win32IPGlobalProperties_Win32_MIB_UDPROW : public ::System::Object
	{
	public:
		::System::UInt32 LocalAddr; // 0x10
		::System::UInt32 LocalPort; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_WIN32_MIB_UDPROW__CTOR_OFFSET))(this);
		}

		::System::Net::IPEndPoint* get_LocalEndPoint()
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_WIN32_MIB_UDPROW_GET_LOCALENDPOINT_OFFSET))(this);
		}
	};
}
