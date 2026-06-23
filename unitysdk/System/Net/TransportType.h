#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int TransportType_TypeDefinitionIndex = 3335;

	enum class TransportType : ::System::Int32
	{
		Udp = 1,
		Connectionless = 1,
		Tcp = 2,
		ConnectionOriented = 2,
		All = 3,
	};
}
