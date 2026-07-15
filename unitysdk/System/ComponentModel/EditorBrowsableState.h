#pragma once
#include "unitysdk/unitysdk.h"

namespace System::ComponentModel
{
	inline static constexpr unsigned int EditorBrowsableState_TypeDefinitionIndex = 2583;

	enum class EditorBrowsableState : ::System::Int32
	{
		Always = 0,
		Never = 1,
		Advanced = 2,
	};
}
