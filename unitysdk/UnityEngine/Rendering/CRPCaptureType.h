#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPCaptureType_TypeDefinitionIndex = 36839;

	enum class CRPCaptureType : ::System::Int32
	{
		kCaptureRT = 0,
		kCapturePass = 1,
		kCaptureLight = 2,
		kCaptureGlobalMutation = 3,
		kCaptureActor = 4,
		kCapturePassFilter = 5,
		kCapturePassRenderData = 6,
		kCaptureCBData = 7,
		kCaptureTypeCount = 8,
	};
}
