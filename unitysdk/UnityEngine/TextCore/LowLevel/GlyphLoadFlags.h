#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int GlyphLoadFlags_TypeDefinitionIndex = 5828;

	enum class GlyphLoadFlags : ::System::Int32
	{
		LOAD_DEFAULT = 0,
		LOAD_NO_SCALE = 1,
		LOAD_NO_HINTING = 2,
		LOAD_RENDER = 4,
		LOAD_NO_BITMAP = 8,
		LOAD_FORCE_AUTOHINT = 32,
		LOAD_MONOCHROME = 4096,
		LOAD_NO_AUTOHINT = 32768,
		LOAD_COMPUTE_METRICS = 2097152,
		LOAD_BITMAP_METRICS_ONLY = 4194304,
	};
}
