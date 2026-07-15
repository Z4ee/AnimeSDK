#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int GlyphRenderMode_TypeDefinitionIndex = 5830;

	enum class GlyphRenderMode : ::System::Int32
	{
		SMOOTH_HINTED = 4121,
		SMOOTH = 4117,
		RASTER_HINTED = 4122,
		RASTER = 4118,
		SDF = 4134,
		SDF8 = 8230,
		SDF16 = 16422,
		SDF32 = 32806,
		SDFAA_HINTED = 4169,
		SDFAA = 4165,
	};
}
