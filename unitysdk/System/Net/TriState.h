#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int TriState_TypeDefinitionIndex = 3324;

	enum class TriState : ::System::Int32
	{
		Unspecified = -1,
		False = 0,
		True = 1,
	};
}
