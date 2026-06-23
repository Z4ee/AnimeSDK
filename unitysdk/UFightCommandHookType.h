#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int UFightCommandHookType_TypeDefinitionIndex = 28653;

enum class UFightCommandHookType : ::System::Int32
{
	Error = 3,
	None = 0,
	Continue = 2,
	Finish = 1,
};
