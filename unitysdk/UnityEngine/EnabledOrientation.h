#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int EnabledOrientation_TypeDefinitionIndex = 3925;

	enum class EnabledOrientation : ::System::Int32
	{
		kAutorotateToPortrait = 1,
		kAutorotateToPortraitUpsideDown = 2,
		kAutorotateToLandscapeLeft = 4,
		kAutorotateToLandscapeRight = 8,
	};
}
