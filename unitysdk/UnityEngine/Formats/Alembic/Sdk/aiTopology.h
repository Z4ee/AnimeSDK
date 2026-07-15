#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiTopology_TypeDefinitionIndex = 42483;

	enum class aiTopology : ::System::Int32
	{
		Points = 0,
		Lines = 1,
		Triangles = 2,
		Quads = 3,
	};
}
