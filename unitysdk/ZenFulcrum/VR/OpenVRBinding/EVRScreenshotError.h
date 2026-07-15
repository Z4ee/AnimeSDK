#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int EVRScreenshotError_TypeDefinitionIndex = 37106;

	enum class EVRScreenshotError : ::System::Int32
	{
		None = 0,
		RequestFailed = 1,
		IncompatibleVersion = 100,
		NotFound = 101,
		BufferTooSmall = 102,
		ScreenshotAlreadyInProgress = 108,
	};
}
