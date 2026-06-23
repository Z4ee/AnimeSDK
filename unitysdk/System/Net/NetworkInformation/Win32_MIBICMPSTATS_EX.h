#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32_MIBICMPSTATS_EX_TypeDefinitionIndex = 3788;

	struct alignas(8) Win32_MIBICMPSTATS_EX
	{
		::System::UInt32 Msgs; // 0x10
		::System::UInt32 Errors; // 0x14
		::Il2CppArray<::System::UInt32>* Counts; // 0x18
	};
}
