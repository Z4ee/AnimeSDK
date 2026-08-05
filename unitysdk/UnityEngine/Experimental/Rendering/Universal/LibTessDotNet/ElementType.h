#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int ElementType_TypeDefinitionIndex = 27607;

	enum class ElementType : ::System::Int32
	{
		Polygons = 0,
		BoundaryContours = 2,
		ConnectedPolygons = 1,
	};
}
