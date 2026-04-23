#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int LogType_TypeDefinitionIndex = 3830;

	enum class LogType : ::System::Int32
	{
		Error = 0,
		Assert = 1,
		Warning = 2,
		Log = 3,
		Exception = 4,
	};
}
