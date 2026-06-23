#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass_Level_TypeDefinitionIndex = 26704;

	struct alignas(8) PostProcessPass_Level
	{
		::System::Int32 down; // 0x10
		::System::Int32 blurred; // 0x14
		::UnityEngine::Rendering::RenderTargetIdentifier downRTID; // 0x18
		::UnityEngine::Rendering::RenderTargetIdentifier blurredRTID; // 0x40
		::System::Int32 width; // 0x68
		::System::Int32 height; // 0x6C
		::System::Int32 blurTexelRadius; // 0x70
	};
}
