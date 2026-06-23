#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Ping_cap_user_header_t_TypeDefinitionIndex = 3819;

	struct alignas(4) Ping_cap_user_header_t
	{
		::System::UInt32 version; // 0x10
		::System::Int32 pid; // 0x14
	};
}
