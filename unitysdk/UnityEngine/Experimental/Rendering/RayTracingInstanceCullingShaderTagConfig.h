#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int RayTracingInstanceCullingShaderTagConfig_TypeDefinitionIndex = 6343;

	struct alignas(4) RayTracingInstanceCullingShaderTagConfig
	{
		::UnityEngine::Rendering::ShaderTagId tagId; // 0x10
		::UnityEngine::Rendering::ShaderTagId tagValueId; // 0x14
	};
}
