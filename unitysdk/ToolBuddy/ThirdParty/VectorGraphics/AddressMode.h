#pragma once
#include "unitysdk/unitysdk.h"

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int AddressMode_TypeDefinitionIndex = 31161;

	enum class AddressMode : ::System::Int32
	{
		Wrap = 0,
		Clamp = 1,
		Mirror = 2,
	};
}
