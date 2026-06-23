#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UILocalizationText_EInternalSetTextSource_TypeDefinitionIndex = 45419;

	enum class UILocalizationText_EInternalSetTextSource : ::System::Int32
	{
		SetText = 4,
		ProcessTextPipeline = 7,
		TryRebuildAdjustedText = 8,
		SourceTextProperty = 0,
		SetEditorTextOnValueChanged = 2,
		SourceTextOnValueChanged = 3,
		DynamicChanged = 9,
		SetTextFunc = 5,
		Awake = 1,
		SetEmpty = 6,
		TextSetDynamicSetByCodeOnlyEditor = 10,
	};
}
