#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int CursorLockMode_TypeDefinitionIndex = 4199;

	enum class CursorLockMode : ::System::Int32
	{
		None = 0,
		Locked = 1,
		Confined = 2,
	};
}
