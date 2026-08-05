#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CapturePass_PreviewType_TypeDefinitionIndex = 27027;

	enum class CapturePass_PreviewType : ::System::Int32
	{
		SkyCloud = 8,
		Depth = 3,
		Light = 5,
		Normal = 1,
		Effect = 6,
		SkyBackground = 7,
		BaseUV = 9,
		Albedo = 4,
		LayerId = 0,
		Position = 2,
	};
}
