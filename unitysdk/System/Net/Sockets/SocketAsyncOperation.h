#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketAsyncOperation_TypeDefinitionIndex = 2900;

	enum class SocketAsyncOperation : ::System::Int32
	{
		None = 0,
		Accept = 1,
		Connect = 2,
		Disconnect = 3,
		Receive = 4,
		ReceiveFrom = 5,
		ReceiveMessageFrom = 6,
		Send = 7,
		SendPackets = 8,
		SendTo = 9,
	};
}
