#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int WrapMode_TypeDefinitionIndex = 4016;

	enum class WrapMode : ::System::Int32
	{
		Once = 1,
		Loop = 2,
		PingPong = 4,
		Default = 0,
		ClampForever = 8,
		Clamp = 1,
	};
}
