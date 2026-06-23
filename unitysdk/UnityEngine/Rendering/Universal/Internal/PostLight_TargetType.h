#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostLight_TargetType_TypeDefinitionIndex = 26929;

	enum class PostLight_TargetType : ::System::Int32
	{
		All = 0,
		Character = 2,
		Scene = 1,
	};
}
