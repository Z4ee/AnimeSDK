#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/VisibleLight.h"

namespace UnityEngine { class Light; }
namespace UnityEngine::NAPRenderPipeline0 { class NativeAdditionalLightData_NativeSRP; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UniversalRenderPipeline_TempLightData_TypeDefinitionIndex = 27232;

	struct alignas(8) UniversalRenderPipeline_TempLightData
	{
		::UnityEngine::NAPRenderPipeline0::NativeAdditionalLightData_NativeSRP* extraLightData; // 0x10
		::UnityEngine::Rendering::VisibleLight visibleLight; // 0x18
		::UnityEngine::Light* light; // 0x90
	};
}
