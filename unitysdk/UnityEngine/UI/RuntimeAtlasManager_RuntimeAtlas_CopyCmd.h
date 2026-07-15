#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace UnityEngine { class Texture; }

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RuntimeAtlasManager_RuntimeAtlas_CopyCmd_TypeDefinitionIndex = 5978;

	struct alignas(8) RuntimeAtlasManager_RuntimeAtlas_CopyCmd
	{
		::UnityEngine::Vector2Int dstPos; // 0x10
		::UnityEngine::Texture* srcTex; // 0x18
		::System::Int32 instanceID; // 0x20
	};
}
