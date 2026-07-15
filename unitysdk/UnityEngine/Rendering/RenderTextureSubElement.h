#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderTextureSubElement_TypeDefinitionIndex = 4714;

	enum class RenderTextureSubElement : ::System::Int32
	{
		Color = 0,
		Depth = 1,
		Stencil = 2,
		Default = 3,
	};
}
