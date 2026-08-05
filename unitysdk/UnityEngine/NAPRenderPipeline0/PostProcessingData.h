#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ColorGradingMode.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int PostProcessingData_TypeDefinitionIndex = 5949;

	struct alignas(4) PostProcessingData
	{
		::UnityEngine::NAPRenderPipeline0::ColorGradingMode gradingMode; // 0x10
		::System::Int32 lutSize; // 0x14
	};
}
