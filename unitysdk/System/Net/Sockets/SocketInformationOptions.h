#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketInformationOptions_TypeDefinitionIndex = 3667;

	enum class SocketInformationOptions : ::System::Int32
	{
		NonBlocking = 1,
		Connected = 2,
		Listening = 4,
		UseOnlyOverlappedIO = 8,
	};
}
