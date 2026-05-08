#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int JsonParser_JsonValueType_TypeDefinitionIndex = 29396;

	enum class JsonParser_JsonValueType : ::System::Int32
	{
		None = 0,
		Bool = 1,
		Real = 2,
		Integer = 3,
		String = 4,
		Array = 5,
		Object = 6,
		Any = 7,
	};
}
