#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int EditLevel_TypeDefinitionIndex = 40771;

	enum class EditLevel : ::System::Int32
	{
		Top = 0,
		Geometry = 1,
		Texture = 2,
		Plugin = 3,
	};
}
