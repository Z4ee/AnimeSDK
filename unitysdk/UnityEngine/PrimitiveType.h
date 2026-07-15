#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int PrimitiveType_TypeDefinitionIndex = 4005;

	enum class PrimitiveType : ::System::Int32
	{
		Sphere = 0,
		Capsule = 1,
		Cylinder = 2,
		Cube = 3,
		Plane = 4,
		Quad = 5,
	};
}
