#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderPipelineVersion_TypeDefinitionIndex = 29798;

	enum class RenderPipelineVersion : ::System::Int32
	{
		NotSet = -1,
		CB3 = 0,
		OB1_0 = 1,
		OB1_2 = 2,
		OB1_3 = 3,
		OB1_4 = 4,
		OB1_5 = 5,
		OB2_0 = 6,
		ClientCG = 9999,
	};
}
