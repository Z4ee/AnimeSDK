#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int KeyAction_TypeDefinitionIndex = 38272;

	enum class KeyAction : ::System::Int32
	{
		Press = 0,
		Release = 1,
		PressAndRelease = 2,
	};
}
