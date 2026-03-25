#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int RuntimeAreaLightShapeType_TypeDefinitionIndex = 3963;

	enum class RuntimeAreaLightShapeType : ::System::Int32
	{
		None = 0,
		Quad = 1,
		Disk = 2,
		Fast_Quad = 3,
		Linear = 4,
	};
}
