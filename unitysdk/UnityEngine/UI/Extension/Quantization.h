#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int Quantization_TypeDefinitionIndex = 57833;

	enum class Quantization : ::System::Int32
	{
		DragDeltaY = 2,
		DragDeltaX = 1,
		DragTwoPoint = 5,
		ScrollDeltaY = 4,
		None = 0,
		ScrollDeltaX = 3,
	};
}
