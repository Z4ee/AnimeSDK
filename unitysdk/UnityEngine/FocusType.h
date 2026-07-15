#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int FocusType_TypeDefinitionIndex = 5220;

	enum class FocusType : ::System::Int32
	{
		Native = 0,
		Keyboard = 1,
		Passive = 2,
	};
}
