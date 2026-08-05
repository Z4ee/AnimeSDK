#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NapCapsuleAoNodeData.h"

namespace UnityEngine { class Transform; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapCapsuleAoNodeBinding_TypeDefinitionIndex = 5959;

	struct alignas(8) NapCapsuleAoNodeBinding
	{
		::UnityEngine::Transform* transform; // 0x10
		::UnityEngine::NAPRenderPipeline0::NapCapsuleAoNodeData data; // 0x18
	};
}
