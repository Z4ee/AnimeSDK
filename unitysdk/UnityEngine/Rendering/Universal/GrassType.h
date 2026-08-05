#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GrassType_TypeDefinitionIndex = 27237;

	enum class GrassType : ::System::Int32
	{
		BillboardGrass = 1,
		MeshGrass = 0,
	};
}
