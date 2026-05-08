#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShaderCollectionType_TypeDefinitionIndex = 30101;

	enum class ShaderCollectionType : ::System::Int32
	{
		UI = 0,
		Character = 1,
		Scene = 2,
		Effect = 3,
	};
}
