#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RedirectType_TypeDefinitionIndex = 30086;

	enum class RedirectType : ::System::Int32
	{
		Null = 0,
		GameObject = 1,
		Component = 2,
	};
}
