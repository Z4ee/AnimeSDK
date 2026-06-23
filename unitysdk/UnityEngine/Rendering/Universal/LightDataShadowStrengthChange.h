#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightDataShadowStrengthChange_TypeDefinitionIndex = 26310;

	struct alignas(4) LightDataShadowStrengthChange
	{
		::System::Int32 index; // 0x10
		::System::Single shadowStrength; // 0x14
	};
}
