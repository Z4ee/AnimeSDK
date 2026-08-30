#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ExtrudeMethod_TypeDefinitionIndex = 43211;

	enum class ExtrudeMethod : ::System::Int32
	{
		IndividualFaces = 0,
		VertexNormal = 1,
		FaceNormal = 2,
	};
}
