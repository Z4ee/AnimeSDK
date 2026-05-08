#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RTXAOPass_RTXAODenoiserMode_TypeDefinitionIndex = 30213;

	enum class RTXAOPass_RTXAODenoiserMode : ::System::Int32
	{
		Standard = 0,
		Bilateral = 1,
	};
}
