#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DLSSOptimalSettings_TypeDefinitionIndex = 6141;

	struct alignas(4) DLSSOptimalSettings
	{
		::System::Int32 optimalRenderWidth; // 0x10
		::System::Int32 optimalRenderHeight; // 0x14
		::System::Single optimalSharpness; // 0x18
		::System::Int32 renderWidthMin; // 0x1C
		::System::Int32 renderHeightMin; // 0x20
		::System::Int32 renderWidthMax; // 0x24
		::System::Int32 renderHeightMax; // 0x28
	};
}
