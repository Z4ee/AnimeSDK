#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketOperation_TypeDefinitionIndex = 2914;

	enum class SocketOperation : ::System::Int32
	{
		Accept = 0,
		Connect = 1,
		Receive = 2,
		ReceiveFrom = 3,
		Send = 4,
		SendTo = 5,
		RecvJustCallback = 6,
		SendJustCallback = 7,
		Disconnect = 8,
		AcceptReceive = 9,
		ReceiveGeneric = 10,
		SendGeneric = 11,
	};
}
