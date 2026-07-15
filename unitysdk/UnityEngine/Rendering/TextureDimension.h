#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int TextureDimension_TypeDefinitionIndex = 4710;

	enum class TextureDimension : ::System::Int32
	{
		Unknown = -1,
		None = 0,
		Any = 1,
		Tex2D = 2,
		Tex3D = 3,
		Cube = 4,
		Tex2DArray = 5,
		CubeArray = 6,
	};
}
