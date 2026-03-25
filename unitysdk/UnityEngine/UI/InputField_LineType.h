#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int InputField_LineType_TypeDefinitionIndex = 5610;

	enum class InputField_LineType : ::System::Int32
	{
		SingleLine = 0,
		MultiLineSubmit = 1,
		MultiLineNewline = 2,
	};
}
