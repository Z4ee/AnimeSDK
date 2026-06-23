#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RedirectType_TypeDefinitionIndex = 26643;

	enum class RedirectType : ::System::Int32
	{
		Null = 0,
		Component = 2,
		GameObject = 1,
	};
}
