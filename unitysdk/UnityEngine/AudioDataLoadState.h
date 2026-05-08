#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int AudioDataLoadState_TypeDefinitionIndex = 9618;

	enum class AudioDataLoadState : ::System::Int32
	{
		Unloaded = 0,
		Loading = 1,
		Loaded = 2,
		Failed = 3,
	};
}
