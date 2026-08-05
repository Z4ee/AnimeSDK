#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Sockets/MultipleConnectAsync.h"
#include "unitysdk/System/Net/Sockets/ProtocolType.h"
#include "unitysdk/System/Net/Sockets/SocketType.h"

namespace System::Net { class IPAddress; }
namespace System::Net::Sockets { class Socket; }

#define SYSTEM_NET_SOCKETS_MULTIPLESOCKETMULTIPLECONNECTASYNC_GETNEXTADDRESS_OFFSET UNITYSDK_OFFSET(0x1C8821D0)
#define SYSTEM_NET_SOCKETS_MULTIPLESOCKETMULTIPLECONNECTASYNC_ONFAIL_OFFSET UNITYSDK_OFFSET(0x1C8822D0)
#define SYSTEM_NET_SOCKETS_MULTIPLESOCKETMULTIPLECONNECTASYNC_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x1C882280)
#define SYSTEM_NET_SOCKETS_MULTIPLESOCKETMULTIPLECONNECTASYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C881FF0)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int MultipleSocketMultipleConnectAsync_TypeDefinitionIndex = 3681;

	class MultipleSocketMultipleConnectAsync : public ::System::Net::Sockets::MultipleConnectAsync
	{
	public:
		::System::Net::Sockets::Socket* socket6; // 0x40
		::System::Net::Sockets::Socket* socket4; // 0x48

		::System::Void _ctor(::System::Net::Sockets::SocketType socketType, ::System::Net::Sockets::ProtocolType protocolType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::SocketType, ::System::Net::Sockets::ProtocolType))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_MULTIPLESOCKETMULTIPLECONNECTASYNC__CTOR_OFFSET))(this, socketType, protocolType);
		}

		::System::Net::IPAddress* GetNextAddress(::System::Net::Sockets::Socket*& attemptSocket)
		{
			return ((::System::Net::IPAddress*(*)(::PVOID, ::System::Net::Sockets::Socket*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_MULTIPLESOCKETMULTIPLECONNECTASYNC_GETNEXTADDRESS_OFFSET))(this, attemptSocket);
		}

		::System::Void OnSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_MULTIPLESOCKETMULTIPLECONNECTASYNC_ONSUCCEED_OFFSET))(this);
		}

		::System::Void OnFail(::System::Boolean abortive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_MULTIPLESOCKETMULTIPLECONNECTASYNC_ONFAIL_OFFSET))(this, abortive);
		}
	};
}
