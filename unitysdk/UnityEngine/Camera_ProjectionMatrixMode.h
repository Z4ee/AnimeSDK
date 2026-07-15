#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int Camera_ProjectionMatrixMode_TypeDefinitionIndex = 4031;

	enum class Camera_ProjectionMatrixMode : ::System::Int32
	{
		Explicit = 0,
		Implicit = 1,
		PhysicalPropertiesBased = 2,
	};
}
