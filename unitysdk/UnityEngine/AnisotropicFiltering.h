#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int AnisotropicFiltering_TypeDefinitionIndex = 4153;

	enum class AnisotropicFiltering : ::System::Int32
	{
		Disable = 0,
		Enable = 1,
		ForceEnable = 2,
	};
}
