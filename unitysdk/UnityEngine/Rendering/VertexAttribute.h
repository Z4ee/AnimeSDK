#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VertexAttribute_TypeDefinitionIndex = 4677;

	enum class VertexAttribute : ::System::Int32
	{
		Position = 0,
		Normal = 1,
		Tangent = 2,
		Color = 3,
		TexCoord0 = 4,
		TexCoord1 = 5,
		TexCoord2 = 6,
		TexCoord3 = 7,
		TexCoord4 = 8,
		TexCoord5 = 9,
		TexCoord6 = 10,
		TexCoord7 = 11,
		BlendWeight = 12,
		BlendIndices = 13,
		Tangent1 = 14,
	};
}
