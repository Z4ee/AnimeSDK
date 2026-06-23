#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int FeatureType_TypeDefinitionIndex = 31723;

	enum class FeatureType : ::System::Int32
	{
		Custom = 0,
		Binary = 1,
		DiscreteStates = 2,
		Axis1D = 3,
		Axis2D = 4,
		Axis3D = 5,
		Rotation = 6,
		Hand = 7,
		Bone = 8,
		Eyes = 9,
	};
}
