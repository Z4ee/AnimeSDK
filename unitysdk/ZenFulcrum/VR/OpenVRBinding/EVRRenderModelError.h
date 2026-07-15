#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int EVRRenderModelError_TypeDefinitionIndex = 37101;

	enum class EVRRenderModelError : ::System::Int32
	{
		None = 0,
		Loading = 100,
		NotSupported = 200,
		InvalidArg = 300,
		InvalidModel = 301,
		NoShapes = 302,
		MultipleShapes = 303,
		TooManyVertices = 304,
		MultipleTextures = 305,
		BufferTooSmall = 306,
		NotEnoughNormals = 307,
		NotEnoughTexCoords = 308,
		InvalidTexture = 400,
	};
}
