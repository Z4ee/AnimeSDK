#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int FSRUpSampleMode_TypeDefinitionIndex = 5874;

	enum class FSRUpSampleMode : ::System::Int32
	{
		NoUpSample = 0,
		AfterDOF = 1,
		AfterUberPass = 2,
	};
}
