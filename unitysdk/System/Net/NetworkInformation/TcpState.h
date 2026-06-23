#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int TcpState_TypeDefinitionIndex = 3745;

	enum class TcpState : ::System::Int32
	{
		Unknown = 0,
		Closed = 1,
		Listen = 2,
		SynSent = 3,
		SynReceived = 4,
		Established = 5,
		FinWait1 = 6,
		FinWait2 = 7,
		CloseWait = 8,
		Closing = 9,
		LastAck = 10,
		TimeWait = 11,
		DeleteTcb = 12,
	};
}
