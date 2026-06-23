#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int MacOsInterfaceFlags_TypeDefinitionIndex = 3797;

	enum class MacOsInterfaceFlags : ::System::Int32
	{
		IFF_UP = 1,
		IFF_BROADCAST = 2,
		IFF_DEBUG = 4,
		IFF_LOOPBACK = 8,
		IFF_POINTOPOINT = 16,
		IFF_NOTRAILERS = 32,
		IFF_RUNNING = 64,
		IFF_NOARP = 128,
		IFF_PROMISC = 256,
		IFF_ALLMULTI = 512,
		IFF_OACTIVE = 1024,
		IFF_SIMPLEX = 2048,
		IFF_LINK0 = 4096,
		IFF_LINK1 = 8192,
		IFF_LINK2 = 16384,
		IFF_MULTICAST = 32768,
	};
}
