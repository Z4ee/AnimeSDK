#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::InteropServices::ComTypes
{
	inline static constexpr unsigned int FILETIME_TypeDefinitionIndex = 1448;

	struct alignas(4) FILETIME
	{
		::System::Int32 dwLowDateTime; // 0x10
		::System::Int32 dwHighDateTime; // 0x14
	};
}
