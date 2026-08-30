#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int FontStyle_TypeDefinitionIndex = 5030;

	enum class FontStyle : ::System::Int32
	{
		Normal = 0,
		Bold = 1,
		Italic = 2,
		BoldAndItalic = 3,
	};
}
