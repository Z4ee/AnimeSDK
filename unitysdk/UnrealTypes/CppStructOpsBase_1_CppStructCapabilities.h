#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int CppStructOpsBase_1_CppStructCapabilities_TypeDefinitionIndex = 28319;

	template <typename T>
	struct CppStructOpsBase_1_CppStructCapabilities
	{
		::System::Boolean IsPlainOldData; // 0x0
		::System::Boolean ShouldClone; // 0x0
		::System::Boolean ShouldDispose; // 0x0
		::System::Boolean CanMove; // 0x0
		::System::Boolean CanZeroCreate; // 0x0
		::System::Boolean HasAllocator; // 0x0
	};
}
