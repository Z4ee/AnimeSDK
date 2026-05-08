#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int SmoothMaskMaterial_Params_DirtyFlagBit_TypeDefinitionIndex = 8459;

	enum class SmoothMaskMaterial_Params_DirtyFlagBit : ::System::Int32
	{
		Type = 1,
		Texture = 2,
		Matrix = 4,
		SoftRange = 8,
		FillParams = 16,
		Invert = 32,
	};
}
