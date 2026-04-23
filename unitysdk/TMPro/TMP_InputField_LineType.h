#pragma once
#include "unitysdk/unitysdk.h"

namespace TMPro
{
	inline static constexpr unsigned int TMP_InputField_LineType_TypeDefinitionIndex = 40152;

	enum class TMP_InputField_LineType : ::System::Int32
	{
		SingleLine = 0,
		MultiLineSubmit = 1,
		MultiLineNewline = 2,
	};
}
