#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ShaderGroupAlloc_TypeDefinitionIndex = 4245;

	struct alignas(4) ShaderGroupAlloc
	{
		::System::Int32 shaderID; // 0x10
		::System::Int32 groupCount; // 0x14
	};
}
