#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int HQBloomMode_TypeDefinitionIndex = 30143;

	enum class HQBloomMode : ::System::Int32
	{
		Disable = -1,
		UEDefault = 3,
	};
}
