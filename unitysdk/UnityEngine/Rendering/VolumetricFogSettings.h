#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumetricFogSettings_TypeDefinitionIndex = 4837;

	struct alignas(4) VolumetricFogSettings
	{
		::System::Single ZScale; // 0x10
		::System::Single StartDistance; // 0x14
		::System::Single FarCutoffDistance; // 0x18
		::System::Single DistanceFade; // 0x1C
		::System::Single DistanceFadeExp; // 0x20
		::System::Single PhaseG; // 0x24
		::System::Single PhaseBase; // 0x28
		::System::Single PhaseScale; // 0x2C
		::System::Single GlobalFogDensity; // 0x30
		::UnityEngine::Color GlobalFogColor; // 0x34
		::System::Boolean UseHeightFog; // 0x44
		::System::Single HeightFogFalloff; // 0x48
		::System::Single HeightFogHeight; // 0x4C
		::System::Boolean UseNoise; // 0x50
		::System::Single NoiseTiling; // 0x54
		::System::Single NoiseIntensity; // 0x58
		::System::Single NoisePow; // 0x5C
		::System::Single MinFogDensity; // 0x60
		::System::Boolean UseSecondGlobalFog; // 0x64
		::System::Single SecondFogDensity; // 0x68
		::UnityEngine::Color SecondFogColor; // 0x6C
		::System::Boolean SecondFogUseHeightFog; // 0x7C
		::System::Single SecondHeightFogFalloff; // 0x80
		::System::Single SecondHeightFogHeight; // 0x84
		::System::Boolean EmissionUseConstantDensity; // 0x88
		::System::Single ConstantDensity; // 0x8C
		::System::Int32 ZSlices; // 0x90
		::System::Int32 PixelsPerCell; // 0x94
		::System::Boolean UseLocalLight; // 0x98
		::System::Boolean FogColorAffectLighting; // 0x99
		::System::Boolean UseTemporalFilter; // 0x9A
		::System::Single TemporalAccumulationFactor; // 0x9C
		::System::Single TemporalJitterScale; // 0xA0
		::UnityEngine::Color AmbientColor; // 0xA4
		::System::Single AmbientIntensity; // 0xB4
		::System::Single LightScatteringIntensity; // 0xB8
		::System::Boolean UseSpatialFilter; // 0xBC
		::System::Single SpatialFilterSize; // 0xC0
		::System::Int32 Max3DTextureWidth; // 0xC4
		::System::Int32 Max3DTextureHeight; // 0xC8
		::System::Boolean UseMotionTex; // 0xCC
	};
}
