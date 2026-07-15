#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int TouchScreenKeyboard_Status_TypeDefinitionIndex = 4385;

	enum class TouchScreenKeyboard_Status : ::System::Int32
	{
		Visible = 0,
		Done = 1,
		Canceled = 2,
		LostFocus = 3,
	};
}
