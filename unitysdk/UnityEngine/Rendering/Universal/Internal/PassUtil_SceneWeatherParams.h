#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SCENEWEATHERPARAMS_FLUSH_OFFSET UNITYSDK_OFFSET(0x989CA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SCENEWEATHERPARAMS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D30CA30)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PassUtil_SceneWeatherParams_TypeDefinitionIndex = 27110;

	struct alignas(8) PassUtil_SceneWeatherParams
	{
		static ::UnityEngine::Matrix4x4* StaticGet__SceneFogParamsPart3()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_SceneWeatherParams_TypeDefinitionIndex)->GetStaticField(0x7430);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__SceneFogParamsPart2()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_SceneWeatherParams_TypeDefinitionIndex)->GetStaticField(0x7470);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__SceneFogParamsPart1()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_SceneWeatherParams_TypeDefinitionIndex)->GetStaticField(0x74B0);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__SceneFogParamsPart4()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_SceneWeatherParams_TypeDefinitionIndex)->GetStaticField(0x74F0);
		}
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
		::UnityEngine::Vector3 _SceneCameraClipExtraExtensionForFX; // 0x130
		::UnityEngine::Vector4 _SceneSpecialPPSRadius_Power_Saturation; // 0x13C
		::UnityEngine::Vector4 global_unity_SHAr; // 0x14C
		::UnityEngine::Vector4 global_unity_SHAg; // 0x15C
		::UnityEngine::Vector4 global_unity_SHAb; // 0x16C
		::UnityEngine::Vector4 global_unity_SHBr; // 0x17C
		::UnityEngine::Vector4 global_unity_SHBg; // 0x18C
		::UnityEngine::Vector4 global_unity_SHBb; // 0x19C
		::UnityEngine::Vector4 global_unity_SHC; // 0x1AC
		::UnityEngine::Texture* sceneSpecialPPSSaturationLut; // 0x1C0
		::UnityEngine::Vector4 _GlobalDecalBlendParameter; // 0x1C8
		::System::Boolean kw_CameraClipTestOn; // 0x1D8
		::UnityEngine::Vector4 _InteriorDayAndNight; // 0x1DC
		::UnityEngine::Vector3 _FogExtinctColor; // 0x1EC
		::UnityEngine::Vector3 _FogRayColor; // 0x1F8
		::UnityEngine::Vector4 _FogMieColorG; // 0x204
		::UnityEngine::Vector4 _FogParams0; // 0x214
		::UnityEngine::Vector4 _FogParams1; // 0x224
		::UnityEngine::Vector4 _FogMaskCenterRange; // 0x234
		::UnityEngine::Vector4 _FogMaskScatteringAbsorption; // 0x244
		::UnityEngine::Vector4 _FogMaskParams; // 0x254
		::UnityEngine::Vector4 _Fog2ColorA; // 0x264
		::UnityEngine::Vector4 _Fog2ColorB; // 0x274
		::UnityEngine::Vector4 _Fog2Params0; // 0x284
		::UnityEngine::Vector4 _Fog2Params1; // 0x294
		::UnityEngine::Vector4 _RainGroundFogParams1; // 0x2A4
		::UnityEngine::Vector4 _RainGroundFogParams2; // 0x2B4
		::UnityEngine::Vector4 _RainGroundFogColor; // 0x2C4
		::UnityEngine::Matrix4x4 _RainGroundParamsMatrix; // 0x2D4
		::UnityEngine::Vector4 _SkyHorizontalParam; // 0x314
		::UnityEngine::Texture* _SkyLUTTexture; // 0x328
		::UnityEngine::Texture* _SkyAngleLUTTexture; // 0x330
		::UnityEngine::Vector4 _ScreenRainDropParams; // 0x338
		::UnityEngine::Vector4 _RippleParam; // 0x348
		::UnityEngine::Vector4 _GlobalWindDirection; // 0x358
		::UnityEngine::Vector4 _GlobalWindParam; // 0x368
		::UnityEngine::Vector4 _GlobalEtherFXParams; // 0x378
		::UnityEngine::Vector4 _WorldTwistSpiralParams1; // 0x388
		::UnityEngine::Vector4 _WorldTwistSpiralParams2; // 0x398
		::UnityEngine::Vector4 _WorldTwistSpiralParams3; // 0x3A8
		::UnityEngine::Vector4 _WorldTwistSpiralParams4; // 0x3B8
		::UnityEngine::Vector4 _WorldTwistSpiralParams5; // 0x3C8
		::UnityEngine::Vector4 _SceneParticleFogColorMultiply; // 0x3D8
		::UnityEngine::Vector4 _SceneWeatherSandstorm; // 0x3E8
		::UnityEngine::Matrix4x4 _VfxShadowInfoMatrix; // 0x3F8
		::UnityEngine::Matrix4x4 _CloudParamsPartA; // 0x438
		::UnityEngine::Matrix4x4 _CloudParamsPartB; // 0x478
		::UnityEngine::Vector4 _NapEffectBrightnessParams4; // 0x4B8
		::UnityEngine::Vector4 _NapEffectBrightnessExtraParams; // 0x4C8
		::System::Boolean lowEarthEnabled; // 0x4D8
		::UnityEngine::Vector4 _SkyLowEarthParams0; // 0x4DC
		::UnityEngine::Vector4 _SkyLowEarthParams1; // 0x4EC
		::UnityEngine::Vector4 _SkyLowEarthTint; // 0x4FC
		::UnityEngine::Vector4 _SkyLowEarthFogColor; // 0x50C
		::UnityEngine::Vector4 _SkyLowEarthRimColor; // 0x51C
		::UnityEngine::Vector4 _SkyLowEarthRimParams; // 0x52C
		::System::Boolean skyGridOn; // 0x53C
		::UnityEngine::Vector4 _SkyGridParam; // 0x540
		::UnityEngine::Vector4 _SkyGridColor; // 0x550
		::UnityEngine::Texture* _SkyGridTexture; // 0x560
		::UnityEngine::Texture* _SkyGridNoiseTexture; // 0x568
		::UnityEngine::Vector4 _GlobalDetailLayerParams0; // 0x570
		::UnityEngine::Vector4 _ParticleLightParams; // 0x580
		::UnityEngine::Vector4 _ParticleLightParams2; // 0x590
		::System::Single _GlobalAdditionalLightIntensity; // 0x5A0
		::System::Single _OverrideSkyWeight; // 0x5A4
		::UnityEngine::Matrix4x4 _OverrideSkyParamsPartA; // 0x5A8
		::System::Boolean CloudLightEnabled; // 0x5E8
		::UnityEngine::Vector4 _CloudLightParams1; // 0x5EC
		::UnityEngine::Vector4 _CloudLightParams2; // 0x5FC
		::System::Boolean cloudShadowValid; // 0x60C
		::UnityEngine::Texture* _CloudShadow; // 0x610
		::UnityEngine::Matrix4x4 _CloudShadowRotateMatrix; // 0x618
		::UnityEngine::Vector4 _CloudShadowMoveSpeed; // 0x658
		::UnityEngine::Vector4 _CharacterLightTonemapParams; // 0x668

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SCENEWEATHERPARAMS__CCTOR_OFFSET))();
		}

		::System::Void Flush(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SCENEWEATHERPARAMS_FLUSH_OFFSET))(this, cmd);
		}
	};
}
