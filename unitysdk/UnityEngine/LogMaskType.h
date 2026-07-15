#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int LogMaskType_TypeDefinitionIndex = 4012;

	enum class LogMaskType : ::System::Int32
	{
		None = 0,
		Error = 1,
		Assert = 2,
		Warning = 4,
		Log = 8,
		Exception = 16,
	};
}
