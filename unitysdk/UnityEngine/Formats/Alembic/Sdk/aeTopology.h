#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aeTopology_TypeDefinitionIndex = 42460;

	enum class aeTopology : ::System::Int32
	{
		Points = 0,
		Lines = 1,
		Triangles = 2,
		Quads = 3,
	};
}
