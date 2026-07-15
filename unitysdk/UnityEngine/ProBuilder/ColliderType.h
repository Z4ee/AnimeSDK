#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ColliderType_TypeDefinitionIndex = 41588;

	enum class ColliderType : ::System::Int32
	{
		None = 0,
		BoxCollider = 1,
		MeshCollider = 2,
	};
}
