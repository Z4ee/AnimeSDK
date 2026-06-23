#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Sockets
{
	inline static constexpr unsigned int MultipleConnectAsync_State_TypeDefinitionIndex = 3679;

	enum class MultipleConnectAsync_State : ::System::Int32
	{
		NotStarted = 0,
		DnsQuery = 1,
		ConnectAttempt = 2,
		Completed = 3,
		Canceled = 4,
	};
}
