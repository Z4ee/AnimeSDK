#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CameraOverlay_TypeDefinitionIndex = 4611;

	enum class CameraOverlay : ::System::Int32
	{
		Base = 0,
		Overlay = 1,
	};
}
