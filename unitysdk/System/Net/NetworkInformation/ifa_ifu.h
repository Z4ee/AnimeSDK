#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int ifa_ifu_TypeDefinitionIndex = 2938;

	struct alignas(8) ifa_ifu
	{
		::System::IntPtr ifu_broadaddr; // 0x10
		::System::IntPtr ifu_dstaddr; // 0x10
	};
}
