#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScanType_TypeDefinitionIndex = 29880;

	enum class ScanType : ::System::Int32
	{
		Linear = 0,
		RadialFromCamera = 1,
		RadialFromAvatar = 2,
		RadialFromCustom = 3,
	};
}
