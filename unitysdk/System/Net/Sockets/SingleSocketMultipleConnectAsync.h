#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Sockets/MultipleConnectAsync.h"

namespace System::Net { class IPAddress; }
namespace System::Net::Sockets { class Socket; }

#define SYSTEM_NET_SOCKETS_SINGLESOCKETMULTIPLECONNECTASYNC_GETNEXTADDRESS_OFFSET UNITYSDK_OFFSET(0x1C07E390)
#define SYSTEM_NET_SOCKETS_SINGLESOCKETMULTIPLECONNECTASYNC_ONFAIL_OFFSET UNITYSDK_OFFSET(0x1C07E430)
#define SYSTEM_NET_SOCKETS_SINGLESOCKETMULTIPLECONNECTASYNC_ONSUCCEED_OFFSET UNITYSDK_OFFSET(0x1C07E460)
#define SYSTEM_NET_SOCKETS_SINGLESOCKETMULTIPLECONNECTASYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C07E360)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SingleSocketMultipleConnectAsync_TypeDefinitionIndex = 3680;

	class SingleSocketMultipleConnectAsync : public ::System::Net::Sockets::MultipleConnectAsync
	{
	public:
		::System::Net::Sockets::Socket* socket; // 0x40
		::System::Boolean userSocket; // 0x48

		::System::Void _ctor(::System::Net::Sockets::Socket* socket, ::System::Boolean userSocket)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SINGLESOCKETMULTIPLECONNECTASYNC__CTOR_OFFSET))(this, socket, userSocket);
		}

		::System::Net::IPAddress* GetNextAddress(::System::Net::Sockets::Socket*& attemptSocket)
		{
			return ((::System::Net::IPAddress*(*)(::PVOID, ::System::Net::Sockets::Socket*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SINGLESOCKETMULTIPLECONNECTASYNC_GETNEXTADDRESS_OFFSET))(this, attemptSocket);
		}

		::System::Void OnFail(::System::Boolean abortive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SINGLESOCKETMULTIPLECONNECTASYNC_ONFAIL_OFFSET))(this, abortive);
		}

		::System::Void OnSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SINGLESOCKETMULTIPLECONNECTASYNC_ONSUCCEED_OFFSET))(this);
		}
	};
}
