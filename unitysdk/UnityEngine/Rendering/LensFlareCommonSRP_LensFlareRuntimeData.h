#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::NAPRenderPipeline0 { class LensFlareComponentSRP; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LensFlareCommonSRP_LensFlareRuntimeData_TypeDefinitionIndex = 26960;

	struct alignas(8) LensFlareCommonSRP_LensFlareRuntimeData
	{
		::UnityEngine::NAPRenderPipeline0::LensFlareComponentSRP* component; // 0x10
		::System::Int32 bufferIndex; // 0x18
		::System::Boolean skipped; // 0x1C
	};
}
