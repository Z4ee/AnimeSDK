#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int EColorSpace_TypeDefinitionIndex = 37060;

	enum class EColorSpace : ::System::Int32
	{
		Auto = 0,
		Gamma = 1,
		Linear = 2,
	};
}
