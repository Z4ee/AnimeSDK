#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityChan
{
	inline static constexpr unsigned int SpringColliderType_TypeDefinitionIndex = 48142;

	enum class SpringColliderType : ::System::Int32
	{
		Sphere = 0,
		Capsule = 1,
	};
}
