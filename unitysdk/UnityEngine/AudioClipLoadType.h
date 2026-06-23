#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int AudioClipLoadType_TypeDefinitionIndex = 18346;

	enum class AudioClipLoadType : ::System::Int32
	{
		DecompressOnLoad = 0,
		CompressedInMemory = 1,
		Streaming = 2,
	};
}
