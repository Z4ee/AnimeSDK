#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Rendering/BatchCullingOutputDrawCommands.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchCullingOutput_TypeDefinitionIndex = 6225;

	struct alignas(8) BatchCullingOutput
	{
		::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchCullingOutputDrawCommands> drawCommands; // 0x10
	};
}
