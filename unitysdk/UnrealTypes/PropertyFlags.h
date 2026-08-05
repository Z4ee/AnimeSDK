#pragma once
#include "unitysdk/unitysdk.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int PropertyFlags_TypeDefinitionIndex = 28363;

	enum class PropertyFlags : ::System::UInt32
	{
		None = 0x0,
		Edit = 0x1,
		IsPlainOldData = 0x2,
		CanZeroCreate = 0x4,
	};
}
