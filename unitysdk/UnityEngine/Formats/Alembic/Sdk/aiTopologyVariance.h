#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiTopologyVariance_TypeDefinitionIndex = 40796;

	enum class aiTopologyVariance : ::System::Int32
	{
		Constant = 0,
		Homogeneous = 1,
		Heterogeneous = 2,
	};
}
