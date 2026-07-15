#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityChan
{
	inline static constexpr unsigned int SpringManager_SpringBonePropertyType_TypeDefinitionIndex = 45901;

	enum class SpringManager_SpringBonePropertyType : ::System::Int32
	{
		ratio = 0,
		rootOffetBlend = 1,
		stiffnessForce = 2,
		dragForce = 3,
		boneTag = 4,
	};
}
