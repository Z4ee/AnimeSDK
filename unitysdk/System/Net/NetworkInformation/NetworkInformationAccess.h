#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int NetworkInformationAccess_TypeDefinitionIndex = 3728;

	enum class NetworkInformationAccess : ::System::Int32
	{
		None = 0,
		Read = 1,
		Ping = 4,
	};
}
