#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int TouchType_TypeDefinitionIndex = 5257;

	enum class TouchType : ::System::Int32
	{
		Direct = 0,
		Indirect = 1,
		Stylus = 2,
	};
}
