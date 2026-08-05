#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int ETextFontBrushOption_TypeDefinitionIndex = 59705;

	enum class ETextFontBrushOption : ::System::Int32
	{
		ByConfig = 0,
		ForceOff = 2,
		ForceOn = 1,
	};
}
