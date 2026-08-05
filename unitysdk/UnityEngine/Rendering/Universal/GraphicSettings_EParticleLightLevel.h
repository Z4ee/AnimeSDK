#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GraphicSettings_EParticleLightLevel_TypeDefinitionIndex = 26979;

	enum class GraphicSettings_EParticleLightLevel : ::System::Int32
	{
		DiffuseOnly = 1,
		DiffuseAndSpecular = 0,
	};
}
