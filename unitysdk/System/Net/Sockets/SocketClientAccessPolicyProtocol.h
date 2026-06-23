#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketClientAccessPolicyProtocol_TypeDefinitionIndex = 3663;

	enum class SocketClientAccessPolicyProtocol : ::System::Int32
	{
		Tcp = 0,
		Http = 1,
	};
}
