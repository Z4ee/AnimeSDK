#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int OpaqueSortMode_TypeDefinitionIndex = 4678;

	enum class OpaqueSortMode : ::System::Int32
	{
		Default = 0,
		FrontToBack = 1,
		NoDistanceSort = 2,
	};
}
