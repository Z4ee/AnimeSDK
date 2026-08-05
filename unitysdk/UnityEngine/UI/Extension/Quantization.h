#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int Quantization_TypeDefinitionIndex = 53583;

	enum class Quantization : ::System::Int32
	{
		None = 0,
		DragDeltaX = 1,
		DragTwoPoint = 5,
		ScrollDeltaX = 3,
		DragDeltaY = 2,
		ScrollDeltaY = 4,
	};
}
