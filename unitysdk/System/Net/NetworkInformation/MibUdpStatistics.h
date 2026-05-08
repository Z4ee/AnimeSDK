#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/UdpStatistics.h"

namespace System { class String; }
namespace System::Collections::Specialized { class StringDictionary; }

#define SYSTEM_NET_NETWORKINFORMATION_MIBUDPSTATISTICS_GET_DATAGRAMSRECEIVED_OFFSET UNITYSDK_OFFSET(0x1B1EE2C0)
#define SYSTEM_NET_NETWORKINFORMATION_MIBUDPSTATISTICS_GET_DATAGRAMSSENT_OFFSET UNITYSDK_OFFSET(0x1B1EE370)
#define SYSTEM_NET_NETWORKINFORMATION_MIBUDPSTATISTICS_GET_INCOMINGDATAGRAMSDISCARDED_OFFSET UNITYSDK_OFFSET(0x1B1EE420)
#define SYSTEM_NET_NETWORKINFORMATION_MIBUDPSTATISTICS_GET_INCOMINGDATAGRAMSWITHERRORS_OFFSET UNITYSDK_OFFSET(0x1B1EE4D0)
#define SYSTEM_NET_NETWORKINFORMATION_MIBUDPSTATISTICS_GET_OFFSET UNITYSDK_OFFSET(0x1B1EE240)
#define SYSTEM_NET_NETWORKINFORMATION_MIBUDPSTATISTICS_GET_UDPLISTENERS_OFFSET UNITYSDK_OFFSET(0x1B1EE580)
#define SYSTEM_NET_NETWORKINFORMATION_MIBUDPSTATISTICS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1EE230)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int MibUdpStatistics_TypeDefinitionIndex = 3830;

	class MibUdpStatistics : public ::System::Net::NetworkInformation::UdpStatistics
	{
	public:
		::System::Collections::Specialized::StringDictionary* dic; // 0x10

		::System::Void _ctor(::System::Collections::Specialized::StringDictionary* dic)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::StringDictionary*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBUDPSTATISTICS__CTOR_OFFSET))(this, dic);
		}

		::System::Int64 Get(::System::String* name)
		{
			return ((::System::Int64(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBUDPSTATISTICS_GET_OFFSET))(this, name);
		}

		::System::Int64 get_DatagramsReceived()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBUDPSTATISTICS_GET_DATAGRAMSRECEIVED_OFFSET))(this);
		}

		::System::Int64 get_DatagramsSent()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBUDPSTATISTICS_GET_DATAGRAMSSENT_OFFSET))(this);
		}

		::System::Int64 get_IncomingDatagramsDiscarded()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBUDPSTATISTICS_GET_INCOMINGDATAGRAMSDISCARDED_OFFSET))(this);
		}

		::System::Int64 get_IncomingDatagramsWithErrors()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBUDPSTATISTICS_GET_INCOMINGDATAGRAMSWITHERRORS_OFFSET))(this);
		}

		::System::Int32 get_UdpListeners()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_MIBUDPSTATISTICS_GET_UDPLISTENERS_OFFSET))(this);
		}
	};
}
