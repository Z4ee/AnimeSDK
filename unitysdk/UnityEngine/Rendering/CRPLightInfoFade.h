#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPLightInfoFade_TypeDefinitionIndex = 4876;

	struct alignas(4) CRPLightInfoFade
	{
		::System::Single ShadowLightingFactor; // 0x10
	};
}
