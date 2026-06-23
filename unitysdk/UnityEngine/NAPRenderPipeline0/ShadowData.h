#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/OtherLightShadowQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/OtherLightShadowResolution.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ShadowQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ShadowTintQuality.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ShadowData_TypeDefinitionIndex = 5946;

	struct alignas(4) ShadowData
	{
		::System::Boolean supportsMainLightShadows; // 0x10
		::System::Int32 mainLightShadowmapWidth; // 0x14
		::System::Int32 mainLightShadowCascadesCount; // 0x18
		::System::Int32 mainLightShadowRenderLayerMask; // 0x1C
		::UnityEngine::Vector3 mainLightShadowCascadesSplit; // 0x20
		::UnityEngine::NAPRenderPipeline0::ShadowTintQuality mainLightShadowTintQuality; // 0x2C
		::System::Single mainLightShadowTintSourceAngle; // 0x30
		::UnityEngine::Color mainLightShadowTintColor; // 0x34
		::System::Boolean supportsAdditionalLightShadows; // 0x44
		::UnityEngine::NAPRenderPipeline0::ShadowQuality shadowQuality; // 0x48
		::System::Single shadowBlurRadius; // 0x4C
		::System::Int32 shadowmapDepthBufferBits; // 0x50
		::UnityEngine::NAPRenderPipeline0::OtherLightShadowQuality otherLightShadowQuality; // 0x54
		::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution otherLightShadowResolution; // 0x58
		::UnityEngine::Vector4 mainLightShadowBias; // 0x5C
		::System::Boolean perObjectShadow; // 0x6C
		::System::Int32 shadowSampleCount; // 0x70
	};
}
