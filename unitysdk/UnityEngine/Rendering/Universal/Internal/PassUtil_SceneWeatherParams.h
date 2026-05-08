#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SCENEWEATHERPARAMS_FLUSH_OFFSET UNITYSDK_OFFSET(0x8AE700)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PassUtil_SceneWeatherParams_TypeDefinitionIndex = 30519;

	struct alignas(8) PassUtil_SceneWeatherParams
	{
		::UnityEngine::Vector4 _HeightMapResolution; // 0x10
		::UnityEngine::Vector4 _SceneWaterPoolBoundBox; // 0x20
		::UnityEngine::Vector4 _SceneWaterPoolMinMaxHeight; // 0x30
		::UnityEngine::Vector4 _SceneBoundBox; // 0x40
		::System::Single _SceneHightMapYOffset; // 0x50
		::UnityEngine::Vector4 _RainParam2AndExposure; // 0x54
		::UnityEngine::Vector4 _WetnessNoiseParam; // 0x64
		::UnityEngine::Vector4 _GlobalEtherColor; // 0x74
		::UnityEngine::Vector4 _GlobalEtherEffectColor; // 0x84
		::UnityEngine::Vector4 _GlobalEtherWaveColor; // 0x94
		::UnityEngine::Vector4 _GlobalEffectWaterColor; // 0xA4
		::UnityEngine::Vector4 _SceneSpecialParams; // 0xB4
		::UnityEngine::Vector4 _NapGIDiffuseColor; // 0xC4
		::UnityEngine::Vector3 _NapGISpecularColor; // 0xD4
		::System::Single _NapSceneClipPlaneY; // 0xE0
		::UnityEngine::Vector2 _WetnessSmoothnessClampParams; // 0xE4
		::System::Boolean _WetnessWaterPool; // 0xEC
		::System::Boolean _UseSkyOnlyGI; // 0xED
		::UnityEngine::Vector4 _AmbientSkyColor; // 0xF0
		::UnityEngine::Vector4 _SceneSpecialPPSEmissionAndIntensity; // 0x100
		::UnityEngine::Vector4 _SceneCameraClipCenterAndHeight; // 0x110
		::UnityEngine::Vector4 _SceneCameraClipExtensionAndAlpha; // 0x120
		::UnityEngine::Vector4 _SceneSpecialPPSRadius_Power_Saturation; // 0x130
		::UnityEngine::Vector4 global_unity_SHAr; // 0x140
		::UnityEngine::Vector4 global_unity_SHAg; // 0x150
		::UnityEngine::Vector4 global_unity_SHAb; // 0x160
		::UnityEngine::Vector4 global_unity_SHBr; // 0x170
		::UnityEngine::Vector4 global_unity_SHBg; // 0x180
		::UnityEngine::Vector4 global_unity_SHBb; // 0x190
		::UnityEngine::Vector4 global_unity_SHC; // 0x1A0
		::UnityEngine::Texture* sceneSpecialPPSSaturationLut; // 0x1B0

		::System::Void Flush(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SCENEWEATHERPARAMS_FLUSH_OFFSET))(this, cmd);
		}
	};
}
