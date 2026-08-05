#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int MeshUpdateFlags_TypeDefinitionIndex = 6159;

	enum class MeshUpdateFlags : ::System::Int32
	{
		Default = 0,
		DontValidateIndices = 1,
		DontResetBoneBounds = 2,
		DontNotifyMeshUsers = 4,
		DontRecalculateBounds = 8,
	};
}
