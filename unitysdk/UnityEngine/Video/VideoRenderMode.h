#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoRenderMode_TypeDefinitionIndex = 6014;

	enum class VideoRenderMode : ::System::Int32
	{
		CameraFarPlane = 0,
		CameraNearPlane = 1,
		RenderTexture = 2,
		MaterialOverride = 3,
		APIOnly = 4,
	};
}
