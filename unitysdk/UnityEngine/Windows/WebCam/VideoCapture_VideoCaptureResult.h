#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Windows/WebCam/VideoCapture_CaptureResultType.h"

namespace UnityEngine::Windows::WebCam
{
	inline static constexpr unsigned int VideoCapture_VideoCaptureResult_TypeDefinitionIndex = 5474;

	struct alignas(8) VideoCapture_VideoCaptureResult
	{
		::UnityEngine::Windows::WebCam::VideoCapture_CaptureResultType resultType; // 0x10
		::System::Int64 hResult; // 0x18
	};
}
