#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UILocalizationText_ETextSourceMode_TypeDefinitionIndex = 53368;

	enum class UILocalizationText_ETextSourceMode : ::System::Int32
	{
		Key = 2,
		TextFunc = 3,
		None = 0,
		TextString = 1,
	};
}
