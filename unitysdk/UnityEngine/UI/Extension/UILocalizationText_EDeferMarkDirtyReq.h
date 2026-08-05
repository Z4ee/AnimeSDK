#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UILocalizationText_EDeferMarkDirtyReq_TypeDefinitionIndex = 53372;

	enum class UILocalizationText_EDeferMarkDirtyReq : ::System::Int32
	{
		None = 0,
		Layout = 1,
		Vertices = 2,
	};
}
