#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int ScopeLevel_TypeDefinitionIndex = 3738;

	enum class ScopeLevel : ::System::Int32
	{
		None = 0,
		Interface = 1,
		Link = 2,
		Subnet = 3,
		Admin = 4,
		Site = 5,
		Organization = 8,
		Global = 14,
	};
}
