#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int IOOperation_TypeDefinitionIndex = 2479;

	enum class IOOperation : ::System::Int32
	{
		Read = 1,
		Write = 2,
	};
}
