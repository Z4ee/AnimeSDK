#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketType_TypeDefinitionIndex = 2906;

	enum class SocketType : ::System::Int32
	{
		Stream = 1,
		Dgram = 2,
		Raw = 3,
		Rdm = 4,
		Seqpacket = 5,
		Unknown = -1,
	};
}
