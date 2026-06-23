#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Sockets
{
	inline static constexpr unsigned int IPProtectionLevel_TypeDefinitionIndex = 3644;

	enum class IPProtectionLevel : ::System::Int32
	{
		Unspecified = -1,
		Unrestricted = 10,
		EdgeRestricted = 20,
		Restricted = 30,
	};
}
