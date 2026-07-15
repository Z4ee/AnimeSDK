#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ComputeShader; }

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RuntimeAtlasManager_RuntimeAtlas_CopyShader_TypeDefinitionIndex = 5981;

	struct alignas(8) RuntimeAtlasManager_RuntimeAtlas_CopyShader
	{
		::UnityEngine::ComputeShader* shader1; // 0x10
		::UnityEngine::ComputeShader* shader2; // 0x18
		::System::Boolean pingpong; // 0x20
	};
}
