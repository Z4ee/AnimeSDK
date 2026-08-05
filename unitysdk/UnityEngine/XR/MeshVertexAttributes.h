#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::XR
{
	inline static constexpr unsigned int MeshVertexAttributes_TypeDefinitionIndex = 28260;

	enum class MeshVertexAttributes : ::System::Int32
	{
		None = 0,
		Normals = 1,
		Tangents = 2,
		UVs = 4,
		Colors = 8,
	};
}
