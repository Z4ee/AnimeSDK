#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/VisibleLight.h"
#include "unitysdk/UnityEngine/Rendering/VisibleReflectionProbe.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CullingAllocationInfo_TypeDefinitionIndex = 6242;

	struct alignas(8) CullingAllocationInfo
	{
		::UnityEngine::Rendering::VisibleLight* visibleLightsPtr; // 0x10
		::UnityEngine::Rendering::VisibleLight* visibleOffscreenVertexLightsPtr; // 0x18
		::UnityEngine::Rendering::VisibleReflectionProbe* visibleReflectionProbesPtr; // 0x20
		::System::UInt32* localShadowCacheStaticUpdateRequestsPtr; // 0x28
		::System::UInt32* localShadowCacheDynamicUpdateRequestsPtr; // 0x30
		::System::UInt32* localShadowCacheShadowedLightsPtr; // 0x38
		::System::Int32 visibleLightCount; // 0x40
		::System::Int32 visibleOffscreenVertexLightCount; // 0x44
		::System::Int32 visibleReflectionProbeCount; // 0x48
		::System::Int32 localShadowCacheStaticUpdateRequestsWords; // 0x4C
		::System::Int32 localShadowCacheDynamicUpdateRequestsWords; // 0x50
		::System::Int32 localShadowCacheShadowedLightsWords; // 0x54
	};
}
