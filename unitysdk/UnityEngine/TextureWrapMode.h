#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int TextureWrapMode_TypeDefinitionIndex = 4159;

	enum class TextureWrapMode : ::System::Int32
	{
		Repeat = 0,
		Clamp = 1,
		Mirror = 2,
		MirrorOnce = 3,
	};
}
