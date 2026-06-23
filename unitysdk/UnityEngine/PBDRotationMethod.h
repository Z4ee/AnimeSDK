#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int PBDRotationMethod_TypeDefinitionIndex = 18741;

	enum class PBDRotationMethod : ::System::Int32
	{
		NoRotation = 0,
		AverageNormal = 1,
		AverageQuaternion = 2,
	};
}
