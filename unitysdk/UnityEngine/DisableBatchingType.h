#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int DisableBatchingType_TypeDefinitionIndex = 5391;

	enum class DisableBatchingType : ::System::Int32
	{
		False = 0,
		True = 1,
		WhenLODFading = 2,
	};
}
