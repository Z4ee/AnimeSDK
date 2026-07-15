#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int MeshArrays_TypeDefinitionIndex = 41597;

	enum class MeshArrays : ::System::Int32
	{
		Position = 1,
		Texture0 = 2,
		Texture1 = 4,
		Lightmap = 4,
		Texture2 = 8,
		Texture3 = 16,
		Color = 32,
		Normal = 64,
		Tangent = 128,
		All = 255,
	};
}
