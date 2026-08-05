#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RayTracingSubMeshFlags.h"

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int RayTracingSubMeshFlagsConfig_TypeDefinitionIndex = 6347;

	struct alignas(4) RayTracingSubMeshFlagsConfig
	{
		::UnityEngine::Experimental::Rendering::RayTracingSubMeshFlags opaqueMaterials; // 0x10
		::UnityEngine::Experimental::Rendering::RayTracingSubMeshFlags transparentMaterials; // 0x14
		::UnityEngine::Experimental::Rendering::RayTracingSubMeshFlags alphaTestedMaterials; // 0x18
	};
}
