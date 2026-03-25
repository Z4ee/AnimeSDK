#pragma once
#include "unitysdk/unitysdk.h"

namespace ZXing::OneD
{
	inline static constexpr unsigned int Code128Writer_CType_TypeDefinitionIndex = 6102;

	enum class Code128Writer_CType : ::System::Int32
	{
		UNCODABLE = 0,
		ONE_DIGIT = 1,
		TWO_DIGITS = 2,
		FNC_1 = 3,
	};
}
