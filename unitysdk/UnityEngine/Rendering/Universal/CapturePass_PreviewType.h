#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CapturePass_PreviewType_TypeDefinitionIndex = 27051;

	enum class CapturePass_PreviewType : ::System::Int32
	{
		Effect = 6,
		SkyBackground = 7,
		Albedo = 4,
		Light = 5,
		Position = 2,
		LayerId = 0,
		SkyCloud = 8,
		Depth = 3,
		Normal = 1,
		BaseUV = 9,
	};
}
