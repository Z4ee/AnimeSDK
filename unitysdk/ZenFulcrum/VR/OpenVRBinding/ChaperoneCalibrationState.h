#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int ChaperoneCalibrationState_TypeDefinitionIndex = 37089;

	enum class ChaperoneCalibrationState : ::System::Int32
	{
		OK = 1,
		Warning = 100,
		Warning_BaseStationMayHaveMoved = 101,
		Warning_BaseStationRemoved = 102,
		Warning_SeatedBoundsInvalid = 103,
		Error = 200,
		Error_BaseStationUninitialized = 201,
		Error_BaseStationConflict = 202,
		Error_PlayAreaInvalid = 203,
		Error_CollisionBoundsInvalid = 204,
	};
}
