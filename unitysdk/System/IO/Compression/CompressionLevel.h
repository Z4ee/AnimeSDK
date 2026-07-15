#pragma once
#include "unitysdk/unitysdk.h"

namespace System::IO::Compression
{
	inline static constexpr unsigned int CompressionLevel_TypeDefinitionIndex = 2707;

	enum class CompressionLevel : ::System::Int32
	{
		Optimal = 0,
		Fastest = 1,
		NoCompression = 2,
	};
}
