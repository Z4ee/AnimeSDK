#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScanType_TypeDefinitionIndex = 26191;

	enum class ScanType : ::System::Int32
	{
		RadialFromCamera = 1,
		RadialFromAvatar = 2,
		Linear = 0,
		RadialFromCustom = 3,
	};
}
