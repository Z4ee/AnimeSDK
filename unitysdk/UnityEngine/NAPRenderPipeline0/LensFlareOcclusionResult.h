#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int LensFlareOcclusionResult_TypeDefinitionIndex = 18891;

	struct alignas(4) LensFlareOcclusionResult
	{
		::System::Single occlusion; // 0x10
		::UnityEngine::Vector3 align; // 0x14
	};
}
