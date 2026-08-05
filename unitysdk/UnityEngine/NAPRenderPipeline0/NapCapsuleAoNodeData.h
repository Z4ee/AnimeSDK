#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NApCapsuleAODirection.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapCapsuleAoNodeData_TypeDefinitionIndex = 5958;

	struct alignas(4) NapCapsuleAoNodeData
	{
		::UnityEngine::NAPRenderPipeline0::NApCapsuleAODirection direction; // 0x10
		::UnityEngine::Vector3 center; // 0x14
		::System::Single radius; // 0x20
		::System::Single height; // 0x24
	};
}
