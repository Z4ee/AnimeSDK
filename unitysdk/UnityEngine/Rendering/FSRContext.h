#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/FSRConstants.h"
#include "unitysdk/UnityEngine/Rendering/FSRFGQualityMode.h"
#include "unitysdk/UnityEngine/Rendering/FSRQualityMode.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int FSRContext_TypeDefinitionIndex = 6139;

	struct alignas(8) FSRContext
	{
		::System::Int32 w; // 0x10
		::System::Int32 h; // 0x14
		::UnityEngine::Rendering::FSRQualityMode mode; // 0x18
		::UnityEngine::Rendering::FSRFGQualityMode frameGenMode; // 0x1C
		::System::Single sharpness; // 0x20
		::System::Single preExposure; // 0x24
		::System::Single exposureScale; // 0x28
		::System::Boolean colorBuffersHDR; // 0x2C
		::System::Boolean indicatorInvertAxisX; // 0x2D
		::System::Boolean indicatorInvertAxisY; // 0x2E
		::System::Boolean useAutoExposure; // 0x2F
		::System::Boolean useHudlessColor; // 0x30
		::System::Boolean useOffScreenUI; // 0x31
		::System::Boolean useReactiveMask; // 0x32
		::UnityEngine::Rendering::FSRConstants constants; // 0x34
		::UnityEngine::Rendering::RenderTargetIdentifier colorIn; // 0x1E0
		::UnityEngine::Rendering::RenderTargetIdentifier colorOut; // 0x208
		::UnityEngine::Rendering::RenderTargetIdentifier depth; // 0x230
		::UnityEngine::Rendering::RenderTargetIdentifier motion; // 0x258
		::UnityEngine::Rendering::RenderTargetIdentifier frameGenDepth; // 0x280
		::UnityEngine::Rendering::RenderTargetIdentifier frameGenMotion; // 0x2A8
		::UnityEngine::Rendering::RenderTargetIdentifier hudlessColor; // 0x2D0
		::UnityEngine::Rendering::RenderTargetIdentifier offScreenUI; // 0x2F8
		::UnityEngine::Rendering::RenderTargetIdentifier reactiveMask; // 0x320
	};
}
