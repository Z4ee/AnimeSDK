#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShaderCollectionType_TypeDefinitionIndex = 27258;

	enum class ShaderCollectionType : ::System::Int32
	{
		Character = 1,
		UI = 0,
		Effect = 3,
		Scene = 2,
	};
}
