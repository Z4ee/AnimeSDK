#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BakedSettings_TypeDefinitionIndex = 4870;

	struct alignas(4) BakedSettings
	{
		::System::Boolean enable; // 0x10
		::System::Int32 lodBias; // 0x14
		::System::Int32 dynamicLocallightCount; // 0x18
		::System::Boolean useCSDecompress; // 0x1C
	};
}
