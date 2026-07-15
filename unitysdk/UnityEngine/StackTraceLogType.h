#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int StackTraceLogType_TypeDefinitionIndex = 4022;

	enum class StackTraceLogType : ::System::Int32
	{
		None = 0,
		ScriptOnly = 1,
		Full = 2,
	};
}
