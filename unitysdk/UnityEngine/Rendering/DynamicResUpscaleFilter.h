#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DynamicResUpscaleFilter_TypeDefinitionIndex = 34050;

	enum class DynamicResUpscaleFilter : ::System::Byte
	{
		Bilinear = 0x0,
		CatmullRom = 0x1,
		Lanczos = 0x2,
		ContrastAdaptiveSharpen = 0x3,
	};
}
