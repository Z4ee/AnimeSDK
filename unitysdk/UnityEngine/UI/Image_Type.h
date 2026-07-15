#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Image_Type_TypeDefinitionIndex = 5890;

	enum class Image_Type : ::System::Int32
	{
		Simple = 0,
		Sliced = 1,
		Tiled = 2,
		Filled = 3,
	};
}
