#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ReceiveGI_TypeDefinitionIndex = 3969;

	enum class ReceiveGI : ::System::Int32
	{
		Lightmaps = 1,
		LightProbes = 2,
	};
}
