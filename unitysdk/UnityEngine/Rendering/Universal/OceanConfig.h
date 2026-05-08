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

#define UNITYENGINE_RENDERING_UNIVERSAL_OCEANCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x191451A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int OceanConfig_TypeDefinitionIndex = 29977;

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
		::UnityEngine::Texture2D* FoamNoiseTexture; // 0xC0
		::System::Single FoamNoiseSize; // 0xC8
		::System::Single EdgeFoamRange; // 0xCC
		::System::Single FoamRange; // 0xD0
		::System::Single FoamFade; // 0xD4
		::System::Single FoamIntensity; // 0xD8
		::System::Boolean FoamToonMode; // 0xDC
		::UnityEngine::Color FoamColor; // 0xE0
		::UnityEngine::Vector2 FoamTiling; // 0xF0
		::System::Single FoamLength; // 0xF8
		::System::Single FoamFalloff; // 0xFC
		::System::Boolean FoamSharp; // 0x100
		::System::Single FoamClipping; // 0x104
		::System::Single FoamSpeed; // 0x108
		::System::Single FoamRippleDist; // 0x10C
		::System::Single FoamRippleStrength; // 0x110
		::System::Single FoamRippleSpeed; // 0x114
		::System::Single WetnessHeightOffset; // 0x118
		::System::Single WetnessFade; // 0x11C
		::System::Single WetnessIntensity; // 0x120
		::System::Single WetnessExtraSmoothness; // 0x124
		::System::Boolean EnableCoastline; // 0x128
		::UnityEngine::Texture2D* CoastlineMap; // 0x130
		::UnityEngine::Vector4 CoastlineLocationScale; // 0x138
		::System::Single CoastlineDecode; // 0x148
		::System::Single CoastlineBlendDistance; // 0x14C
		::UnityEngine::Texture2D* CoastlineWaveProfileMap; // 0x150
		::System::Single CoastlineWaveProfileWidth; // 0x158
		::System::Single CoastlineWaveProfileDistance; // 0x15C
		::System::Single WaveProfileSpeed; // 0x160
		::System::Single WaveProfileAnimationSpeed; // 0x164
		::System::Single WaveProfileNormalRange; // 0x168
		::UnityEngine::Vector4 CoastlineWaveProfileDecode; // 0x16C
		::UnityEngine::Texture2D* CoastlineCausticMap; // 0x180
		::System::Single CoastlineCausticSize; // 0x188
		::System::Single CoastlineCausticMaxDepth; // 0x18C
		::System::Single CoastlineCausticMaxDistance; // 0x190
		::System::Single CoastlineCausticDistortIntensity; // 0x194
		::System::Single CoastlineCausticBrightness; // 0x198
		::UnityEngine::Texture2D* CoastlineFoamMap; // 0x1A0
		::UnityEngine::Color32 CoastlineFoamColor; // 0x1A8
		::System::Single CoastlineFoamScale; // 0x1AC
		::System::Single CoastlineFoamDistance; // 0x1B0
		::System::Single CoastlineFoamUVScale; // 0x1B4
		::System::Single CoastlineFoamUVSpeed; // 0x1B8
		::System::Single CoastlineFoamUVAdvectionOffset; // 0x1BC
		::System::Single CoastlineFoamUVAdvectionVelocity; // 0x1C0
		::System::Single CoastlineFoamColorDetail; // 0x1C4
		::System::Single CoastlineFoamShallowOffset; // 0x1C8
		::System::Single CoastlineFoamShallowScale; // 0x1CC
		::System::Single CoastlineFoamSoftIntensity; // 0x1D0
		::System::Single CoastlineFoamSoftVelocity; // 0x1D4
		::System::Single CoastlineFoamSoftBase; // 0x1D8
		::System::Single CoastlineFoamSoftMax; // 0x1DC
		::System::Single CoastlineFoamHardnessIntensity; // 0x1E0
		::System::Single CoastlineFoamHardnessWidth; // 0x1E4
		::System::Single CoastlineVelocityScale; // 0x1E8
		::UnityEngine::Material* OceanMaterialNear; // 0x1F0
		::UnityEngine::Material* OceanMaterialNormal; // 0x1F8
		::UnityEngine::Material* OceanMaterialFar; // 0x200

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OCEANCONFIG__CTOR_OFFSET))(this);
		}
	};
}
