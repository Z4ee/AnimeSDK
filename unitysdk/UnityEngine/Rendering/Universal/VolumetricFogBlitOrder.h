#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VolumetricFogBlitOrder_TypeDefinitionIndex = 26470;

	enum class VolumetricFogBlitOrder : ::System::Int32
	{
		BeforeAllTransparent = 0,
		AfterSceneFarTransparent = 1,
		AfterAllTransparent = 2,
	};
}
