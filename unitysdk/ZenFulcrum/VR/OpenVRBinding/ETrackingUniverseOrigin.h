#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int ETrackingUniverseOrigin_TypeDefinitionIndex = 37064;

	enum class ETrackingUniverseOrigin : ::System::Int32
	{
		TrackingUniverseSeated = 0,
		TrackingUniverseStanding = 1,
		TrackingUniverseRawAndUncalibrated = 2,
	};
}
