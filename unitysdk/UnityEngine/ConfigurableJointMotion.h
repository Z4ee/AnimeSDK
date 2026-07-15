#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ConfigurableJointMotion_TypeDefinitionIndex = 5303;

	enum class ConfigurableJointMotion : ::System::Int32
	{
		Locked = 0,
		Limited = 1,
		Free = 2,
	};
}
