#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::IL2CPP::RuntimeServices
{
	inline static constexpr unsigned int BeohmGCActionType_TypeDefinitionIndex = 6963;

	enum class BeohmGCActionType : ::System::Int32
	{
		BAT_Invalid = 0,
		BAT_Collect = 2,
		BAT_Expand = 1,
	};
}
