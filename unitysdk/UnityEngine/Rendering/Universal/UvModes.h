#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UvModes_TypeDefinitionIndex = 27721;

	enum class UvModes : ::System::Int32
	{
		Polar = 1,
		General = 0,
		GeneralNormalized = 2,
	};
}
