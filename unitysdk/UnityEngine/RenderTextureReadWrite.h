#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int RenderTextureReadWrite_TypeDefinitionIndex = 4166;

	enum class RenderTextureReadWrite : ::System::Int32
	{
		Default = 0,
		Linear = 1,
		sRGB = 2,
	};
}
