#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::IL2CPP::RuntimeServices
{
	inline static constexpr unsigned int BeohmGCActionType_TypeDefinitionIndex = 47816;

	enum class BeohmGCActionType : ::System::Int32
	{
		BAT_Invalid = 0,
		BAT_Expand = 1,
		BAT_Collect = 2,
	};
}
