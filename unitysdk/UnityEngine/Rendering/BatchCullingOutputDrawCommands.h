#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/BatchDrawCommand.h"
#include "unitysdk/UnityEngine/Rendering/BatchDrawRange.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchCullingOutputDrawCommands_TypeDefinitionIndex = 6217;

	struct alignas(8) BatchCullingOutputDrawCommands
	{
		::UnityEngine::Rendering::BatchDrawCommand* drawCommands; // 0x10
		::System::Int32* visibleInstances; // 0x18
		::UnityEngine::Rendering::BatchDrawRange* drawRanges; // 0x20
		::System::Single* instanceSortingPositions; // 0x28
		::System::Int32* drawCommandPickingInstanceIDs; // 0x30
		::System::Int32 drawCommandCount; // 0x38
		::System::Int32 visibleInstanceCount; // 0x3C
		::System::Int32 drawRangeCount; // 0x40
		::System::Int32 instanceSortingPositionFloatCount; // 0x44
	};
}
