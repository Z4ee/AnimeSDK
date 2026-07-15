#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackAsset_Versions_TypeDefinitionIndex = 36641;

	enum class TrackAsset_Versions : ::System::Int32
	{
		Initial = 0,
		RotationAsEuler = 1,
		RootMotionUpgrade = 2,
		AnimatedTrackProperties = 3,
	};
}
