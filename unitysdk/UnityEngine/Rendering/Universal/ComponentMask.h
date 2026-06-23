#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ComponentMask_TypeDefinitionIndex = 26980;

	enum class ComponentMask : ::System::Int32
	{
		Scene = 1,
		Character = 2,
		All = 0,
	};
}
