#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ShapeType_TypeDefinitionIndex = 41628;

	enum class ShapeType : ::System::Int32
	{
		Cube = 0,
		Stair = 1,
		CurvedStair = 2,
		Prism = 3,
		Cylinder = 4,
		Plane = 5,
		Door = 6,
		Pipe = 7,
		Cone = 8,
		Sprite = 9,
		Arch = 10,
		Sphere = 11,
		Torus = 12,
	};
}
