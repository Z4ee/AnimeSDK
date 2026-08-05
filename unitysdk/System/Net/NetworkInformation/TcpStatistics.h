#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_NETWORKINFORMATION_TCPSTATISTICS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC1A0C0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int TcpStatistics_TypeDefinitionIndex = 3746;

	class TcpStatistics : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_TCPSTATISTICS__CTOR_OFFSET))(this);
		}
	};
}
