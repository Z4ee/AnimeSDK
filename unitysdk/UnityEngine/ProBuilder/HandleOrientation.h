#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int HandleOrientation_TypeDefinitionIndex = 41558;

	enum class HandleOrientation : ::System::Int32
	{
		World = 0,
		ActiveObject = 1,
		ActiveElement = 2,
	};
}
