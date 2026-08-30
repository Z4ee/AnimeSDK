#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int LightmapsMode_TypeDefinitionIndex = 4178;

	enum class LightmapsMode : ::System::Int32
	{
		NonDirectional = 0,
		CombinedDirectional = 1,
	};
}
