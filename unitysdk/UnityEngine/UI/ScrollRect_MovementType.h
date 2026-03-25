#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ScrollRect_MovementType_TypeDefinitionIndex = 5693;

	enum class ScrollRect_MovementType : ::System::Int32
	{
		Unrestricted = 0,
		Elastic = 1,
		Clamped = 2,
	};
}
