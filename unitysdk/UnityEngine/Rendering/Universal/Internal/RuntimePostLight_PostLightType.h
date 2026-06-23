#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int RuntimePostLight_PostLightType_TypeDefinitionIndex = 27308;

	enum class RuntimePostLight_PostLightType : ::System::Int32
	{
		Light = 0,
		AO = 1,
	};
}
