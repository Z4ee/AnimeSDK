#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/BatchFilterSettings.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchDrawRange_TypeDefinitionIndex = 6220;

	struct alignas(4) BatchDrawRange
	{
		::System::UInt32 drawCommandsBegin; // 0x10
		::System::UInt32 drawCommandsCount; // 0x14
		::UnityEngine::Rendering::BatchFilterSettings filterSettings; // 0x18
	};
}
