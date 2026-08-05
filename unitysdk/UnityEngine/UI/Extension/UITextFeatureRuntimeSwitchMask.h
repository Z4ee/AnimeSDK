#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextFeatureRuntimeSwitchMask_TypeDefinitionIndex = 41195;

	enum class UITextFeatureRuntimeSwitchMask : ::System::Int32
	{
		Underline = 1,
		LinkInteraction = 2,
		None = 0,
		Default = 3,
		TermInteraction = 4,
	};
}
