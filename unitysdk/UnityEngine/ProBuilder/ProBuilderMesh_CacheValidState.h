#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ProBuilderMesh_CacheValidState_TypeDefinitionIndex = 41602;

	enum class ProBuilderMesh_CacheValidState : ::System::Byte
	{
		SharedVertex = 0x1,
		SharedTexture = 0x2,
	};
}
