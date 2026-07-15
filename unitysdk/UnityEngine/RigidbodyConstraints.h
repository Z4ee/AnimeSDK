#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int RigidbodyConstraints_TypeDefinitionIndex = 5293;

	enum class RigidbodyConstraints : ::System::Int32
	{
		None = 0,
		FreezePositionX = 2,
		FreezePositionY = 4,
		FreezePositionZ = 8,
		FreezeRotationX = 16,
		FreezeRotationY = 32,
		FreezeRotationZ = 64,
		FreezePosition = 14,
		FreezeRotation = 112,
		FreezeAll = 126,
	};
}
