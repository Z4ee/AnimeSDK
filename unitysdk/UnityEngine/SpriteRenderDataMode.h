#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int SpriteRenderDataMode_TypeDefinitionIndex = 4223;

	enum class SpriteRenderDataMode : ::System::Int32
	{
		SpriteRenderDataModeAutoDetect = 0,
		SpriteRenderDataModeAtlas = 1,
		SpriteRenderDataModeNotAtlas = 2,
	};
}
