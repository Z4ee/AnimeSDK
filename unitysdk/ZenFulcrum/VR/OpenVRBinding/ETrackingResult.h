#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int ETrackingResult_TypeDefinitionIndex = 37061;

	enum class ETrackingResult : ::System::Int32
	{
		Uninitialized = 1,
		Calibrating_InProgress = 100,
		Calibrating_OutOfRange = 101,
		Running_OK = 200,
		Running_OutOfRange = 201,
	};
}
