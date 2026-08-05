#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UILocalizationText_EInternalSetTextSource_TypeDefinitionIndex = 53369;

	enum class UILocalizationText_EInternalSetTextSource : ::System::Int32
	{
		SetEmpty = 6,
		SetText = 4,
		EditorTypesetPreview = 11,
		DynamicChanged = 9,
		SetEditorTextOnValueChanged = 2,
		SourceTextProperty = 0,
		ProcessTextPipeline = 7,
		TextSetDynamicSetByCodeOnlyEditor = 10,
		Awake = 1,
		TryRebuildAdjustedText = 8,
		SetTextFunc = 5,
		SourceTextOnValueChanged = 3,
	};
}
