#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net
{
	inline static constexpr unsigned int hostent_TypeDefinitionIndex = 3326;

	struct alignas(8) hostent
	{
		::System::IntPtr h_name; // 0x10
		::System::IntPtr h_aliases; // 0x18
		::System::Int16 h_addrtype; // 0x20
		::System::Int16 h_length; // 0x22
		::System::IntPtr h_addr_list; // 0x28
	};
}
