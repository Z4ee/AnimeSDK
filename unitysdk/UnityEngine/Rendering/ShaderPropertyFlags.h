#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShaderPropertyFlags_TypeDefinitionIndex = 4881;

	enum class ShaderPropertyFlags : ::System::Int32
	{
		None = 0,
		HideInInspector = 1,
		PerRendererData = 2,
		NoScaleOffset = 4,
		Normal = 8,
		HDR = 16,
		Gamma = 32,
		NonModifiableTextureData = 64,
		MainTexture = 128,
		MainColor = 256,
	};
}
