#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int EventModifiers_TypeDefinitionIndex = 5210;

	enum class EventModifiers : ::System::Int32
	{
		None = 0,
		Shift = 1,
		Control = 2,
		Alt = 4,
		Command = 8,
		Numeric = 16,
		CapsLock = 32,
		FunctionKey = 64,
	};
}
