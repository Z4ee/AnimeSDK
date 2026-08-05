#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/TcpState.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class IPEndPoint; }
namespace System::Net::NetworkInformation { class TcpConnectionInformation; }

#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_WIN32_MIB_TCPROW_GET_LOCALENDPOINT_OFFSET UNITYSDK_OFFSET(0x1C70F240)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_WIN32_MIB_TCPROW_GET_REMOTEENDPOINT_OFFSET UNITYSDK_OFFSET(0x1C70F310)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_WIN32_MIB_TCPROW_GET_TCPINFO_OFFSET UNITYSDK_OFFSET(0x1C70F3E0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_WIN32_MIB_TCPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C70F5A0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32IPGlobalProperties_Win32_MIB_TCPROW_TypeDefinitionIndex = 3760;

	class Win32IPGlobalProperties_Win32_MIB_TCPROW : public ::System::Object
	{
	public:
		::System::Net::NetworkInformation::TcpState State; // 0x10
		::System::UInt32 LocalAddr; // 0x14
		::System::UInt32 LocalPort; // 0x18
		::System::UInt32 RemoteAddr; // 0x1C
		::System::UInt32 RemotePort; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_WIN32_MIB_TCPROW__CTOR_OFFSET))(this);
		}

		::System::Net::IPEndPoint* get_LocalEndPoint()
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_WIN32_MIB_TCPROW_GET_LOCALENDPOINT_OFFSET))(this);
		}

		::System::Net::IPEndPoint* get_RemoteEndPoint()
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_WIN32_MIB_TCPROW_GET_REMOTEENDPOINT_OFFSET))(this);
		}

		::System::Net::NetworkInformation::TcpConnectionInformation* get_TcpInfo()
		{
			return ((::System::Net::NetworkInformation::TcpConnectionInformation*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_WIN32_MIB_TCPROW_GET_TCPINFO_OFFSET))(this);
		}
	};
}
