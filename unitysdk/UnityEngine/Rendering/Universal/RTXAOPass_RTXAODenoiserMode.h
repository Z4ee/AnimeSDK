#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RTXAOPass_RTXAODenoiserMode_TypeDefinitionIndex = 26840;

	enum class RTXAOPass_RTXAODenoiserMode : ::System::Int32
	{
		Bilateral = 1,
		Standard = 0,
	};
}
