#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int CloseExState_TypeDefinitionIndex = 2771;

	enum class CloseExState : ::System::Int32
	{
		Normal = 0,
		Abort = 1,
		Silent = 2,
	};
}
