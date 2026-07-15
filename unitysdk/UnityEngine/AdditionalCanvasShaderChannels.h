#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int AdditionalCanvasShaderChannels_TypeDefinitionIndex = 5348;

	enum class AdditionalCanvasShaderChannels : ::System::Int32
	{
		None = 0,
		TexCoord1 = 1,
		TexCoord2 = 2,
		TexCoord3 = 4,
		Normal = 8,
		Tangent = 16,
	};
}
