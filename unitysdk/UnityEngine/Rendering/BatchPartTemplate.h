#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchPartTemplate_TypeDefinitionIndex = 4785;

	struct alignas(8) BatchPartTemplate
	{
		::UnityEngine::Mesh* skinmesh; // 0x10
		::UnityEngine::Material* material; // 0x18
	};
}
