#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int ETextFontBrushOption_TypeDefinitionIndex = 80535;

	enum class ETextFontBrushOption : ::System::Int32
	{
		ForceOn = 1,
		ByConfig = 0,
		ForceOff = 2,
	};
}
