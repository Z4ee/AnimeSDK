#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ActionResult_Status_TypeDefinitionIndex = 41524;

	enum class ActionResult_Status : ::System::Int32
	{
		Success = 0,
		Failure = 1,
		Canceled = 2,
		NoChange = 3,
	};
}
