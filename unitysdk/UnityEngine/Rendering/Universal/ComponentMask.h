#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ComponentMask_TypeDefinitionIndex = 29873;

	enum class ComponentMask : ::System::Int32
	{
		All = 0,
		Scene = 1,
		Character = 2,
	};
}
