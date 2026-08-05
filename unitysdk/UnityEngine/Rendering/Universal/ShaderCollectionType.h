#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShaderCollectionType_TypeDefinitionIndex = 26851;

	enum class ShaderCollectionType : ::System::Int32
	{
		Character = 1,
		Effect = 3,
		UI = 0,
		Scene = 2,
	};
}
