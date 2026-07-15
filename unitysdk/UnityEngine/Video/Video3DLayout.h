#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Video
{
	inline static constexpr unsigned int Video3DLayout_TypeDefinitionIndex = 6297;

	enum class Video3DLayout : ::System::Int32
	{
		No3D = 0,
		SideBySide3D = 1,
		OverUnder3D = 2,
	};
}
