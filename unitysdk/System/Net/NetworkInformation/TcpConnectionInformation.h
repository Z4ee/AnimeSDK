#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkInformation/TcpState.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class IPEndPoint; }

#define SYSTEM_NET_NETWORKINFORMATION_TCPCONNECTIONINFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1EF2C0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int TcpConnectionInformation_TypeDefinitionIndex = 3745;

	class TcpConnectionInformation : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_TCPCONNECTIONINFORMATION__CTOR_OFFSET))(this);
		}
	};
}
