#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UvModes_TypeDefinitionIndex = 26240;

	enum class UvModes : ::System::Int32
	{
		GeneralNormalized = 2,
		Polar = 1,
		General = 0,
	};
}
