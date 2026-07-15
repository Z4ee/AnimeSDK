#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::AI
{
	inline static constexpr unsigned int CollectObjects_TypeDefinitionIndex = 39196;

	enum class CollectObjects : ::System::Int32
	{
		All = 0,
		Volume = 1,
		Children = 2,
	};
}
