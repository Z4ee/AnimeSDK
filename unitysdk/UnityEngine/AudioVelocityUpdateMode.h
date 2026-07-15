#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int AudioVelocityUpdateMode_TypeDefinitionIndex = 5188;

	enum class AudioVelocityUpdateMode : ::System::Int32
	{
		Auto = 0,
		Fixed = 1,
		Dynamic = 2,
	};
}
