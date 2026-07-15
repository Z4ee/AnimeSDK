#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Rendering/BatchVisibility.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchRendererCullingOutput_TypeDefinitionIndex = 4722;

	struct alignas(8) BatchRendererCullingOutput
	{
		::Unity::Jobs::JobHandle cullingJobsFence; // 0x10
		::UnityEngine::Plane* cullingPlanes; // 0x20
		::UnityEngine::Rendering::BatchVisibility* batchVisibility; // 0x28
		::System::Int32* visibleIndices; // 0x30
		::System::Int32 cullingPlanesCount; // 0x38
		::System::Int32 batchVisibilityCount; // 0x3C
		::System::Int32 visibleIndicesCount; // 0x40
	};
}
