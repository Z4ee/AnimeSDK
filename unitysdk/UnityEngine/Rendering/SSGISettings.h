#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/SSGIApplyMode.h"
#include "unitysdk/UnityEngine/Rendering/SSGIDisocclusionFixMethod.h"
#include "unitysdk/UnityEngine/Rendering/SSGIRayMarchingMethod.h"
#include "unitysdk/UnityEngine/Rendering/SSGIRayMarchingQuality.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SSGISettings_TypeDefinitionIndex = 4834;

	struct alignas(4) SSGISettings
	{
		::System::Boolean Enable; // 0x10
		::System::Single RenderScale; // 0x14
		::System::Int32 RenderHeightClamp; // 0x18
		::System::Single ScreenFadeDist; // 0x1C
		::System::Int32 SpatialFilterIterCount; // 0x20
		::System::Boolean SpatialFilterJitter; // 0x24
		::UnityEngine::Rendering::SSGIDisocclusionFixMethod DisocclusionFixMethod; // 0x28
		::System::Int32 TemporalSampleCount; // 0x2C
		::System::Int32 TemporalSampleCountFast; // 0x30
		::UnityEngine::Rendering::SSGIRayMarchingMethod RayMarchingMethod; // 0x34
		::UnityEngine::Rendering::SSGIRayMarchingQuality RayMarchingQuality; // 0x38
		::System::Single BrightnessBoostFactor; // 0x3C
		::System::Single BrightnessBoostThreshold; // 0x40
		::System::Single ResultBrightnessLimit; // 0x44
		::System::Boolean Denoise; // 0x48
		::System::Boolean DenoiseEnablePrePostTransform; // 0x49
		::System::Single ObjectThickness; // 0x4C
		::System::Boolean PostTAA; // 0x50
		::System::Single PostTAAWeight; // 0x54
		::System::Boolean Upscale; // 0x58
		::System::Int32 UpscaleResolutionHeight; // 0x5C
		::System::Single EmissionIndirectBoost; // 0x60
		::System::Single MainLightIndirectBoost; // 0x64
		::UnityEngine::Rendering::SSGIApplyMode ApplyMode; // 0x68
		::System::Single Intensity; // 0x6C
	};
}
