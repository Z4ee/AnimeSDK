#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AOCSVersion_TypeDefinitionIndex = 4634;

	enum class AOCSVersion : ::System::Int32
	{
		Version1 = 0,
		Version2 = 1,
		Version3 = 2,
	};
}
