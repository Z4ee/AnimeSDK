#pragma once
#include "unitysdk/unitysdk.h"

namespace miHoYoEmotion
{
	inline static constexpr unsigned int ClipShapeManager_CurveBinding_BoneParamType_TypeDefinitionIndex = 40046;

	enum class ClipShapeManager_CurveBinding_BoneParamType : ::System::Int32
	{
		BoneRotZ = 6,
		None = 0,
		BoneRotY = 5,
		BonePosZ = 3,
		BoneRotX = 4,
		BonePosX = 1,
		BonePosY = 2,
	};
}
