#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketOptionLevel_TypeDefinitionIndex = 2903;

	enum class SocketOptionLevel : ::System::Int32
	{
		Socket = 65535,
		IP = 0,
		IPv6 = 41,
		Tcp = 6,
		Udp = 17,
	};
}
