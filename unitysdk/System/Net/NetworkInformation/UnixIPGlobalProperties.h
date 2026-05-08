#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/CommonUnixIPGlobalProperties.h"

namespace System::Net { class IPEndPoint; }
namespace System::Net::NetworkInformation { class IPGlobalStatistics; }
namespace System::Net::NetworkInformation { class IcmpV4Statistics; }
namespace System::Net::NetworkInformation { class IcmpV6Statistics; }
namespace System::Net::NetworkInformation { class TcpConnectionInformation; }
namespace System::Net::NetworkInformation { class TcpStatistics; }
namespace System::Net::NetworkInformation { class UdpStatistics; }

#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES_GETACTIVETCPCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1A32D540)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES_GETACTIVETCPLISTENERS_OFFSET UNITYSDK_OFFSET(0x1A32D590)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES_GETACTIVEUDPLISTENERS_OFFSET UNITYSDK_OFFSET(0x1A32D5E0)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES_GETICMPV4STATISTICS_OFFSET UNITYSDK_OFFSET(0x1A32D630)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES_GETICMPV6STATISTICS_OFFSET UNITYSDK_OFFSET(0x1A32D680)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES_GETIPV4GLOBALSTATISTICS_OFFSET UNITYSDK_OFFSET(0x1A32D6D0)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES_GETIPV6GLOBALSTATISTICS_OFFSET UNITYSDK_OFFSET(0x1A32D720)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES_GETTCPIPV4STATISTICS_OFFSET UNITYSDK_OFFSET(0x1A32D770)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES_GETTCPIPV6STATISTICS_OFFSET UNITYSDK_OFFSET(0x1A32D7C0)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES_GETUDPIPV4STATISTICS_OFFSET UNITYSDK_OFFSET(0x1A32D810)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES_GETUDPIPV6STATISTICS_OFFSET UNITYSDK_OFFSET(0x1A32D860)
#define SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1A32D8B0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int UnixIPGlobalProperties_TypeDefinitionIndex = 3756;

	class UnixIPGlobalProperties : public ::System::Net::NetworkInformation::CommonUnixIPGlobalProperties
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Net::NetworkInformation::TcpConnectionInformation*>* GetActiveTcpConnections()
		{
			return ((::Il2CppArray<::System::Net::NetworkInformation::TcpConnectionInformation*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES_GETACTIVETCPCONNECTIONS_OFFSET))(this);
		}

		::Il2CppArray<::System::Net::IPEndPoint*>* GetActiveTcpListeners()
		{
			return ((::Il2CppArray<::System::Net::IPEndPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES_GETACTIVETCPLISTENERS_OFFSET))(this);
		}

		::Il2CppArray<::System::Net::IPEndPoint*>* GetActiveUdpListeners()
		{
			return ((::Il2CppArray<::System::Net::IPEndPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES_GETACTIVEUDPLISTENERS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IcmpV4Statistics* GetIcmpV4Statistics()
		{
			return ((::System::Net::NetworkInformation::IcmpV4Statistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES_GETICMPV4STATISTICS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IcmpV6Statistics* GetIcmpV6Statistics()
		{
			return ((::System::Net::NetworkInformation::IcmpV6Statistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES_GETICMPV6STATISTICS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IPGlobalStatistics* GetIPv4GlobalStatistics()
		{
			return ((::System::Net::NetworkInformation::IPGlobalStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES_GETIPV4GLOBALSTATISTICS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::IPGlobalStatistics* GetIPv6GlobalStatistics()
		{
			return ((::System::Net::NetworkInformation::IPGlobalStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES_GETIPV6GLOBALSTATISTICS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::TcpStatistics* GetTcpIPv4Statistics()
		{
			return ((::System::Net::NetworkInformation::TcpStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES_GETTCPIPV4STATISTICS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::TcpStatistics* GetTcpIPv6Statistics()
		{
			return ((::System::Net::NetworkInformation::TcpStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES_GETTCPIPV6STATISTICS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::UdpStatistics* GetUdpIPv4Statistics()
		{
			return ((::System::Net::NetworkInformation::UdpStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES_GETUDPIPV4STATISTICS_OFFSET))(this);
		}

		::System::Net::NetworkInformation::UdpStatistics* GetUdpIPv6Statistics()
		{
			return ((::System::Net::NetworkInformation::UdpStatistics*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_UNIXIPGLOBALPROPERTIES_GETUDPIPV6STATISTICS_OFFSET))(this);
		}
	};
}
