#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::NetworkInformation::MacOsStructs
{
	inline static constexpr unsigned int sockaddr_TypeDefinitionIndex = 2964;

	struct alignas(1) sockaddr
	{
		::System::Byte sa_len; // 0x10
		::System::Byte sa_family; // 0x11
	};
}
