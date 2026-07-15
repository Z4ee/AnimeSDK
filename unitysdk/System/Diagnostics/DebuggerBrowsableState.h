#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics
{
	inline static constexpr unsigned int DebuggerBrowsableState_TypeDefinitionIndex = 1571;

	enum class DebuggerBrowsableState : ::System::Int32
	{
		Never = 0,
		Collapsed = 2,
		RootHidden = 3,
	};
}
