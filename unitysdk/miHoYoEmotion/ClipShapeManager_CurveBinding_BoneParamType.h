#pragma once
#include "unitysdk/unitysdk.h"

namespace miHoYoEmotion
{
	inline static constexpr unsigned int ClipShapeManager_CurveBinding_BoneParamType_TypeDefinitionIndex = 37705;

	enum class ClipShapeManager_CurveBinding_BoneParamType : ::System::Int32
	{
		None = 0,
		BonePosX = 1,
		BonePosY = 2,
		BonePosZ = 3,
		BoneRotX = 4,
		BoneRotY = 5,
		BoneRotZ = 6,
	};
}
