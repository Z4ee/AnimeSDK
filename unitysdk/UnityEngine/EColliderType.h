#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int EColliderType_TypeDefinitionIndex = 7713;

	enum class EColliderType : ::System::Int32
	{
		None = 0,
		Box = 1,
		Sphere = 2,
		FanCylinder = 3,
		Capsule = 4,
		DynamicObject = 5,
		Cylinder = 6,
	};
}
