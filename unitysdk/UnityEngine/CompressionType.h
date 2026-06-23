#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int CompressionType_TypeDefinitionIndex = 7672;

	enum class CompressionType : ::System::Int32
	{
		None = 0,
		Lzma = 1,
		Lz4 = 2,
		Lz4HC = 3,
	};
}
