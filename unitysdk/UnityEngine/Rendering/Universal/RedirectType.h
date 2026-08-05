#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RedirectType_TypeDefinitionIndex = 27982;

	enum class RedirectType : ::System::Int32
	{
		GameObject = 1,
		Component = 2,
		Null = 0,
	};
}
