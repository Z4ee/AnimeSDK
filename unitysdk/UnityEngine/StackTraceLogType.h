#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int StackTraceLogType_TypeDefinitionIndex = 3841;

	enum class StackTraceLogType : ::System::Int32
	{
		None = 0,
		ScriptOnly = 1,
		Full = 2,
	};
}
