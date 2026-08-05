#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace UnityEngine::NAP::Rendering
{
	inline static constexpr unsigned int PrepareLightingDataParameter_TypeDefinitionIndex = 6135;

	struct alignas(4) PrepareLightingDataParameter
	{
		::UnityEngine::Matrix4x4 WorldToView; // 0x10
		::System::Int32 MaxPunctualLightsOnScreen; // 0x50
		::System::Int32 MaxEnvLightsOnScreen; // 0x54
		::System::Int32 ScreenWidth; // 0x58
		::System::Int32 ScreenHeight; // 0x5C
		::System::Int32 PunctualLightKeyword; // 0x60
		::System::Int32 PunctualLightCGKeyword; // 0x64
		::System::Int32 CubemapKeyword; // 0x68
		::System::Int32 CullingMask; // 0x6C
		::System::Int32 NapLightDataSize; // 0x70
		::System::Int32 NapEnvLightDataSize; // 0x74
		::System::Int32 LightVolumeDataSize; // 0x78
		::System::Int32 ShadowFlagOn; // 0x7C
		::System::Int32 ShadowIndexMask; // 0x80
		::System::Boolean AllowReflectionProbe; // 0x84
		::System::Boolean EnablePunctualLightShadow; // 0x85
		::System::Boolean SkipWorldToLightCalculation; // 0x86
		::System::Boolean SplitCharacterAndSceneLight; // 0x87
	};
}
