#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int PrefixOrigin_TypeDefinitionIndex = 3737;

	enum class PrefixOrigin : ::System::Int32
	{
		Other = 0,
		Manual = 1,
		WellKnown = 2,
		Dhcp = 3,
		RouterAdvertisement = 4,
	};
}
