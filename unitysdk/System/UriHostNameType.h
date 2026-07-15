#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int UriHostNameType_TypeDefinitionIndex = 2469;

	enum class UriHostNameType : ::System::Int32
	{
		Unknown = 0,
		Basic = 1,
		Dns = 2,
		IPv4 = 3,
		IPv6 = 4,
	};
}
