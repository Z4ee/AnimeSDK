#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int AstraFXResource_BufferInfo_TypeDefinitionIndex = 4080;

	struct alignas(4) AstraFXResource_BufferInfo
	{
		::System::Int32 count; // 0x10
		::System::Int32 stride; // 0x14
	};
}
