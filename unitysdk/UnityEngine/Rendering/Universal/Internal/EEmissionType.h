#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int EEmissionType_TypeDefinitionIndex = 27297;

	enum class EEmissionType : ::System::Int32
	{
		_ScreenBaseColor = 2,
		_PostLightOverrideColor = 3,
		_EmissionColor = 0,
		_ScreenColor = 1,
	};
}
