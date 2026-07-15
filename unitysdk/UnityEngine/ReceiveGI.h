#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ReceiveGI_TypeDefinitionIndex = 4150;

	enum class ReceiveGI : ::System::Int32
	{
		Lightmaps = 1,
		LightProbes = 2,
	};
}
