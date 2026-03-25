#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int StaticAccessorType_TypeDefinitionIndex = 3712;

	enum class StaticAccessorType : ::System::Int32
	{
		Dot = 0,
		Arrow = 1,
		DoubleColon = 2,
		ArrowWithDefaultReturnIfNull = 3,
	};
}
