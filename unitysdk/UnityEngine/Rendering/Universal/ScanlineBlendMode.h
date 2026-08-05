#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScanlineBlendMode_TypeDefinitionIndex = 27803;

	enum class ScanlineBlendMode : ::System::Int32
	{
		Overlay = 1,
		Normal = 0,
	};
}
