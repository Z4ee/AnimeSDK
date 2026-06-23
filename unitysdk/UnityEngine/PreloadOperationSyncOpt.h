#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int PreloadOperationSyncOpt_TypeDefinitionIndex = 5128;

	enum class PreloadOperationSyncOpt : ::System::Int32
	{
		Disable = 0,
		LessLock = 1,
		NoLock = 2,
	};
}
