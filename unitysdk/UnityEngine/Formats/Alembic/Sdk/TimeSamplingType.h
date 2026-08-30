#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int TimeSamplingType_TypeDefinitionIndex = 44640;

	enum class TimeSamplingType : ::System::Int32
	{
		Uniform = 0,
		Acyclic = 2,
	};
}
