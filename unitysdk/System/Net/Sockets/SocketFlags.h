#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketFlags_TypeDefinitionIndex = 2902;

	enum class SocketFlags : ::System::Int32
	{
		None = 0,
		OutOfBand = 1,
		Peek = 2,
		DontRoute = 4,
		MaxIOVectorLength = 16,
		Truncated = 256,
		ControlDataTruncated = 512,
		Broadcast = 1024,
		Multicast = 2048,
		Partial = 32768,
	};
}
