#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UvModes_TypeDefinitionIndex = 30160;

	enum class UvModes : ::System::Int32
	{
		General = 0,
		Polar = 1,
		GeneralNormalized = 2,
	};
}
