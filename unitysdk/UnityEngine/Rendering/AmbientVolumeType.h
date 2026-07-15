#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AmbientVolumeType_TypeDefinitionIndex = 4795;

	enum class AmbientVolumeType : ::System::Int32
	{
		Both = 0,
		SceneOnly = 1,
		CharacterOnly = 2,
	};
}
