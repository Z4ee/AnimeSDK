#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DynamicResolutionType_TypeDefinitionIndex = 33678;

	enum class DynamicResolutionType : ::System::Byte
	{
		Software = 0x0,
		Hardware = 0x1,
	};
}
