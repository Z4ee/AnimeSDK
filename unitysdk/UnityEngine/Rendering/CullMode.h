#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CullMode_TypeDefinitionIndex = 4684;

	enum class CullMode : ::System::Int32
	{
		Off = 0,
		Front = 1,
		Back = 2,
	};
}
