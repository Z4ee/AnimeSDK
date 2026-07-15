#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics
{
	inline static constexpr unsigned int ProcessWindowStyle_TypeDefinitionIndex = 2550;

	enum class ProcessWindowStyle : ::System::Int32
	{
		Hidden = 1,
		Maximized = 3,
		Minimized = 2,
		Normal = 0,
	};
}
