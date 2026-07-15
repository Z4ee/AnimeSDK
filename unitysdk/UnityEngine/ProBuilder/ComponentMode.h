#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ComponentMode_TypeDefinitionIndex = 41585;

	enum class ComponentMode : ::System::Int32
	{
		Vertex = 0,
		Edge = 1,
		Face = 2,
	};
}
