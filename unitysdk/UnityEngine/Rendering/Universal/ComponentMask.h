#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ComponentMask_TypeDefinitionIndex = 27303;

	enum class ComponentMask : ::System::Int32
	{
		Character = 2,
		All = 0,
		Scene = 1,
	};
}
