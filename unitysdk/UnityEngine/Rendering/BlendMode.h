#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BlendMode_TypeDefinitionIndex = 4681;

	enum class BlendMode : ::System::Int32
	{
		Zero = 0,
		One = 1,
		DstColor = 2,
		SrcColor = 3,
		OneMinusDstColor = 4,
		SrcAlpha = 5,
		OneMinusSrcColor = 6,
		DstAlpha = 7,
		OneMinusDstAlpha = 8,
		SrcAlphaSaturate = 9,
		OneMinusSrcAlpha = 10,
	};
}
