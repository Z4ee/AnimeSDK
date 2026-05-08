#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MonoCharacterGIMask_MaskType_TypeDefinitionIndex = 30054;

	enum class MonoCharacterGIMask_MaskType : ::System::Int32
	{
		WhiteList = 0,
		BlackList = 1,
	};
}
