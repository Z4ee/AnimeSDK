#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::NAPRenderPipeline0 { class LensFlareDataElementSRP; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LensFlareCommonSRP_ComputeLocalSizeParamPack_TypeDefinitionIndex = 29792;

	struct alignas(8) LensFlareCommonSRP_ComputeLocalSizeParamPack
	{
		::UnityEngine::Vector2 screenPos; // 0x10
		::UnityEngine::Vector2 focus; // 0x18
		::UnityEngine::NAPRenderPipeline0::LensFlareDataElementSRP* element; // 0x20
		::System::Single position; // 0x28
		::System::Single globalCos0; // 0x2C
		::System::Single globalSin0; // 0x30
		::System::Single combinedScale; // 0x34
	};
}
