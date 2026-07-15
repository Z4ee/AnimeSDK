#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int AspectRatioMode_TypeDefinitionIndex = 42479;

	enum class AspectRatioMode : ::System::Int32
	{
		CurrentResolution = 0,
		DefaultResolution = 1,
		CameraAperture = 2,
	};
}
