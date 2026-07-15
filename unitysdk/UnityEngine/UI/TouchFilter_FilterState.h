#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int TouchFilter_FilterState_TypeDefinitionIndex = 6033;

	enum class TouchFilter_FilterState : ::System::Int32
	{
		UnDefine = 0,
		VerticalState = 1,
		HorizontalState = 2,
	};
}
