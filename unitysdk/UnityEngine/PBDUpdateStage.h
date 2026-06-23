#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int PBDUpdateStage_TypeDefinitionIndex = 18740;

	enum class PBDUpdateStage : ::System::Int32
	{
		FixedUpdate = 0,
		LateUpdate = 1,
	};
}
