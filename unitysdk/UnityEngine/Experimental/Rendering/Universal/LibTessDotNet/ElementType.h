#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int ElementType_TypeDefinitionIndex = 27270;

	enum class ElementType : ::System::Int32
	{
		BoundaryContours = 2,
		Polygons = 0,
		ConnectedPolygons = 1,
	};
}
