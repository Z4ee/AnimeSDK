#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int DecompressionMethods_TypeDefinitionIndex = 3496;

	enum class DecompressionMethods : ::System::Int32
	{
		None = 0,
		GZip = 1,
		Deflate = 2,
	};
}
