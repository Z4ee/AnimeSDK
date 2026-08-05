#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VolumetricFogBlitOrder_TypeDefinitionIndex = 27817;

	enum class VolumetricFogBlitOrder : ::System::Int32
	{
		AfterAllTransparent = 2,
		AfterSceneFarTransparent = 1,
		BeforeAllTransparent = 0,
	};
}
