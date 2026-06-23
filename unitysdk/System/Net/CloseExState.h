#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int CloseExState_TypeDefinitionIndex = 3375;

	enum class CloseExState : ::System::Int32
	{
		Normal = 0,
		Abort = 1,
		Silent = 2,
	};
}
