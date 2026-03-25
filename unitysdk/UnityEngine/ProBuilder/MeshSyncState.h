#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int MeshSyncState_TypeDefinitionIndex = 34135;

	enum class MeshSyncState : ::System::Int32
	{
		Null = 0,
		InstanceIDMismatch = 1,
		Lightmap = 2,
		InSync = 3,
	};
}
