#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::NetworkInformation::MacOsStructs
{
	inline static constexpr unsigned int in6_addr_TypeDefinitionIndex = 2966;

	struct alignas(8) in6_addr
	{
		::Il2CppArray<::System::Byte>* u6_addr8; // 0x10
	};
}
