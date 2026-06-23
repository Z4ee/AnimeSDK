#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GPUGrassDrawData_TypeDefinitionIndex = 27225;

	struct alignas(8) GPUGrassDrawData
	{
		::UnityEngine::Mesh* mesh; // 0x10
		::UnityEngine::Material* mat; // 0x18
		::UnityEngine::ComputeBuffer* instanceBuffer; // 0x20
	};
}
