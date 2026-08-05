#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GeometryType_TypeDefinitionIndex = 27399;

	enum class GeometryType : ::System::Int32
	{
		VertexOffset = 0,
		Tesselation = 1,
	};
}
