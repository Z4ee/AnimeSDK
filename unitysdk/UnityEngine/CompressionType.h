#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int CompressionType_TypeDefinitionIndex = 5701;

	enum class CompressionType : ::System::Int32
	{
		None = 0,
		Lzma = 1,
		Lz4 = 2,
		Lz4HC = 3,
		Lzzham = 4,
		Lz4MHY = 5,
		Oodle = 6,
		OodleEncrypted = 7,
	};
}
