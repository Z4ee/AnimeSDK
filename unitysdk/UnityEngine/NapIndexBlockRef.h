#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int NapIndexBlockRef_TypeDefinitionIndex = 7680;

	struct alignas(8) NapIndexBlockRef
	{
		::System::UInt64 blockHashName; // 0x10
		::System::Byte location; // 0x18
	};
}
