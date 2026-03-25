#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Text
{
	inline static constexpr unsigned int NormalizationForm_TypeDefinitionIndex = 513;

	enum class NormalizationForm : ::System::Int32
	{
		FormC = 1,
		FormD = 2,
		FormKC = 5,
		FormKD = 6,
	};
}
