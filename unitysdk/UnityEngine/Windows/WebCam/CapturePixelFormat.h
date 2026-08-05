#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Windows::WebCam
{
	inline static constexpr unsigned int CapturePixelFormat_TypeDefinitionIndex = 5483;

	enum class CapturePixelFormat : ::System::Int32
	{
		BGRA32 = 0,
		NV12 = 1,
		JPEG = 2,
		PNG = 3,
	};
}
