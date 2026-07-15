#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/VisibleLight.h"
#include "unitysdk/UnityEngine/Rendering/VisibleReflectionProbe.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CullingAllocationInfo_TypeDefinitionIndex = 4736;

	struct alignas(8) CullingAllocationInfo
	{
		::UnityEngine::Rendering::VisibleLight* visibleLightsPtr; // 0x10
		::UnityEngine::Rendering::VisibleLight* visibleOffscreenVertexLightsPtr; // 0x18
		::UnityEngine::Rendering::VisibleReflectionProbe* visibleReflectionProbesPtr; // 0x20
		::System::Int32 visibleLightCount; // 0x28
		::System::Int32 visibleOffscreenVertexLightCount; // 0x2C
		::System::Int32 visibleReflectionProbeCount; // 0x30
	};
}
