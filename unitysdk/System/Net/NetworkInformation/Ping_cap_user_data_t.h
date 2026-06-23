#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Ping_cap_user_data_t_TypeDefinitionIndex = 3820;

	struct alignas(4) Ping_cap_user_data_t
	{
		::System::UInt32 effective; // 0x10
		::System::UInt32 permitted; // 0x14
		::System::UInt32 inheritable; // 0x18
	};
}
