#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/UdpStatistics.h"
#include "unitysdk/System/Net/NetworkInformation/Win32_MIB_UDPSTATS.h"

#define SYSTEM_NET_NETWORKINFORMATION_WIN32UDPSTATISTICS_GET_DATAGRAMSRECEIVED_OFFSET UNITYSDK_OFFSET(0x1DAC9010)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32UDPSTATISTICS_GET_DATAGRAMSSENT_OFFSET UNITYSDK_OFFSET(0x1DAC9020)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32UDPSTATISTICS_GET_INCOMINGDATAGRAMSDISCARDED_OFFSET UNITYSDK_OFFSET(0x1DAC9030)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32UDPSTATISTICS_GET_INCOMINGDATAGRAMSWITHERRORS_OFFSET UNITYSDK_OFFSET(0x1DAC9040)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32UDPSTATISTICS_GET_UDPLISTENERS_OFFSET UNITYSDK_OFFSET(0x1DAC9050)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32UDPSTATISTICS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC9000)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32UdpStatistics_TypeDefinitionIndex = 3830;

	class Win32UdpStatistics : public ::System::Net::NetworkInformation::UdpStatistics
	{
	public:
		::System::Net::NetworkInformation::Win32_MIB_UDPSTATS info; // 0x10

		::System::Void _ctor(::System::Net::NetworkInformation::Win32_MIB_UDPSTATS info)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkInformation::Win32_MIB_UDPSTATS))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32UDPSTATISTICS__CTOR_OFFSET))(this, info);
		}

		::System::Int64 get_DatagramsReceived()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32UDPSTATISTICS_GET_DATAGRAMSRECEIVED_OFFSET))(this);
		}

		::System::Int64 get_DatagramsSent()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32UDPSTATISTICS_GET_DATAGRAMSSENT_OFFSET))(this);
		}

		::System::Int64 get_IncomingDatagramsDiscarded()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32UDPSTATISTICS_GET_INCOMINGDATAGRAMSDISCARDED_OFFSET))(this);
		}

		::System::Int64 get_IncomingDatagramsWithErrors()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32UDPSTATISTICS_GET_INCOMINGDATAGRAMSWITHERRORS_OFFSET))(this);
		}

		::System::Int32 get_UdpListeners()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32UDPSTATISTICS_GET_UDPLISTENERS_OFFSET))(this);
		}
	};
}
