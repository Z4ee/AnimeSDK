#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int Decal_DBufferHTileBit_TypeDefinitionIndex = 27082;

	enum class Decal_DBufferHTileBit : ::System::Int32
	{
		Normal = 2,
		Diffuse = 1,
		Mask = 4,
	};
}
