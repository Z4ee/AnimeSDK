#pragma once
#include "unitysdk/unitysdk.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int StructFlags_TypeDefinitionIndex = 25222;

	enum class StructFlags : ::System::UInt32
	{
		NoFlags = 0x0,
		IsNative = 0x1,
		IsPlainOldData = 0x2,
		ShouldClone = 0x4,
		ShouldDispose = 0x8,
		CanMove = 0x10,
		CanZeroCreate = 0x20,
		HasAllocator = 0x40,
	};
}
