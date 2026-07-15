#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int LightShadowCasterMode_TypeDefinitionIndex = 4133;

	enum class LightShadowCasterMode : ::System::Int32
	{
		Default = 0,
		NonLightmappedOnly = 1,
		Everything = 2,
	};
}
