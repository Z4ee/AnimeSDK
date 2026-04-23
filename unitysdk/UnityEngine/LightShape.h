#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int LightShape_TypeDefinitionIndex = 3966;

	enum class LightShape : ::System::Int32
	{
		Cone = 0,
		Pyramid = 1,
		Box = 2,
	};
}
