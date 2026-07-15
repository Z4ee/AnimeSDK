#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketShutdown_TypeDefinitionIndex = 2905;

	enum class SocketShutdown : ::System::Int32
	{
		Receive = 0,
		Send = 1,
		Both = 2,
	};
}
