#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemMeshShapeType_TypeDefinitionIndex = 5251;

	enum class ParticleSystemMeshShapeType : ::System::Int32
	{
		Vertex = 0,
		Edge = 1,
		Triangle = 2,
	};
}
