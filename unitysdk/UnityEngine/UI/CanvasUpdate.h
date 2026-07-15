#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int CanvasUpdate_TypeDefinitionIndex = 5855;

	enum class CanvasUpdate : ::System::Int32
	{
		Prelayout = 0,
		Layout = 1,
		PostLayout = 2,
		PreRender = 3,
		LatePreRender = 4,
		MaxUpdateValue = 5,
	};
}
