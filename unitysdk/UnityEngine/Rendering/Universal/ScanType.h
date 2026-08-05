#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScanType_TypeDefinitionIndex = 26863;

	enum class ScanType : ::System::Int32
	{
		RadialFromAvatar = 2,
		RadialFromCustom = 3,
		Linear = 0,
		RadialFromCamera = 1,
	};
}
