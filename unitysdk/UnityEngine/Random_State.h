#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int Random_State_TypeDefinitionIndex = 4238;

	struct alignas(4) Random_State
	{
		::System::Int32 s0; // 0x10
		::System::Int32 s1; // 0x14
		::System::Int32 s2; // 0x18
		::System::Int32 s3; // 0x1C
	};
}
