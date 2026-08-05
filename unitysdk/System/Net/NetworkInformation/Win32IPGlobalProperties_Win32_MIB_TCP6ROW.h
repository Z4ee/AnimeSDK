#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/TcpState.h"
#include "unitysdk/System/Net/NetworkInformation/Win32IPGlobalProperties_Win32_IN6_ADDR.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class IPEndPoint; }
namespace System::Net::NetworkInformation { class TcpConnectionInformation; }

#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_WIN32_MIB_TCP6ROW_GET_LOCALENDPOINT_OFFSET UNITYSDK_OFFSET(0x1CC1A0D0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_WIN32_MIB_TCP6ROW_GET_REMOTEENDPOINT_OFFSET UNITYSDK_OFFSET(0x1CC1A1C0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_WIN32_MIB_TCP6ROW_GET_TCPINFO_OFFSET UNITYSDK_OFFSET(0x1CC1A2B0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_WIN32_MIB_TCP6ROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC1A4C0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32IPGlobalProperties_Win32_MIB_TCP6ROW_TypeDefinitionIndex = 3761;

	class Win32IPGlobalProperties_Win32_MIB_TCP6ROW : public ::System::Object
	{
	public:
		::System::Net::NetworkInformation::TcpState State; // 0x10
		::System::Net::NetworkInformation::Win32IPGlobalProperties_Win32_IN6_ADDR LocalAddr; // 0x18
		::System::UInt32 LocalScopeId; // 0x20
		::System::UInt32 LocalPort; // 0x24
		::System::Net::NetworkInformation::Win32IPGlobalProperties_Win32_IN6_ADDR RemoteAddr; // 0x28
		::System::UInt32 RemoteScopeId; // 0x30
		::System::UInt32 RemotePort; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_WIN32_MIB_TCP6ROW__CTOR_OFFSET))(this);
		}

		::System::Net::IPEndPoint* get_LocalEndPoint()
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_WIN32_MIB_TCP6ROW_GET_LOCALENDPOINT_OFFSET))(this);
		}

		::System::Net::IPEndPoint* get_RemoteEndPoint()
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_WIN32_MIB_TCP6ROW_GET_REMOTEENDPOINT_OFFSET))(this);
		}

		::System::Net::NetworkInformation::TcpConnectionInformation* get_TcpInfo()
		{
			return ((::System::Net::NetworkInformation::TcpConnectionInformation*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32IPGLOBALPROPERTIES_WIN32_MIB_TCP6ROW_GET_TCPINFO_OFFSET))(this);
		}
	};
}
