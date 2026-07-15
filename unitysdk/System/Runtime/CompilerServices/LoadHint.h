#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int LoadHint_TypeDefinitionIndex = 1370;

	enum class LoadHint : ::System::Int32
	{
		Default = 0,
		Always = 1,
		Sometimes = 2,
	};
}
