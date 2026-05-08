#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int UFightCommandHookType_TypeDefinitionIndex = 26229;

enum class UFightCommandHookType : ::System::Int32
{
	Error = 3,
	Continue = 2,
	Finish = 1,
	None = 0,
};
