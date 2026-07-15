#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BuiltinRenderTextureType_TypeDefinitionIndex = 4691;

	enum class BuiltinRenderTextureType : ::System::Int32
	{
		PropertyName = -4,
		BufferPtr = -3,
		RenderTexture = -2,
		BindableTexture = -1,
		None = 0,
		CurrentActive = 1,
		CameraTarget = 2,
		Depth = 3,
		DepthNormals = 4,
		ResolvedDepth = 5,
		PrepassNormalsSpec = 7,
		PrepassLight = 8,
		PrepassLightSpec = 9,
		GBuffer0 = 10,
		GBuffer1 = 11,
		GBuffer2 = 12,
		GBuffer3 = 13,
		Reflections = 14,
		MotionVectors = 15,
		GBuffer4 = 16,
		GBuffer5 = 17,
		GBuffer6 = 18,
		GBuffer7 = 19,
	};
}
