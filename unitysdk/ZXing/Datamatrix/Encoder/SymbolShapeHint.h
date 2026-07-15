#pragma once
#include "unitysdk/unitysdk.h"

namespace ZXing::Datamatrix::Encoder
{
	inline static constexpr unsigned int SymbolShapeHint_TypeDefinitionIndex = 6460;

	enum class SymbolShapeHint : ::System::Int32
	{
		FORCE_NONE = 0,
		FORCE_SQUARE = 1,
		FORCE_RECTANGLE = 2,
	};
}
