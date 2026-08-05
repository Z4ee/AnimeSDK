#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_RENDERING_UNIVERSAL_OCEANCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C516340)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int OceanConfig_TypeDefinitionIndex = 27623;

	class OceanConfig : public ::System::Object
	{
	public:
		::System::Boolean Enabled; // 0x10
		::System::Boolean Interactable; // 0x11
		::UnityEngine::Vector3 ExtraVelocity; // 0x14
		::System::Single MeshCullingThreshold; // 0x20
		::System::Single FrustumCullingFOVBias; // 0x24
		::System::Boolean DisableSSPR; // 0x28
		::UnityEngine::Vector2 WaveScale; // 0x2C
		::System::Single WaveMapSize; // 0x34
		::System::Single NormalScale; // 0x38
		::System::Single TimeScale; // 0x3C
		::System::Single WindAngle; // 0x40
		::UnityEngine::Texture2D* DetailNoramalMap; // 0x48
		::System::Single DetailNormalMapSize; // 0x50
		::System::Single DetailNormalMapSpeed; // 0x54
		::System::Single DetailNormalScale; // 0x58
		::UnityEngine::Color ShallowWaterColor; // 0x5C
		::UnityEngine::Color DeepWaterColor; // 0x6C
		::System::Single WaterDensityForColor; // 0x7C
		::System::Single WaterDensityForRefraction; // 0x80
		::UnityEngine::Color ScatteringColor; // 0x84
		::System::Single IndirectScateringIntensity; // 0x94
		::System::Single ScateringPow; // 0x98
		::System::Single CharacterBrightnessBelowWater; // 0x9C
		::System::Single Smothness; // 0xA0
		::System::Single SpecularOffset; // 0xA4
		::System::Single SpecularDetailNormalEnhance; // 0xA8
		::UnityEngine::Cubemap* ReflectionCube; // 0xB0
		::System::Single ReflectSmothness; // 0xB8
		::System::Single RTXReflectSmoothness; // 0xBC
		::System::Single RefractionDistortIntensity; // 0xC0
		::System::Single RefractionDistortMaxDepth; // 0xC4
		::UnityEngine::Texture2D* FoamNoiseTexture; // 0xC8
		::System::Single FoamNoiseSize; // 0xD0
		::System::Single EdgeFoamRange; // 0xD4
		::System::Single FoamRange; // 0xD8
		::System::Single FoamFade; // 0xDC
		::System::Single FoamIntensity; // 0xE0
		::System::Boolean FoamToonMode; // 0xE4
		::UnityEngine::Color FoamColor; // 0xE8
		::UnityEngine::Vector2 FoamTiling; // 0xF8
		::System::Single FoamLength; // 0x100
		::System::Single FoamFalloff; // 0x104
		::System::Boolean FoamSharp; // 0x108
		::System::Single FoamClipping; // 0x10C
		::System::Single FoamSpeed; // 0x110
		::System::Single FoamRippleDist; // 0x114
		::System::Single FoamRippleStrength; // 0x118
		::System::Single FoamRippleSpeed; // 0x11C
		::System::Single WetnessHeightOffset; // 0x120
		::System::Single WetnessFade; // 0x124
		::System::Single WetnessIntensity; // 0x128
		::System::Single WetnessExtraSmoothness; // 0x12C
		::System::Boolean useWetnessMask; // 0x130
		::UnityEngine::Texture2D* wetnessMask; // 0x138
		::UnityEngine::Vector4 wetnessMaskPositionScale; // 0x140
		::UnityEngine::Vector4 maskChannelWeight; // 0x150
		::System::Boolean EnableCoastline; // 0x160
		::UnityEngine::Texture2D* CoastlineMap; // 0x168
		::UnityEngine::Vector4 CoastlineLocationScale; // 0x170
		::System::Single CoastlineDecode; // 0x180
		::System::Single CoastlineBlendDistance; // 0x184
		::UnityEngine::Texture2D* CoastlineWaveProfileMap; // 0x188
		::System::Single CoastlineWaveProfileWidth; // 0x190
		::System::Single CoastlineWaveProfileDistance; // 0x194
		::System::Single WaveProfileSpeed; // 0x198
		::System::Single WaveProfileAnimationSpeed; // 0x19C
		::System::Single WaveProfileNormalRange; // 0x1A0
		::UnityEngine::Vector4 CoastlineWaveProfileDecode; // 0x1A4
		::System::Single CoastlineVelocityScale; // 0x1B4
		::System::Boolean _foldCaustic; // 0x1B8
		::UnityEngine::Texture2D* CoastlineCausticMap; // 0x1C0
		::System::Single CoastlineCausticSize; // 0x1C8
		::System::Single CoastlineCausticMaxDepth; // 0x1CC
		::System::Single CoastlineCausticMaxDistance; // 0x1D0
		::System::Single CoastlineCausticDistortIntensity; // 0x1D4
		::System::Single CoastlineCausticBrightness; // 0x1D8
		::System::Single CoastlineCausticSpeed; // 0x1DC
		::System::Single CoastlineCausticChromance; // 0x1E0
		::System::Single CoastlineCausticShadowMaskIntensity; // 0x1E4
		::System::Boolean CoastlineCausticEnableDirectional; // 0x1E8
		::System::Boolean _foldFoam; // 0x1E9
		::UnityEngine::Texture2D* CoastlineFoamMap; // 0x1F0
		::UnityEngine::Color32 CoastlineFoamColor; // 0x1F8
		::System::Single CoastlineFoamScale; // 0x1FC
		::System::Single CoastlineFoamDistance; // 0x200
		::System::Single CoastlineFoamUVScale; // 0x204
		::System::Single CoastlineFoamUVSpeed; // 0x208
		::System::Single CoastlineFoamUVAdvectionOffset; // 0x20C
		::System::Single CoastlineFoamUVAdvectionVelocity; // 0x210
		::System::Single CoastlineFoamColorDetail; // 0x214
		::System::Single CoastlineFoamShallowOffset; // 0x218
		::System::Single CoastlineFoamShallowScale; // 0x21C
		::System::Single CoastlineFoamSoftIntensity; // 0x220
		::System::Single CoastlineFoamSoftVelocity; // 0x224
		::System::Single CoastlineFoamSoftBase; // 0x228
		::System::Single CoastlineFoamSoftMax; // 0x22C
		::System::Single CoastlineFoamHardnessIntensity; // 0x230
		::System::Single CoastlineFoamHardnessWidth; // 0x234
		::UnityEngine::Material* OceanMaterialNear; // 0x238
		::UnityEngine::Material* OceanMaterialNormal; // 0x240
		::UnityEngine::Material* OceanMaterialFar; // 0x248

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OCEANCONFIG__CTOR_OFFSET))(this);
		}
	};
}
