#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int EVRMouseButton_TypeDefinitionIndex = 37072;

	enum class EVRMouseButton : ::System::Int32
	{
		Left = 1,
		Right = 2,
		Middle = 4,
	};
}
