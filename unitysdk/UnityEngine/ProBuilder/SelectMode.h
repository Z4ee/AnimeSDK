#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int SelectMode_TypeDefinitionIndex = 41584;

	enum class SelectMode : ::System::Int32
	{
		None = 0,
		Object = 1,
		Vertex = 2,
		Edge = 4,
		Face = 8,
		TextureFace = 16,
		TextureEdge = 32,
		TextureVertex = 64,
		InputTool = 128,
		Any = 65535,
	};
}
