#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int LODFadeMode_TypeDefinitionIndex = 4178;

	enum class LODFadeMode : ::System::Int32
	{
		None = 0,
		CrossFade = 1,
		SpeedTree = 2,
	};
}
