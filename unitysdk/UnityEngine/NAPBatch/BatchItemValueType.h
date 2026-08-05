#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::NAPBatch
{
	inline static constexpr unsigned int BatchItemValueType_TypeDefinitionIndex = 6130;

	enum class BatchItemValueType : ::System::Int32
	{
		SingleFloat = 0,
		Vector4 = 1,
		Color = 2,
	};
}
