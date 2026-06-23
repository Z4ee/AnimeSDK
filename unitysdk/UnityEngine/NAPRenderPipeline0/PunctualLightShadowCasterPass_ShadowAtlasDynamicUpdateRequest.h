#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Rendering/ShadowSplitData.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int PunctualLightShadowCasterPass_ShadowAtlasDynamicUpdateRequest_TypeDefinitionIndex = 5814;

	struct alignas(4) PunctualLightShadowCasterPass_ShadowAtlasDynamicUpdateRequest
	{
		::UnityEngine::Matrix4x4 view; // 0x10
		::UnityEngine::Matrix4x4 projection; // 0x50
		::UnityEngine::Rendering::ShadowSplitData splitData; // 0x90
		::System::Single slopScaleBias; // 0x1D8
		::System::Single normalBias; // 0x1DC
		::System::Int32 staticSlot; // 0x1E0
		::System::Int32 dynamicSlot; // 0x1E4
		::System::Int32 lightIndex; // 0x1E8
		::UnityEngine::Rect viewport; // 0x1EC
		::System::Boolean draw; // 0x1FC
	};
}
