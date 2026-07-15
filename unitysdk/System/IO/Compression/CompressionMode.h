#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO::Compression
{
	inline static constexpr unsigned int CompressionMode_TypeDefinitionIndex = 2708;

	enum class CompressionMode : ::System::Int32
	{
		Decompress = 0,
		Compress = 1,
	};
}
