#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int UFightCommandHookType_TypeDefinitionIndex = 29504;

enum class UFightCommandHookType : ::System::Int32
{
	Continue = 2,
	Finish = 1,
	None = 0,
	Error = 3,
};
