#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CaptureCountType_TypeDefinitionIndex = 35979;

	enum class CaptureCountType : ::System::Int32
	{
		kCaptureStop = 0,
		kCaptureAlways = -1,
		kCaptureOnce = 1,
	};
}
