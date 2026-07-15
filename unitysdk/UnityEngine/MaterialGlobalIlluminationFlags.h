#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int MaterialGlobalIlluminationFlags_TypeDefinitionIndex = 4169;

	enum class MaterialGlobalIlluminationFlags : ::System::Int32
	{
		None = 0,
		RealtimeEmissive = 1,
		BakedEmissive = 2,
		EmissiveIsBlack = 4,
		AnyEmissive = 3,
	};
}
