#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int RenderTextureCreationFlags_TypeDefinitionIndex = 4165;

	enum class RenderTextureCreationFlags : ::System::Int32
	{
		MipMap = 1,
		AutoGenerateMips = 2,
		SRGB = 4,
		EyeTexture = 8,
		EnableRandomWrite = 16,
		CreatedFromScript = 32,
		AllowVerticalFlip = 128,
		NoResolvedColorSurface = 256,
		DynamicallyScalable = 1024,
		BindMS = 2048,
		SRVPerMip = 16384,
		CPUWrite = 32768,
	};
}
