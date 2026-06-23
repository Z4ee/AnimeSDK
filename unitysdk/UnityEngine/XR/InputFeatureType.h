#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::XR
{
	inline static constexpr unsigned int InputFeatureType_TypeDefinitionIndex = 27638;

	enum class InputFeatureType : ::System::UInt32
	{
		Custom = 0x0,
		Binary = 0x1,
		DiscreteStates = 0x2,
		Axis1D = 0x3,
		Axis2D = 0x4,
		Axis3D = 0x5,
		Rotation = 0x6,
		Hand = 0x7,
		Bone = 0x8,
		Eyes = 0x9,
		kUnityXRInputFeatureTypeInvalid = 0xFFFFFFFF,
	};
}
