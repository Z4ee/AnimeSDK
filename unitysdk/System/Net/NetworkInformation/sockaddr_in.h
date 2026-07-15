#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int sockaddr_in_TypeDefinitionIndex = 2940;

	struct alignas(4) sockaddr_in
	{
		::System::UInt16 sin_family; // 0x10
		::System::UInt16 sin_port; // 0x12
		::System::UInt32 sin_addr; // 0x14
	};
}
