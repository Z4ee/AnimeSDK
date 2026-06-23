#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int StartIPOptions_TypeDefinitionIndex = 3723;

	enum class StartIPOptions : ::System::Int32
	{
		Both = 3,
		None = 0,
		StartIPv4 = 1,
		StartIPv6 = 2,
	};
}
