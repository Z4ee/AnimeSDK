#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Windows::WebCam
{
	inline static constexpr unsigned int VideoCapture_CaptureResultType_TypeDefinitionIndex = 5473;

	enum class VideoCapture_CaptureResultType : ::System::Int32
	{
		Success = 0,
		UnknownError = 1,
	};
}
