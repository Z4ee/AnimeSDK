#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int NetBiosNodeType_TypeDefinitionIndex = 2930;

	enum class NetBiosNodeType : ::System::Int32
	{
		Unknown = 0,
		Broadcast = 1,
		Peer2Peer = 2,
		Mixed = 4,
		Hybrid = 8,
	};
}
