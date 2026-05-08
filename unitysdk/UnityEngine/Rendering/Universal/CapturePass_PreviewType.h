#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CapturePass_PreviewType_TypeDefinitionIndex = 30183;

	enum class CapturePass_PreviewType : ::System::Int32
	{
		LayerId = 0,
		Normal = 1,
		Position = 2,
		Depth = 3,
		Albedo = 4,
		Light = 5,
		Effect = 6,
		SkyBackground = 7,
		SkyCloud = 8,
		BaseUV = 9,
	};
}
