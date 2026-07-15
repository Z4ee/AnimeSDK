#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RuntimeAtlasManager_RuntimeAtlas_ClearCmd_TypeDefinitionIndex = 5979;

	struct alignas(4) RuntimeAtlasManager_RuntimeAtlas_ClearCmd
	{
		::UnityEngine::Vector2Int dstPos; // 0x10
		::System::Int32 blockSize; // 0x18
	};
}
