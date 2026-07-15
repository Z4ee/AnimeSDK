#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int TargetType_TypeDefinitionIndex = 3716;

	enum class TargetType : ::System::Int32
	{
		Function = 0,
		Field = 1,
	};
}
