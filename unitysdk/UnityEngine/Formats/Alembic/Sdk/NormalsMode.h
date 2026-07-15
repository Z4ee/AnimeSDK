#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int NormalsMode_TypeDefinitionIndex = 42480;

	enum class NormalsMode : ::System::Int32
	{
		CalculateIfMissing = 1,
		AlwaysCalculate = 2,
	};
}
