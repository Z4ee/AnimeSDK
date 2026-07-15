#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RuntimeAtlasManager_InsertionStatus_TypeDefinitionIndex = 5974;

	enum class RuntimeAtlasManager_InsertionStatus : ::System::Int32
	{
		None = 0,
		Success = 1,
		NotPackable = 2,
		DiffFormat = 4,
		TooBig = 8,
		NoAvailable = 16,
	};
}
