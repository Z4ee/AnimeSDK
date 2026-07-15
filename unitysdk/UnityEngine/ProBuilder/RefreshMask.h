#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int RefreshMask_TypeDefinitionIndex = 41599;

	enum class RefreshMask : ::System::Int32
	{
		UV = 1,
		Colors = 2,
		Normals = 4,
		Tangents = 8,
		Collisions = 16,
		Bounds = 22,
		All = 31,
	};
}
