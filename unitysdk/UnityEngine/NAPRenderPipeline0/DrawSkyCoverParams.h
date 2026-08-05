#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DrawSkyCoverParams_TypeDefinitionIndex = 5939;

	struct alignas(8) DrawSkyCoverParams
	{
		::System::Int32 HollowCoverMatID; // 0x10
		::System::Int32 HollowCoverMeshID; // 0x14
		::System::Single HollowCoverSize; // 0x18
		::UnityEngine::Material* HollowCoverMat; // 0x20
		::UnityEngine::Mesh* HollowCoverMesh; // 0x28
	};
}
