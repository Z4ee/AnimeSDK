#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UILocalizationText_ETextSourceMode_TypeDefinitionIndex = 45420;

	enum class UILocalizationText_ETextSourceMode : ::System::Int32
	{
		TextFunc = 3,
		None = 0,
		Key = 2,
		TextString = 1,
	};
}
