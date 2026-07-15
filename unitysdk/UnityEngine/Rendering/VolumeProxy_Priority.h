#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeProxy_Priority_TypeDefinitionIndex = 34227;

	enum class VolumeProxy_Priority : ::System::Int32
	{
		None = 0,
		EnvironmentSystem = 1,
		UI = 2,
		Logic = 3,
		FiveDimGame = 4,
		LogicMiniGame = 5,
		Timeline = 6,
		UI3D = 7,
		Max = 8,
	};
}
