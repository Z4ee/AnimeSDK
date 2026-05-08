#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int EEmissionType_TypeDefinitionIndex = 30419;

	enum class EEmissionType : ::System::Int32
	{
		_EmissionColor = 0,
		_ScreenColor = 1,
		_ScreenBaseColor = 2,
		_PostLightOverrideColor = 3,
	};
}
