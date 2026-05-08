#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int ElementType_TypeDefinitionIndex = 29756;

	enum class ElementType : ::System::Int32
	{
		Polygons = 0,
		ConnectedPolygons = 1,
		BoundaryContours = 2,
	};
}
