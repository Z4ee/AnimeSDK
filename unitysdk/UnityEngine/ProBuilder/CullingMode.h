#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int CullingMode_TypeDefinitionIndex = 34133;

	enum class CullingMode : ::System::Int32
	{
		None = 0,
		Back = 1,
		Front = 2,
		FrontBack = 3,
	};
}
