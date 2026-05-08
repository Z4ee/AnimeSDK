#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LazyLoadReference_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CharacterColorGradingParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DrawCloudParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DrawFakeLightVolumetricFogParam.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DrawLightShaftParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DrawRainDropParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DrawRainSplashParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DrawSkyCoverParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DrawVolumetricFogWeatherConfigParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EKodamaGIType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ESupportedGIType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RGBMaskType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/TextureChannel.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/UpdateKodamaLightingParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/WeatherConfigDrawSkyParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/WeatherConfigSkyLutGradParams.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/WindType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SceneColorGradingParams.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VisualEnvironmentE_WeatherType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/WeatherConfig_CapturedWeatherData.h"
#include "unitysdk/WeatherConfig_ResultMainLightParams.h"
#include "unitysdk/WeatherConfig_RuntimeUsedNightTextures.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureCurve; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class LensFlareDataSRP; }
namespace UnityEngine::Rendering::Universal { class DetailLayerConfig; }
namespace UnityEngine::Rendering::Universal { class ExpHeightFogConfig; }
namespace UnityEngine::Rendering::Universal { class FogMaskConfig; }
namespace UnityEngine::Rendering::Universal { class GIConfig; }
namespace UnityEngine::Rendering::Universal { class LensFlareConfig; }
namespace UnityEngine::Rendering::Universal { class LightShaftConfig; }
namespace UnityEngine::Rendering::Universal { class OceanConfig; }
namespace UnityEngine::Rendering::Universal { class OceanFFTBakeData; }
namespace UnityEngine::Rendering::Universal { class RTXGIConfig; }
namespace UnityEngine::Rendering::Universal { class RTXGIRoughnessConfig; }
namespace UnityEngine::Rendering::Universal { class SceneParticleConfig; }
namespace UnityEngine::Rendering::Universal { class ScenePostEffectConfig; }
namespace UnityEngine::Rendering::Universal { class ScreenRainDropConfig; }
namespace UnityEngine::Rendering::Universal { class SecondFogConfig; }
namespace UnityEngine::Rendering::Universal { class SingleWeatherConfigParticle; }
namespace UnityEngine::Rendering::Universal { class SingleWeatherConfigWater; }
namespace UnityEngine::Rendering::Universal { class SingleWeatherConfigWind; }
namespace UnityEngine::Rendering::Universal { class SkyCloudConfig; }
namespace UnityEngine::Rendering::Universal { class SkyEffectOutlineConfig; }
namespace UnityEngine::Rendering::Universal { class SkyGridConfig; }
namespace UnityEngine::Rendering::Universal { class VolumetricCloudConfig; }

#define WEATHERCONFIG_BINDMAINLIGHTDATA_OFFSET UNITYSDK_OFFSET(0x19F3C6F0)
#define WEATHERCONFIG_BINDNIGHTTEXTURES_OFFSET UNITYSDK_OFFSET(0x19F3CAF0)
#define WEATHERCONFIG_CAPTUREDATAFORRENDER_OFFSET UNITYSDK_OFFSET(0x19F3D430)
#define WEATHERCONFIG_COPYCHARACTERCONFIG_OFFSET UNITYSDK_OFFSET(0x19F43550)
#define WEATHERCONFIG_CREATETONECURVETEXTURE_OFFSET UNITYSDK_OFFSET(0x19F431A0)
#define WEATHERCONFIG_DEFAULTWEATHERCONFIG_OFFSET UNITYSDK_OFFSET(0x19F39AA0)
#define WEATHERCONFIG_EVALUATEMAINLIGHTINTENSITY_OFFSET UNITYSDK_OFFSET(0x19F3CC90)
#define WEATHERCONFIG_EVALUATESUNDISK_OFFSET UNITYSDK_OFFSET(0x19F3CC10)
#define WEATHERCONFIG_GETCHARACTERCOLORGRADINGENABLED_OFFSET UNITYSDK_OFFSET(0x19F3DE80)
#define WEATHERCONFIG_GETDRAWCLOUDPARAMS_OFFSET UNITYSDK_OFFSET(0x19F3EB00)
#define WEATHERCONFIG_GETDRAWFAKELIGHTVOLUMETRICFOGPARAM_OFFSET UNITYSDK_OFFSET(0x19F413A0)
#define WEATHERCONFIG_GETDRAWRAINDROPPARAMS_OFFSET UNITYSDK_OFFSET(0x19F403D0)
#define WEATHERCONFIG_GETDRAWRAINSPLASHPARAMS_OFFSET UNITYSDK_OFFSET(0x19F40710)
#define WEATHERCONFIG_GETDRAWSKYCOVERPARAMS_OFFSET UNITYSDK_OFFSET(0x19F40350)
#define WEATHERCONFIG_GETDRAWVOLUMETRICFOGWEATHERCONFIGPARAMS_OFFSET UNITYSDK_OFFSET(0x19F412C0)
#define WEATHERCONFIG_GETDYNAMICOBJECTGIINTENSITY_OFFSET UNITYSDK_OFFSET(0x19F3DD50)
#define WEATHERCONFIG_GETGROUNDPOS_OFFSET UNITYSDK_OFFSET(0x19F3ECE0)
#define WEATHERCONFIG_GETIBLREFLECTIONPARAM_OFFSET UNITYSDK_OFFSET(0x19F3EC10)
#define WEATHERCONFIG_GETKODAMAGIPARAMS_OFFSET UNITYSDK_OFFSET(0x19F3DDB0)
#define WEATHERCONFIG_GETKODAMAGITYPE_OFFSET UNITYSDK_OFFSET(0x19F3EB60)
#define WEATHERCONFIG_GETLIGHTSHAFTDRAWPARAMS_OFFSET UNITYSDK_OFFSET(0x19F40E10)
#define WEATHERCONFIG_GETLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0x19F41AF0)
#define WEATHERCONFIG_GETMAINLIGHTDIR_OFFSET UNITYSDK_OFFSET(0x19F41770)
#define WEATHERCONFIG_GETPOSTEXPOSURE_OFFSET UNITYSDK_OFFSET(0x19F3EC90)
#define WEATHERCONFIG_GETPREVIEWSKYBOXFORBAKE_OFFSET UNITYSDK_OFFSET(0x19F3EAB0)
#define WEATHERCONFIG_GETREPLACESKYBOXMAT_OFFSET UNITYSDK_OFFSET(0x19F3ED60)
#define WEATHERCONFIG_GETSCENECOLORGRADINGPARAMS_OFFSET UNITYSDK_OFFSET(0x19F41B40)
#define WEATHERCONFIG_GETSUPPORTEDGITYPE_OFFSET UNITYSDK_OFFSET(0x19F3EBC0)
#define WEATHERCONFIG_GETTINTSHADOWBLURRADIUS_OFFSET UNITYSDK_OFFSET(0x19F411F0)
#define WEATHERCONFIG_GETUPDATEKODAMAGILIGHTINGPARAMS_OFFSET UNITYSDK_OFFSET(0x19F409C0)
#define WEATHERCONFIG_GETUSEANIMATION_OFFSET UNITYSDK_OFFSET(0x19F3EA60)
#define WEATHERCONFIG_GETUSECLOUDMIDDLECOLOR_OFFSET UNITYSDK_OFFSET(0x19F3EA20)
#define WEATHERCONFIG_GETUSERLOGLUTPARAMS_OFFSET UNITYSDK_OFFSET(0x19F3E500)
#define WEATHERCONFIG_GETUSERLOOKUPTABLEPARAMS_OFFSET UNITYSDK_OFFSET(0x19F3E2C0)
#define WEATHERCONFIG_GETWEATHERCONFIGDRAWSKYPARAMS_OFFSET UNITYSDK_OFFSET(0x19F3EF10)
#define WEATHERCONFIG_GETWEATHERCONFIGSKYLUTGRADPARAMS_OFFSET UNITYSDK_OFFSET(0x19F41460)
#define WEATHERCONFIG_GETWEATHERCONFIGSKYLUTHASHES_OFFSET UNITYSDK_OFFSET(0x19F417E0)
#define WEATHERCONFIG_GET_CLOUDLERPALPHA_OFFSET UNITYSDK_OFFSET(0x19F39EE0)
#define WEATHERCONFIG_GET_CUSTOMSKYBOXMESH_OFFSET UNITYSDK_OFFSET(0x19F39DE0)
#define WEATHERCONFIG_GET_DISABLESSPR_OFFSET UNITYSDK_OFFSET(0x19F39C90)
#define WEATHERCONFIG_GET_ENABLELOCALHEIGHTMAP_OFFSET UNITYSDK_OFFSET(0x19F39F20)
#define WEATHERCONFIG_GET_ENABLEOCEAN_OFFSET UNITYSDK_OFFSET(0x19F39B20)
#define WEATHERCONFIG_GET_GLOBALDECALBLENDPARAMS_OFFSET UNITYSDK_OFFSET(0x19F3A060)
#define WEATHERCONFIG_GET_GROUNDPOS_OFFSET UNITYSDK_OFFSET(0x19F3A340)
#define WEATHERCONFIG_GET_HASTRIGGERSPECIALCLOUDLAYER_OFFSET UNITYSDK_OFFSET(0x19F39EA0)
#define WEATHERCONFIG_GET_HEIGHTMAP2_OFFSET UNITYSDK_OFFSET(0x19F3A040)
#define WEATHERCONFIG_GET_HEIGHTMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x19F3A0E0)
#define WEATHERCONFIG_GET_HEIGHTMAP_OFFSET UNITYSDK_OFFSET(0x19F39F00)
#define WEATHERCONFIG_GET_HOLLOWCOVERMESH_OFFSET UNITYSDK_OFFSET(0x19F39E40)
#define WEATHERCONFIG_GET_HOLLOWCOVERSIZE_OFFSET UNITYSDK_OFFSET(0x19F39E20)
#define WEATHERCONFIG_GET_ISOPTIMIZEDSCENEBOUNDBOXVALUE_OFFSET UNITYSDK_OFFSET(0x19F3A300)
#define WEATHERCONFIG_GET_LERPVALUE_OFFSET UNITYSDK_OFFSET(0x19F39EC0)
#define WEATHERCONFIG_GET_NAVMESHBOUNDBOX_OFFSET UNITYSDK_OFFSET(0x19F3A320)
#define WEATHERCONFIG_GET_OCEANCENTER_OFFSET UNITYSDK_OFFSET(0x19F39FE0)
#define WEATHERCONFIG_GET_OCEANDEPTHOFFSET_OFFSET UNITYSDK_OFFSET(0x19F3A020)
#define WEATHERCONFIG_GET_OCEANFFTBAKEDATA_OFFSET UNITYSDK_OFFSET(0x19F39FC0)
#define WEATHERCONFIG_GET_OCEANMASKHEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x19F39FA0)
#define WEATHERCONFIG_GET_OCEANMASKMAPRECT_OFFSET UNITYSDK_OFFSET(0x19F39F60)
#define WEATHERCONFIG_GET_OCEANMASKMAP_OFFSET UNITYSDK_OFFSET(0x19F39F40)
#define WEATHERCONFIG_GET_OVERRIDELOWCLOUDDARKCOLOR_OFFSET UNITYSDK_OFFSET(0x19F39D80)
#define WEATHERCONFIG_GET_OVERRIDELOWCLOUDLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x19F39D60)
#define WEATHERCONFIG_GET_OVERRIDESKYBTNCOLOR_OFFSET UNITYSDK_OFFSET(0x19F39D20)
#define WEATHERCONFIG_GET_OVERRIDESKYTOPCOLOR_OFFSET UNITYSDK_OFFSET(0x19F39D40)
#define WEATHERCONFIG_GET_OVERRIDESKYWEIGHT_OFFSET UNITYSDK_OFFSET(0x19F39D00)
#define WEATHERCONFIG_GET_PARTICLECONFIG_OFFSET UNITYSDK_OFFSET(0x19F3A360)
#define WEATHERCONFIG_GET_SCENEBOUNDBOX_OFFSET UNITYSDK_OFFSET(0x19F3A2C0)
#define WEATHERCONFIG_GET_SCENECLIPPLANEY_OFFSET UNITYSDK_OFFSET(0x19F39DC0)
#define WEATHERCONFIG_GET_SCENEETHERCOVEREFFECTMAT_OFFSET UNITYSDK_OFFSET(0x19F39E00)
#define WEATHERCONFIG_GET_SCENEHEIGHTMAPYOFFSET_OFFSET UNITYSDK_OFFSET(0x19F3A2E0)
#define WEATHERCONFIG_GET_SCENEWATERPOOLBOUNDBOX_OFFSET UNITYSDK_OFFSET(0x19F3A0A0)
#define WEATHERCONFIG_GET_SCENEWATERPOOLMAP_OFFSET UNITYSDK_OFFSET(0x19F3A080)
#define WEATHERCONFIG_GET_SCENEWATERPOOLMINMAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x19F3A0C0)
#define WEATHERCONFIG_GET_SEALEVELHEIGHT_OFFSET UNITYSDK_OFFSET(0x19F39F80)
#define WEATHERCONFIG_GET_SPECULARTONEMAPPINGCURVETEXTURE_OFFSET UNITYSDK_OFFSET(0x19F39CF0)
#define WEATHERCONFIG_GET_SUPPORTEDGITYPE_OFFSET UNITYSDK_OFFSET(0x19F39DA0)
#define WEATHERCONFIG_GET_WATERCONFIG_OFFSET UNITYSDK_OFFSET(0x19F3A380)
#define WEATHERCONFIG_GET_WATERHEIGHT_OFFSET UNITYSDK_OFFSET(0x19F39E80)
#define WEATHERCONFIG_GET_WATERMATERIALS_OFFSET UNITYSDK_OFFSET(0x19F39E60)
#define WEATHERCONFIG_GET_WINDCONFIG_OFFSET UNITYSDK_OFFSET(0x19F3A3A0)
#define WEATHERCONFIG_HASGLOBALVOLUMETRICFOG_OFFSET UNITYSDK_OFFSET(0x19F41270)
#define WEATHERCONFIG_HASLIGHTFOGPROXY_OFFSET UNITYSDK_OFFSET(0x19F41410)
#define WEATHERCONFIG_ISAMBIENTACTIVE_OFFSET UNITYSDK_OFFSET(0x19F3CD10)
#define WEATHERCONFIG_ISLIGHTSHAFTON_OFFSET UNITYSDK_OFFSET(0x19F3C490)
#define WEATHERCONFIG_ISSKYBOXFORBAKE_OFFSET UNITYSDK_OFFSET(0x19F3EDB0)
#define WEATHERCONFIG_LEARPCHARACTERCOLORGRADINGPARAMS_OFFSET UNITYSDK_OFFSET(0x19F3DED0)
#define WEATHERCONFIG_LERPWEATHERNEW_OFFSET UNITYSDK_OFFSET(0x19F3BD80)
#define WEATHERCONFIG_RELEASE_OFFSET UNITYSDK_OFFSET(0x19F3B8A0)
#define WEATHERCONFIG_REPLACESKINRAMPCOLORSWITHOTHERRAMP_OFFSET UNITYSDK_OFFSET(0x19F439E0)
#define WEATHERCONFIG_SETDEFAULTVALUES_OFFSET UNITYSDK_OFFSET(0x19F438E0)
#define WEATHERCONFIG_SETFOG_OFFSET UNITYSDK_OFFSET(0x19F3C430)
#define WEATHERCONFIG_SETUPCHROMATICABERRATION_OFFSET UNITYSDK_OFFSET(0x19F3FCF0)
#define WEATHERCONFIG_SETUPSPECULARTONEMAPPING_OFFSET UNITYSDK_OFFSET(0x19F43290)
#define WEATHERCONFIG_SETVISUALENVDATA_OFFSET UNITYSDK_OFFSET(0x19F3C6B0)
#define WEATHERCONFIG_SET_CLOUDLERPALPHA_OFFSET UNITYSDK_OFFSET(0x19F39EF0)
#define WEATHERCONFIG_SET_CUSTOMSKYBOXMESH_OFFSET UNITYSDK_OFFSET(0x19F39DF0)
#define WEATHERCONFIG_SET_ENABLELOCALHEIGHTMAP_OFFSET UNITYSDK_OFFSET(0x19F39F30)
#define WEATHERCONFIG_SET_GLOBALDECALBLENDPARAMS_OFFSET UNITYSDK_OFFSET(0x19F3A070)
#define WEATHERCONFIG_SET_GROUNDPOS_OFFSET UNITYSDK_OFFSET(0x19F3A350)
#define WEATHERCONFIG_SET_HASTRIGGERSPECIALCLOUDLAYER_OFFSET UNITYSDK_OFFSET(0x19F39EB0)
#define WEATHERCONFIG_SET_HEIGHTMAP2_OFFSET UNITYSDK_OFFSET(0x19F3A050)
#define WEATHERCONFIG_SET_HEIGHTMAP_OFFSET UNITYSDK_OFFSET(0x19F39F10)
#define WEATHERCONFIG_SET_HOLLOWCOVERMESH_OFFSET UNITYSDK_OFFSET(0x19F39E50)
#define WEATHERCONFIG_SET_HOLLOWCOVERSIZE_OFFSET UNITYSDK_OFFSET(0x19F39E30)
#define WEATHERCONFIG_SET_ISOPTIMIZEDSCENEBOUNDBOXVALUE_OFFSET UNITYSDK_OFFSET(0x19F3A310)
#define WEATHERCONFIG_SET_LERPVALUE_OFFSET UNITYSDK_OFFSET(0x19F39ED0)
#define WEATHERCONFIG_SET_NAVMESHBOUNDBOX_OFFSET UNITYSDK_OFFSET(0x19F3A330)
#define WEATHERCONFIG_SET_OCEANCENTER_OFFSET UNITYSDK_OFFSET(0x19F3A000)
#define WEATHERCONFIG_SET_OCEANDEPTHOFFSET_OFFSET UNITYSDK_OFFSET(0x19F3A030)
#define WEATHERCONFIG_SET_OCEANFFTBAKEDATA_OFFSET UNITYSDK_OFFSET(0x19F39FD0)
#define WEATHERCONFIG_SET_OCEANMASKHEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x19F39FB0)
#define WEATHERCONFIG_SET_OCEANMASKMAPRECT_OFFSET UNITYSDK_OFFSET(0x19F39F70)
#define WEATHERCONFIG_SET_OCEANMASKMAP_OFFSET UNITYSDK_OFFSET(0x19F39F50)
#define WEATHERCONFIG_SET_OVERRIDELOWCLOUDDARKCOLOR_OFFSET UNITYSDK_OFFSET(0x19F39D90)
#define WEATHERCONFIG_SET_OVERRIDELOWCLOUDLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x19F39D70)
#define WEATHERCONFIG_SET_OVERRIDESKYBTNCOLOR_OFFSET UNITYSDK_OFFSET(0x19F39D30)
#define WEATHERCONFIG_SET_OVERRIDESKYTOPCOLOR_OFFSET UNITYSDK_OFFSET(0x19F39D50)
#define WEATHERCONFIG_SET_OVERRIDESKYWEIGHT_OFFSET UNITYSDK_OFFSET(0x19F39D10)
#define WEATHERCONFIG_SET_PARTICLECONFIG_OFFSET UNITYSDK_OFFSET(0x19F3A370)
#define WEATHERCONFIG_SET_SCENEBOUNDBOX_OFFSET UNITYSDK_OFFSET(0x19F3A2D0)
#define WEATHERCONFIG_SET_SCENECLIPPLANEY_OFFSET UNITYSDK_OFFSET(0x19F39DD0)
#define WEATHERCONFIG_SET_SCENEETHERCOVEREFFECTMAT_OFFSET UNITYSDK_OFFSET(0x19F39E10)
#define WEATHERCONFIG_SET_SCENEHEIGHTMAPYOFFSET_OFFSET UNITYSDK_OFFSET(0x19F3A2F0)
#define WEATHERCONFIG_SET_SCENEWATERPOOLBOUNDBOX_OFFSET UNITYSDK_OFFSET(0x19F3A0B0)
#define WEATHERCONFIG_SET_SCENEWATERPOOLMAP_OFFSET UNITYSDK_OFFSET(0x19F3A090)
#define WEATHERCONFIG_SET_SCENEWATERPOOLMINMAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x19F3A0D0)
#define WEATHERCONFIG_SET_SEALEVELHEIGHT_OFFSET UNITYSDK_OFFSET(0x19F39F90)
#define WEATHERCONFIG_SET_SUPPORTEDGITYPE_OFFSET UNITYSDK_OFFSET(0x19F39DB0)
#define WEATHERCONFIG_SET_WATERCONFIG_OFFSET UNITYSDK_OFFSET(0x19F3A390)
#define WEATHERCONFIG_SET_WATERHEIGHT_OFFSET UNITYSDK_OFFSET(0x19F39E90)
#define WEATHERCONFIG_SET_WATERMATERIALS_OFFSET UNITYSDK_OFFSET(0x19F39E70)
#define WEATHERCONFIG_SET_WINDCONFIG_OFFSET UNITYSDK_OFFSET(0x19F3A3B0)
#define WEATHERCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F43AD0)
#define WEATHERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19F3A3C0)

inline static constexpr unsigned int WeatherConfig_TypeDefinitionIndex = 29522;

class WeatherConfig : public ::System::Object
{
public:
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sampler_LerpWeatherNew()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x24A90);
	}
	static ::UnityEngine::Gradient** StaticGet_defaultGradient()
	{
		return (::UnityEngine::Gradient**)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x24A98);
	}
	static ::WeatherConfig** StaticGet_s_CachedConfig()
	{
		return (::WeatherConfig**)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x24AA0);
	}
	static ::WeatherConfig** StaticGet_s_DefaultConfig()
	{
		return (::WeatherConfig**)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x24AA8);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_rgbMaskType()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x24AB0);
	}
	static ::System::Single* StaticGet_lastLerpValue()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x7700);
	}
	static ::UnityEngine::NAPRenderPipeline0::UpdateKodamaLightingParams* StaticGet_s_CachedUpdateKodamaLightingParams()
	{
		return (::UnityEngine::NAPRenderPipeline0::UpdateKodamaLightingParams*)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x7704);
	}
	static ::UnityEngine::Vector4* StaticGet_s_CachedKodamaGIParams()
	{
		return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x7740);
	}
	static ::System::Boolean* StaticGet_s_RefreshLocalLight()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x7750);
	}
	static ::System::Boolean* StaticGet_s_EnableStaticLighting()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x7751);
	}
	::System::Boolean overrideGiConfig; // 0x10
	::UnityEngine::Rendering::Universal::GIConfig* giConfig; // 0x18
	::System::Single mainLightKodamaGIIndirectMultiplier; // 0x20
	::System::Boolean overrideLyraConfig; // 0x24
	::System::Single mainLightLyraGIIndirectMultiplier; // 0x28
	::System::Single lyraSkyPassThrough; // 0x2C
	::System::Boolean overrideSkyOnlyGI; // 0x30
	::UnityEngine::Color skyOnlyGIColorAndIntensityInDoor; // 0x34
	::UnityEngine::Color skyOnlyGIColorAndIntensityOutDoor; // 0x44
	::System::Boolean overrideExtraGiConfig; // 0x54
	::System::Single GIIntensity; // 0x58
	::System::Single IBLIntensity; // 0x5C
	::UnityEngine::Color GIColorOffset; // 0x60
	::UnityEngine::Color GISpecularColorOffset; // 0x70
	::System::Single EmissionIntensity; // 0x80
	::System::Boolean overrideReflectionCubeId; // 0x84
	::System::Int32 ReflectionCubeId; // 0x88
	::System::Boolean overrideRTXConfig; // 0x8C
	::UnityEngine::Rendering::Universal::RTXGIConfig* rtxGIConfig; // 0x90
	::UnityEngine::Rendering::Universal::RTXGIRoughnessConfig* rtxGIRoughnessConfig; // 0x98
	::System::Boolean overrideWeatherControlAnimationConfig; // 0xA0
	::System::Single weatherControlAnimationProgress; // 0xA4
	::System::Boolean overrideWindConfig; // 0xA8
	::System::Single SpeedTreeWindIntensity; // 0xAC
	::System::Single SpeedTreeWindDirection; // 0xB0
	::UnityEngine::NAPRenderPipeline0::WindType windType; // 0xB4
	::UnityEngine::Material* skyboxForBake; // 0xB8
	::System::Boolean previewSkyboxForBake; // 0xC0
	::System::Single rotateSkyboxForBake; // 0xC4
	::System::Boolean overrideFakeInterior; // 0xC8
	::System::Single interiorDayAndNight; // 0xCC
	::System::Single interiorSmoothnessScale; // 0xD0
	::System::Boolean overrideBrightSpotsFlareConfig; // 0xD4
	::System::Boolean enableBrightSpotsFlare; // 0xD5
	::UnityEngine::Texture2D* flareTexture; // 0xD8
	::System::Single flareLuminanceThreshold; // 0xE0
	::System::Single flareOpacity; // 0xE4
	::System::Single flareMinSize; // 0xE8
	::System::Single flareMaxSize; // 0xEC
	::System::Int32 flareVerticalGridCount; // 0xF0
	::System::Boolean overrideSceneTwist; // 0xF4
	::System::Boolean mainCameraAsPivot; // 0xF5
	::UnityEngine::GameObject* worldTwistPivot; // 0xF8
	::System::Single worldTwistBendSize; // 0x100
	::System::Single worldTwistRotationSpeed; // 0x104
	::System::Single worldTwistSafeDistance; // 0x108
	::System::Single worldTwistFadeDistance; // 0x10C
	::UnityEngine::Texture* worldTwistAdditionalNoiseMap; // 0x110
	::System::Single worldTwistNoise1Tiling; // 0x118
	::UnityEngine::Vector2 worldTwistNoise1Speed; // 0x11C
	::System::Single worldTwistNoise1Intensity; // 0x124
	::System::Single worldTwistNoise2Tiling; // 0x128
	::UnityEngine::Vector2 worldTwistNoise2Speed; // 0x12C
	::System::Single worldTwistNoise2Intensity; // 0x134
	::System::Boolean worldTwistEnableCustomDirection; // 0x138
	::System::Single worldTwistCustomDirection; // 0x13C
	::System::Boolean overrideHotTwist; // 0x140
	::System::Boolean enableHotTwist; // 0x141
	::System::Single hotTwistStrength; // 0x144
	::System::Single hotTwistNoiseScale; // 0x148
	::UnityEngine::Vector2 hotTwistSpeed; // 0x14C
	::UnityEngine::Vector2 hotTwistRepeatX; // 0x154
	::UnityEngine::Vector2 hotTwistRepeatZ; // 0x15C
	::System::Single hotTwistDepthDistance; // 0x164
	::System::Single hotTwistDepthFade; // 0x168
	::System::Boolean hotTwistHeightMaskDebugView; // 0x16C
	::System::Single hotTwistHeightMaskStrength; // 0x170
	::System::Single hotTwistHeightMaskOffset; // 0x174
	::System::Single hotTwistHeightMaskPower; // 0x178
	::System::Boolean overrideSceneSceneEffect; // 0x17C
	::System::Boolean ScanlineOn; // 0x17D
	::System::Single SceneScanlineWidth; // 0x180
	::System::Single SceneScanlineContrast; // 0x184
	::System::Single SceneScanlineAngle; // 0x188
	::System::Single SceneScanlineLerpBrightness; // 0x18C
	::System::Single outlineOpacity; // 0x190
	::System::Single outlineDiffOffset; // 0x194
	::System::Single outlineDepthThreshold; // 0x198
	::System::Single outlineNormalThreshold; // 0x19C
	::System::Single outlineNormalThresholdScale; // 0x1A0
	::UnityEngine::Color outlineColor; // 0x1A4
	::System::Single Heightfade; // 0x1B4
	::System::Single Depthfade; // 0x1B8
	::System::Single DepthfadeHardness; // 0x1BC
	::System::Boolean overrideExpHeightFog; // 0x1C0
	::UnityEngine::Rendering::Universal::ExpHeightFogConfig* expHeightFogConfig; // 0x1C8
	::System::Boolean overrideSecondFog; // 0x1D0
	::UnityEngine::Rendering::Universal::SecondFogConfig* secondFogConfig; // 0x1D8
	::System::Boolean overrideFogMask; // 0x1E0
	::UnityEngine::Rendering::Universal::FogMaskConfig* fogMaskConfig; // 0x1E8
	::System::Boolean overrideVolumetricFog; // 0x1F0
	::System::Boolean hasGlobalVolumetricFog; // 0x1F1
	::System::Boolean volumetricFogDisableFogShadow; // 0x1F2
	::System::Single volumetricFogSize; // 0x1F4
	::System::Single volumetricFog_Jittering; // 0x1F8
	::System::Single volumetricFog_Dithering; // 0x1FC
	::System::Single volumetricFog_IntensityTowardLight; // 0x200
	::System::Single volumetricFog_DustIntensity; // 0x204
	::System::Single volumetricFog_MaxIntensity; // 0x208
	::System::Single volumetricFog_Step; // 0x20C
	::UnityEngine::Color volumetricFog_Color; // 0x210
	::System::Single volumetricFog_PunctualLightMultiplier; // 0x220
	::System::Single volumetricFog_PunctualLightFadePower; // 0x224
	::System::Single volumetricFog_ExtraBlurValue; // 0x228
	::System::Boolean VolumetricFogBlitBeforeEffect; // 0x22C
	::System::Boolean overrideLightFog; // 0x22D
	::System::Boolean hasLightFogProxy; // 0x22E
	::System::Single lightFogMaxDensity; // 0x230
	::System::Single lightFogSoftParticleStartFadeDistance; // 0x234
	::System::Single lightFogSoftParticleFadeFactor; // 0x238
	::System::Boolean useSimpleFakeLightFogProxy; // 0x23C
	::System::Boolean overrideSceneFogCard; // 0x23D
	::System::Boolean overrideSceneFogCardColor; // 0x23E
	::UnityEngine::Color sceneFogCardAmbientScatteringColor; // 0x240
	::System::Boolean useRevertVolumetricFog; // 0x250
	::System::Boolean overrideSkyCloud; // 0x251
	::UnityEngine::Rendering::Universal::SkyCloudConfig* skyCloudConfig; // 0x258
	::System::Boolean overrideSkyCloudLighting; // 0x260
	::System::Boolean CloudLightEnabled; // 0x261
	::System::Single cloudLightWidth; // 0x264
	::System::Single cloudLightStrength; // 0x268
	::System::Single cloudLightMaxIntervalTime; // 0x26C
	::System::Single cloudLightMinIntervalTime; // 0x270
	::System::Single cloudLightDurationTime; // 0x274
	::System::Single cloudLightMaxLength; // 0x278
	::System::Single cloudLightMinLength; // 0x27C
	::System::Single cloudLightLocalTime; // 0x280
	::System::Single cloudLightRandom; // 0x284
	::System::Boolean overrideCloudShadow; // 0x288
	::System::Single cloudShadowIntensity; // 0x28C
	::UnityEngine::Texture* cloudShadow; // 0x290
	::UnityEngine::Vector4 cloudShadowTileAndOffset; // 0x298
	::System::Boolean cloudGodRay; // 0x2A8
	::UnityEngine::Vector2 cloudShadowMoveSpeed; // 0x2AC
	::UnityEngine::Vector3 cloudShadowRotation; // 0x2B4
	::System::Boolean overrideVolumetricCloud; // 0x2C0
	::UnityEngine::Rendering::Universal::VolumetricCloudConfig* volumetricCloudConfig; // 0x2C8
	::System::Boolean mistBlitAfterColorGrading; // 0x2D0
	::System::Boolean mistBlitAfterParticleDecal; // 0x2D1
	::System::Boolean overrideCloudChromaAmount; // 0x2D2
	::UnityEngine::Color cloudChromaAmountIntensity; // 0x2D4
	::UnityEngine::Vector2 cloudChromaAmount; // 0x2E4
	::UnityEngine::NAPRenderPipeline0::RGBMaskType cloudChromaType; // 0x2EC
	::UnityEngine::Texture2D* cloudChromaAmountIntensityMask; // 0x2F0
	::UnityEngine::Texture2D* cloudChromaAmountMask; // 0x2F8
	::UnityEngine::Vector2 cloudChromaAmountMaskTiling; // 0x300
	::UnityEngine::Vector2 cloudChromaAmountMaskSpeed; // 0x308
	::UnityEngine::NAPRenderPipeline0::TextureChannel cloudChromaAmountMaskChannel; // 0x310
	::System::Boolean overrideSkyCover; // 0x314
	::System::Single SkyCoverMoveSpeed; // 0x318
	::UnityEngine::Color SkyCoverColor; // 0x31C
	::System::Boolean useAnimatedSkyCover; // 0x32C
	::System::Single skyCoverAnimationDeltaTime; // 0x330
	::UnityEngine::AnimationCurve* skyCoverAlphaAnimation; // 0x338
	::System::Boolean overrideSceneParticle; // 0x340
	::UnityEngine::Rendering::Universal::SceneParticleConfig* sceneParticleConfig; // 0x348
	::System::Boolean overrideEtherFX; // 0x350
	::System::Single etherFXWaveAngle; // 0x354
	::System::Single etherFXWaveSpeed; // 0x358
	::System::Single etherFXWaveSpacing; // 0x35C
	::System::Single etherEffectDirection; // 0x360
	::System::Single etherEffectSpeed; // 0x364
	::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType particleConfigWeatherType; // 0x368
	::System::Single weatherEffectFoggyIntensity; // 0x36C
	::System::Single weatherEffectSpecialRedIntensity; // 0x370
	::System::Boolean overrideSkyColor; // 0x374
	::UnityEngine::Gradient* skyVerticalGradient; // 0x378
	::System::Single skyVerticalGradientMinRange; // 0x380
	::System::Boolean overrideSunLight; // 0x384
	::UnityEngine::Vector3 mainLightDir; // 0x388
	::System::Boolean overrideSunLightColor; // 0x394
	::UnityEngine::Color mainLightColor; // 0x398
	::System::Single mainLightIntensity; // 0x3A8
	::System::Boolean overrideSkySun; // 0x3AC
	::UnityEngine::Color sunDiskColor; // 0x3B0
	::System::Single SunDiskSize; // 0x3C0
	::System::Single SunDiskIntensity; // 0x3C4
	::System::Boolean useSingleSunDiskPosition; // 0x3C8
	::UnityEngine::Vector3 sunDiskPosition; // 0x3CC
	::System::Single customSunHardness; // 0x3D8
	::System::Boolean useSunAnimation; // 0x3DC
	::System::Single SunanimationLifeTime; // 0x3E0
	::UnityEngine::AnimationCurve* SunDiskCurve; // 0x3E8
	::System::Boolean overrideSunPost; // 0x3F0
	::System::Boolean enableLensFlareForSun; // 0x3F1
	::UnityEngine::Rendering::LensFlareDataSRP* lensFlareDataSrp; // 0x3F8
	::UnityEngine::Rendering::Universal::LensFlareConfig* lensFlareConfigForSun; // 0x400
	::UnityEngine::Rendering::Universal::LightShaftConfig* lightShaftConfigForSun; // 0x408
	::System::Boolean overrideMoonLight; // 0x410
	::UnityEngine::Vector3 moonDir; // 0x414
	::System::Boolean overrideMoonLightColor; // 0x420
	::UnityEngine::Color MoonLightColor; // 0x424
	::System::Single MoonLightIntensity; // 0x434
	::System::Boolean overrideSkyMoon; // 0x438
	::UnityEngine::LazyLoadReference_1<::UnityEngine::Texture*> moonOnSky; // 0x43C
	::UnityEngine::Color MoonColor; // 0x440
	::System::Single moonSize; // 0x450
	::System::Single moonPhaseAlphaBlend; // 0x454
	::UnityEngine::Color MoonGlowColor; // 0x458
	::System::Boolean overrideMoonPost; // 0x468
	::System::Boolean enableLensFlareForMoon; // 0x469
	::UnityEngine::Rendering::LensFlareDataSRP* lensFlareDataSrpForMoon; // 0x470
	::UnityEngine::Rendering::Universal::LensFlareConfig* lensFlareConfigForMoon; // 0x478
	::UnityEngine::Rendering::Universal::LightShaftConfig* lightShaftConfigForMoon; // 0x480
	::System::Boolean overrideSkyStar; // 0x488
	::System::Boolean isNight; // 0x489
	::UnityEngine::LazyLoadReference_1<::UnityEngine::Texture*> starMapOnSky; // 0x48C
	::UnityEngine::LazyLoadReference_1<::UnityEngine::Texture*> starMaskOnSky; // 0x490
	::System::Single starsTwinklingRate; // 0x494
	::System::Single StarsIntensity; // 0x498
	::UnityEngine::LazyLoadReference_1<::UnityEngine::Texture*> galaxyOnSky; // 0x49C
	::UnityEngine::Vector3 galaxyDir; // 0x4A0
	::UnityEngine::Vector3 galaxyAngleSpeed; // 0x4AC
	::System::Single GalaxyIntensity; // 0x4B8
	::System::Boolean overrideShadowTint; // 0x4BC
	::System::Boolean mainLightShadowTint; // 0x4BD
	::UnityEngine::Color mainLightShadowTintColor; // 0x4C0
	::System::Single mainLightShadowTintSourceAngle; // 0x4D0
	::System::Single mainLightShadowTintPower; // 0x4D4
	::System::Single mainLightShadowTintRadius; // 0x4D8
	::System::Single mainLightShadowTintRadiusPower; // 0x4DC
	::System::Single mainLightShadowTintDepthBias; // 0x4E0
	::System::Boolean overrideCustomSkyBox; // 0x4E4
	::System::Boolean controlMainLightParam; // 0x4E5
	::UnityEngine::Material* replaceSkybox; // 0x4E8
	::UnityEngine::Material* hollowCoverMat; // 0x4F0
	::UnityEngine::Gradient* cloudOnSkyColor; // 0x4F8
	::System::Single cloudRotateAngle; // 0x500
	::System::Boolean overrideSkyEffectOutline; // 0x504
	::System::Boolean enableSkyEffectOutline; // 0x505
	::UnityEngine::Rendering::Universal::SkyEffectOutlineConfig* skyEffectOutlineConfig; // 0x508
	::System::Boolean overrideWetness; // 0x510
	::System::Single wetness; // 0x514
	::System::Boolean ignoreHeightMap; // 0x518
	::System::Boolean ignoreNoiseMap; // 0x519
	::UnityEngine::Texture* wetnessNoise; // 0x520
	::System::Single wetnessNoiseTilling; // 0x528
	::UnityEngine::Vector2 wetnessNoiseClampRange; // 0x52C
	::System::Boolean wetnessNoiseForHeight; // 0x534
	::UnityEngine::Vector2 porosity; // 0x538
	::System::Boolean overrideRainConfig; // 0x540
	::System::Boolean isRaining; // 0x541
	::UnityEngine::Texture* rainDropTexture; // 0x548
	::UnityEngine::Color rainDropColor; // 0x550
	::System::Single rainDropMultiplyLightColor; // 0x560
	::System::Int32 rainDropBatchCount; // 0x564
	::System::Single rainDropSpeed; // 0x568
	::System::Single rainDropMaxHeight; // 0x56C
	::System::Single rainDropMinHeight; // 0x570
	::UnityEngine::Vector2 rainDropSizeX; // 0x574
	::UnityEngine::Vector2 rainDropSizeY; // 0x57C
	::System::Single rainDropAngle; // 0x584
	::System::Single rainDropAngleIntensity; // 0x588
	::System::Single rainDropOuterCircleRadius; // 0x58C
	::System::Single rainDropInnerCircleRadius; // 0x590
	::UnityEngine::Rendering::Universal::ScreenRainDropConfig* screenRainDropConfig; // 0x598
	::UnityEngine::Texture* rainFlowTexture; // 0x5A0
	::System::Single rainFlowTilling; // 0x5A8
	::System::Single rainFlowSpeed; // 0x5AC
	::System::Single rainFlowIntensity; // 0x5B0
	::UnityEngine::Texture* rainFlowNoise; // 0x5B8
	::UnityEngine::Texture* rainTexture2; // 0x5C0
	::System::Single rippleTextureTilling; // 0x5C8
	::System::Single rippleSpeed; // 0x5CC
	::System::Single rippleDensity; // 0x5D0
	::System::Single rippleFoamIntensity; // 0x5D4
	::UnityEngine::Texture* rainSplashTexture; // 0x5D8
	::UnityEngine::Texture* rainSplashTexture2; // 0x5E0
	::UnityEngine::Texture* rainSplashTexture3; // 0x5E8
	::UnityEngine::Color rainSplashColor; // 0x5F0
	::UnityEngine::Vector2 rainSplashIntensityRange; // 0x600
	::UnityEngine::Vector2 rainSplashSizeRange; // 0x608
	::System::Single rainSplashPlayTime; // 0x610
	::System::Int32 rainSplashCount; // 0x614
	::System::Single rainSplashRange; // 0x618
	::System::Boolean overrideLightning; // 0x61C
	::System::Boolean useAnimation; // 0x61D
	::System::Single animationLifeTime; // 0x620
	::UnityEngine::AnimationCurve* mainLightIntensityCurve; // 0x628
	::System::Boolean useLightningFx; // 0x630
	::UnityEngine::ParticleSystem* lightningFxPrefab; // 0x638
	::UnityEngine::Vector2 lightningFxDistanceRange; // 0x640
	::UnityEngine::Vector2 lightningFxHeightRange; // 0x648
	::UnityEngine::Vector2 lightningFxInterval; // 0x650
	::System::Boolean overrideDetailLayerConfig; // 0x658
	::UnityEngine::Rendering::Universal::DetailLayerConfig* detailLayerConfig; // 0x660
	::System::Boolean overrideSkyGridConfig; // 0x668
	::UnityEngine::Rendering::Universal::SkyGridConfig* skyGridConfig; // 0x670
	::System::Boolean overrideCharacterToneMapping; // 0x678
	::System::Single characterLightTonemapStart; // 0x67C
	::System::Single characterLightTonemapMax; // 0x680
	::System::Single characterLightTonemapFaceAdd; // 0x684
	::System::Single characterLightTonemapFaceEnd; // 0x688
	::System::Single characterGiWeight; // 0x68C
	::System::Single toeStrength; // 0x690
	::System::Single toeLength; // 0x694
	::System::Single shoulderStrength; // 0x698
	::System::Single shoulderLength; // 0x69C
	::System::Single shoulderAngle; // 0x6A0
	::System::Single customGamma; // 0x6A4
	::System::Boolean characterEditorIsIndoor; // 0x6A8
	::System::Boolean overrideCharacterLight; // 0x6A9
	::UnityEngine::Color mainLightColorForChara; // 0x6AC
	::System::Single mainLightIntensityForChara; // 0x6BC
	::System::Single mainLightShadowStrengthForChara; // 0x6C0
	::System::Single rimGlowIntensityForChara; // 0x6C4
	::UnityEngine::Color MoonLightColorForChar; // 0x6C8
	::System::Single MoonLightIntensityForChar; // 0x6D8
	::System::Single moonLightShadowStrengthForChara; // 0x6DC
	::System::Single moonRimGlowIntensityForChara; // 0x6E0
	::UnityEngine::Color ambient; // 0x6E4
	::UnityEngine::Color mainLightColorForCharaIndoor; // 0x6F4
	::System::Single mainLightIntensityForCharaIndoor; // 0x704
	::System::Single mainLightShadowStrengthForCharaIndoor; // 0x708
	::System::Single rimGlowIntensityForCharaIndoor; // 0x70C
	::UnityEngine::Color MoonLightColorForCharIndoor; // 0x710
	::System::Single MoonLightIntensityForCharIndoor; // 0x720
	::System::Single moonLightShadowStrengthForCharaIndoor; // 0x724
	::System::Single moonRimGlowIntensityForCharaIndoor; // 0x728
	::UnityEngine::Color ambientIndoor; // 0x72C
	::System::Boolean overrideCharacterRamp; // 0x73C
	::UnityEngine::Color skinFrontTint; // 0x740
	::UnityEngine::Color frontTint; // 0x750
	::UnityEngine::Color skinSssTint; // 0x760
	::UnityEngine::Color sssTint; // 0x770
	::UnityEngine::Color skinShallowTint; // 0x780
	::UnityEngine::Color shallowTint; // 0x790
	::UnityEngine::Color skinShallowFadeTint; // 0x7A0
	::UnityEngine::Color shallowFadeTint; // 0x7B0
	::UnityEngine::Color skinShadowTint; // 0x7C0
	::UnityEngine::Color shadowTint; // 0x7D0
	::UnityEngine::Color skinShadowFadeTint; // 0x7E0
	::UnityEngine::Color shadowFadeTint; // 0x7F0
	::UnityEngine::Color ambientGradient; // 0x800
	::UnityEngine::Color outlineTint; // 0x810
	::System::Boolean useShadowTintAsOutline; // 0x820
	::UnityEngine::Color skinFrontTintIndoor; // 0x824
	::UnityEngine::Color frontTintIndoor; // 0x834
	::UnityEngine::Color skinSssTintIndoor; // 0x844
	::UnityEngine::Color sssTintIndoor; // 0x854
	::UnityEngine::Color skinShallowTintIndoor; // 0x864
	::UnityEngine::Color shallowTintIndoor; // 0x874
	::UnityEngine::Color skinShallowFadeTintIndoor; // 0x884
	::UnityEngine::Color shallowFadeTintIndoor; // 0x894
	::UnityEngine::Color skinShadowTintIndoor; // 0x8A4
	::UnityEngine::Color shadowTintIndoor; // 0x8B4
	::UnityEngine::Color skinShadowFadeTintIndoor; // 0x8C4
	::UnityEngine::Color shadowFadeTintIndoor; // 0x8D4
	::UnityEngine::Color ambientGradientIndoor; // 0x8E4
	::UnityEngine::Color outlineTintIndoor; // 0x8F4
	::System::Boolean useShadowTintAsOutlineIndoor; // 0x904
	::System::Boolean overrideCharacterPost; // 0x905
	::System::Boolean characterColorGradingEnabled; // 0x906
	::System::Single characterPostExposure; // 0x908
	::System::Single contrast; // 0x90C
	::System::Single saturation; // 0x910
	::UnityEngine::Vector4 lift; // 0x914
	::UnityEngine::Vector4 gamma; // 0x924
	::UnityEngine::Vector4 gain; // 0x934
	::System::Single characterPostExposureIndoor; // 0x944
	::System::Single contrastIndoor; // 0x948
	::System::Single saturationIndoor; // 0x94C
	::UnityEngine::Vector4 liftIndoor; // 0x950
	::UnityEngine::Vector4 gammaIndoor; // 0x960
	::UnityEngine::Vector4 gainIndoor; // 0x970
	::System::Boolean skinColorsInitialized; // 0x980
	::System::Boolean overrideWaterConfig; // 0x981
	::System::Boolean useGlobalWaterConfig; // 0x982
	::UnityEngine::Rendering::Universal::SingleWeatherConfigWater* localWaterConfig; // 0x988
	::System::Boolean overrideOceanConfig; // 0x990
	::UnityEngine::Rendering::Universal::OceanConfig* oceanConfig; // 0x998
	::System::Boolean trackControlScenePost; // 0x9A0
	::System::Boolean overrideOldSceneLut; // 0x9A1
	::System::Boolean useCustomLookupTable; // 0x9A2
	::UnityEngine::Texture* lookupTable; // 0x9A8
	::System::Single lutContribution; // 0x9B0
	::System::Single postExposure; // 0x9B4
	::UnityEngine::Rendering::Universal::ScenePostEffectConfig* scenePostEffectConfig; // 0x9B8
	::System::Boolean overrideSceneLut; // 0x9C0
	::System::Boolean useLogLookupTable; // 0x9C1
	::UnityEngine::Texture* LogLutTex; // 0x9C8
	::System::Single loglutContribution; // 0x9D0
	::UnityEngine::Texture* PreLogLutTex; // 0x9D8
	::System::Single preLoglutContribution; // 0x9E0
	::System::Boolean overrideSceneBloom; // 0x9E4
	::System::Boolean useSceneBloom; // 0x9E5
	::System::Single bloomThreshold; // 0x9E8
	::System::Single bloomMaxThreshold; // 0x9EC
	::System::Single bloomIntensity; // 0x9F0
	::System::Boolean overrideSpecularTonemapping; // 0x9F4
	::System::Boolean enableSpecularTonemapping; // 0x9F5
	::System::Boolean previewSpecularLutTexture; // 0x9F6
	::UnityEngine::Texture2D* specularTonemappingLut; // 0x9F8
	::UnityEngine::NAPRenderPipeline0::TextureCurve* specularToneCurve_master; // 0xA00
	::UnityEngine::NAPRenderPipeline0::TextureCurve* specularToneCurve_red; // 0xA08
	::UnityEngine::NAPRenderPipeline0::TextureCurve* specularToneCurve_green; // 0xA10
	::UnityEngine::NAPRenderPipeline0::TextureCurve* specularToneCurve_blue; // 0xA18
	::UnityEngine::RenderTexture* specularToneMappingCurveTexture; // 0xA20
	::UnityEngine::Texture2D* specularCurveTexMaster; // 0xA28
	::UnityEngine::Texture2D* specularCurveTexR; // 0xA30
	::UnityEngine::Texture2D* specularCurveTexG; // 0xA38
	::UnityEngine::Texture2D* specularCurveTexB; // 0xA40
	::UnityEngine::Material* specularLUTMat; // 0xA48
	::UnityEngine::Vector2 specularDistanceFade; // 0xA50
	::UnityEngine::Vector2 specularDistanceFadeValue; // 0xA58
	::UnityEngine::Vector2 specularAngleFade; // 0xA60
	::UnityEngine::Vector2 specularAngleFadeValue; // 0xA68
	::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType WeatherType; // 0xA70
	::System::Boolean isSerializedData; // 0xA74
	::WeatherConfig_ResultMainLightParams resultMainLightParams; // 0xA78
	::System::Single _CachedMainLightIntensity; // 0xAD0
	::System::Single _AnimationSunDisk; // 0xAD4
	::WeatherConfig_CapturedWeatherData capturedData; // 0xAD8
	::WeatherConfig_RuntimeUsedNightTextures nightTextures; // 0xB48
	::System::Single _OverrideSkyWeight_k__BackingField; // 0xB68
	::UnityEngine::Color _OverrideSkyBtnColor_k__BackingField; // 0xB6C
	::UnityEngine::Color _OverrideSkyTopColor_k__BackingField; // 0xB7C
	::UnityEngine::Color _OverrideLowCloudLightColor_k__BackingField; // 0xB8C
	::UnityEngine::Color _OverrideLowCloudDarkColor_k__BackingField; // 0xB9C
	::UnityEngine::NAPRenderPipeline0::ESupportedGIType _SupportedGIType_k__BackingField; // 0xBAC
	::System::Single _SceneClipPlaneY_k__BackingField; // 0xBB0
	::UnityEngine::Mesh* _customSkyboxMesh_k__BackingField; // 0xBB8
	::UnityEngine::Material* _sceneEtherCoverEffectMat_k__BackingField; // 0xBC0
	::System::Single _hollowCoverSize_k__BackingField; // 0xBC8
	::UnityEngine::Mesh* _hollowCoverMesh_k__BackingField; // 0xBD0
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* _waterMaterials_k__BackingField; // 0xBD8
	::System::Single _waterHeight_k__BackingField; // 0xBE0
	::System::Boolean _hasTriggerSpecialCloudLayer_k__BackingField; // 0xBE4
	::System::Single cloudLerpAlpha; // 0xBE8
	::System::Single lerpValue; // 0xBEC
	::UnityEngine::Texture* _HeightMap_k__BackingField; // 0xBF0
	::System::Boolean _enableLocalHeightMap_k__BackingField; // 0xBF8
	::UnityEngine::Texture* _OceanMaskMap_k__BackingField; // 0xC00
	::UnityEngine::Vector4 _OceanMaskMapRect_k__BackingField; // 0xC08
	::System::Single _SeaLevelHeight_k__BackingField; // 0xC18
	::System::Single _OceanMaskHeightOffset_k__BackingField; // 0xC1C
	::UnityEngine::Rendering::Universal::OceanFFTBakeData* _OceanFFTBakeData_k__BackingField; // 0xC20
	::UnityEngine::Vector3 _OceanCenter_k__BackingField; // 0xC28
	::System::Single _OceanDepthOffset_k__BackingField; // 0xC34
	::UnityEngine::Texture* _HeightMap2_k__BackingField; // 0xC38
	::UnityEngine::Vector4 _GlobalDecalBlendParams_k__BackingField; // 0xC40
	::UnityEngine::Texture* _SceneWaterPoolMap_k__BackingField; // 0xC50
	::UnityEngine::Vector4 _SceneWaterPoolBoundBox_k__BackingField; // 0xC58
	::UnityEngine::Vector2 _SceneWaterPoolMinMaxHeight_k__BackingField; // 0xC68
	::UnityEngine::Vector4 _SceneBoundBox_k__BackingField; // 0xC70
	::System::Single _sceneHeightMapYOffset_k__BackingField; // 0xC80
	::System::Boolean _isOptimizedSceneBoundBoxValue_k__BackingField; // 0xC84
	::UnityEngine::Vector4 _NavMeshBoundBox_k__BackingField; // 0xC88
	::UnityEngine::Vector4 _GroundPos_k__BackingField; // 0xC98
	::UnityEngine::Rendering::Universal::SingleWeatherConfigParticle* _particleConfig_k__BackingField; // 0xCA8
	::UnityEngine::Rendering::Universal::SingleWeatherConfigWater* _waterConfig_k__BackingField; // 0xCB0
	::UnityEngine::Rendering::Universal::SingleWeatherConfigWind* _windConfig_k__BackingField; // 0xCB8
	::System::Single preFrameDaytime; // 0xCC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + WEATHERCONFIG__CCTOR_OFFSET))();
	}

	static ::WeatherConfig* DefaultWeatherConfig()
	{
		return ((::WeatherConfig*(*)())((::PBYTE)hIl2Cpp + WEATHERCONFIG_DEFAULTWEATHERCONFIG_OFFSET))();
	}

	::System::Boolean get_EnableOcean()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_ENABLEOCEAN_OFFSET))(this);
	}

	::System::Boolean get_DisableSSPR()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_DISABLESSPR_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* get_SpecularToneMappingCurveTexture()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_SPECULARTONEMAPPINGCURVETEXTURE_OFFSET))(this);
	}

	::System::Single get_OverrideSkyWeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_OVERRIDESKYWEIGHT_OFFSET))(this);
	}

	::System::Void set_OverrideSkyWeight(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_OVERRIDESKYWEIGHT_OFFSET))(this, value);
	}

	::UnityEngine::Color get_OverrideSkyBtnColor()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_OVERRIDESKYBTNCOLOR_OFFSET))(this);
	}

	::System::Void set_OverrideSkyBtnColor(::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_OVERRIDESKYBTNCOLOR_OFFSET))(this, value);
	}

	::UnityEngine::Color get_OverrideSkyTopColor()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_OVERRIDESKYTOPCOLOR_OFFSET))(this);
	}

	::System::Void set_OverrideSkyTopColor(::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_OVERRIDESKYTOPCOLOR_OFFSET))(this, value);
	}

	::UnityEngine::Color get_OverrideLowCloudLightColor()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_OVERRIDELOWCLOUDLIGHTCOLOR_OFFSET))(this);
	}

	::System::Void set_OverrideLowCloudLightColor(::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_OVERRIDELOWCLOUDLIGHTCOLOR_OFFSET))(this, value);
	}

	::UnityEngine::Color get_OverrideLowCloudDarkColor()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_OVERRIDELOWCLOUDDARKCOLOR_OFFSET))(this);
	}

	::System::Void set_OverrideLowCloudDarkColor(::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_OVERRIDELOWCLOUDDARKCOLOR_OFFSET))(this, value);
	}

	::UnityEngine::NAPRenderPipeline0::ESupportedGIType get_SupportedGIType()
	{
		return ((::UnityEngine::NAPRenderPipeline0::ESupportedGIType(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_SUPPORTEDGITYPE_OFFSET))(this);
	}

	::System::Void set_SupportedGIType(::UnityEngine::NAPRenderPipeline0::ESupportedGIType value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::ESupportedGIType))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_SUPPORTEDGITYPE_OFFSET))(this, value);
	}

	::System::Single get_SceneClipPlaneY()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_SCENECLIPPLANEY_OFFSET))(this);
	}

	::System::Void set_SceneClipPlaneY(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_SCENECLIPPLANEY_OFFSET))(this, value);
	}

	::UnityEngine::Mesh* get_customSkyboxMesh()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_CUSTOMSKYBOXMESH_OFFSET))(this);
	}

	::System::Void set_customSkyboxMesh(::UnityEngine::Mesh* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_CUSTOMSKYBOXMESH_OFFSET))(this, value);
	}

	::UnityEngine::Material* get_sceneEtherCoverEffectMat()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_SCENEETHERCOVEREFFECTMAT_OFFSET))(this);
	}

	::System::Void set_sceneEtherCoverEffectMat(::UnityEngine::Material* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_SCENEETHERCOVEREFFECTMAT_OFFSET))(this, value);
	}

	::System::Single get_hollowCoverSize()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_HOLLOWCOVERSIZE_OFFSET))(this);
	}

	::System::Void set_hollowCoverSize(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_HOLLOWCOVERSIZE_OFFSET))(this, value);
	}

	::UnityEngine::Mesh* get_hollowCoverMesh()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_HOLLOWCOVERMESH_OFFSET))(this);
	}

	::System::Void set_hollowCoverMesh(::UnityEngine::Mesh* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_HOLLOWCOVERMESH_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Material*>* get_waterMaterials()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_WATERMATERIALS_OFFSET))(this);
	}

	::System::Void set_waterMaterials(::System::Collections::Generic::List_1<::UnityEngine::Material*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_WATERMATERIALS_OFFSET))(this, value);
	}

	::System::Single get_waterHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_WATERHEIGHT_OFFSET))(this);
	}

	::System::Void set_waterHeight(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_WATERHEIGHT_OFFSET))(this, value);
	}

	::System::Boolean get_hasTriggerSpecialCloudLayer()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_HASTRIGGERSPECIALCLOUDLAYER_OFFSET))(this);
	}

	::System::Void set_hasTriggerSpecialCloudLayer(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_HASTRIGGERSPECIALCLOUDLAYER_OFFSET))(this, value);
	}

	::System::Single get_LerpValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_LERPVALUE_OFFSET))(this);
	}

	::System::Void set_LerpValue(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_LERPVALUE_OFFSET))(this, value);
	}

	::System::Single get_CloudLerpAlpha()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_CLOUDLERPALPHA_OFFSET))(this);
	}

	::System::Void set_CloudLerpAlpha(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_CLOUDLERPALPHA_OFFSET))(this, value);
	}

	::UnityEngine::Texture* get_HeightMap()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_HEIGHTMAP_OFFSET))(this);
	}

	::System::Void set_HeightMap(::UnityEngine::Texture* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_HEIGHTMAP_OFFSET))(this, value);
	}

	::System::Boolean get_enableLocalHeightMap()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_ENABLELOCALHEIGHTMAP_OFFSET))(this);
	}

	::System::Void set_enableLocalHeightMap(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_ENABLELOCALHEIGHTMAP_OFFSET))(this, value);
	}

	::UnityEngine::Texture* get_OceanMaskMap()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_OCEANMASKMAP_OFFSET))(this);
	}

	::System::Void set_OceanMaskMap(::UnityEngine::Texture* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_OCEANMASKMAP_OFFSET))(this, value);
	}

	::UnityEngine::Vector4 get_OceanMaskMapRect()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_OCEANMASKMAPRECT_OFFSET))(this);
	}

	::System::Void set_OceanMaskMapRect(::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_OCEANMASKMAPRECT_OFFSET))(this, value);
	}

	::System::Single get_SeaLevelHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_SEALEVELHEIGHT_OFFSET))(this);
	}

	::System::Void set_SeaLevelHeight(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_SEALEVELHEIGHT_OFFSET))(this, value);
	}

	::System::Single get_OceanMaskHeightOffset()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_OCEANMASKHEIGHTOFFSET_OFFSET))(this);
	}

	::System::Void set_OceanMaskHeightOffset(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_OCEANMASKHEIGHTOFFSET_OFFSET))(this, value);
	}

	::UnityEngine::Rendering::Universal::OceanFFTBakeData* get_OceanFFTBakeData()
	{
		return ((::UnityEngine::Rendering::Universal::OceanFFTBakeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_OCEANFFTBAKEDATA_OFFSET))(this);
	}

	::System::Void set_OceanFFTBakeData(::UnityEngine::Rendering::Universal::OceanFFTBakeData* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::OceanFFTBakeData*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_OCEANFFTBAKEDATA_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_OceanCenter()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_OCEANCENTER_OFFSET))(this);
	}

	::System::Void set_OceanCenter(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_OCEANCENTER_OFFSET))(this, value);
	}

	::System::Single get_OceanDepthOffset()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_OCEANDEPTHOFFSET_OFFSET))(this);
	}

	::System::Void set_OceanDepthOffset(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_OCEANDEPTHOFFSET_OFFSET))(this, value);
	}

	::UnityEngine::Texture* get_HeightMap2()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_HEIGHTMAP2_OFFSET))(this);
	}

	::System::Void set_HeightMap2(::UnityEngine::Texture* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_HEIGHTMAP2_OFFSET))(this, value);
	}

	::UnityEngine::Vector4 get_GlobalDecalBlendParams()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_GLOBALDECALBLENDPARAMS_OFFSET))(this);
	}

	::System::Void set_GlobalDecalBlendParams(::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_GLOBALDECALBLENDPARAMS_OFFSET))(this, value);
	}

	::UnityEngine::Texture* get_SceneWaterPoolMap()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_SCENEWATERPOOLMAP_OFFSET))(this);
	}

	::System::Void set_SceneWaterPoolMap(::UnityEngine::Texture* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_SCENEWATERPOOLMAP_OFFSET))(this, value);
	}

	::UnityEngine::Vector4 get_SceneWaterPoolBoundBox()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_SCENEWATERPOOLBOUNDBOX_OFFSET))(this);
	}

	::System::Void set_SceneWaterPoolBoundBox(::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_SCENEWATERPOOLBOUNDBOX_OFFSET))(this, value);
	}

	::UnityEngine::Vector2 get_SceneWaterPoolMinMaxHeight()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_SCENEWATERPOOLMINMAXHEIGHT_OFFSET))(this);
	}

	::System::Void set_SceneWaterPoolMinMaxHeight(::UnityEngine::Vector2 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_SCENEWATERPOOLMINMAXHEIGHT_OFFSET))(this, value);
	}

	::UnityEngine::Vector4 get_HeightMapResolution()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_HEIGHTMAPRESOLUTION_OFFSET))(this);
	}

	::UnityEngine::Vector4 get_SceneBoundBox()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_SCENEBOUNDBOX_OFFSET))(this);
	}

	::System::Void set_SceneBoundBox(::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_SCENEBOUNDBOX_OFFSET))(this, value);
	}

	::System::Single get_sceneHeightMapYOffset()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_SCENEHEIGHTMAPYOFFSET_OFFSET))(this);
	}

	::System::Void set_sceneHeightMapYOffset(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_SCENEHEIGHTMAPYOFFSET_OFFSET))(this, value);
	}

	::System::Boolean get_isOptimizedSceneBoundBoxValue()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_ISOPTIMIZEDSCENEBOUNDBOXVALUE_OFFSET))(this);
	}

	::System::Void set_isOptimizedSceneBoundBoxValue(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_ISOPTIMIZEDSCENEBOUNDBOXVALUE_OFFSET))(this, value);
	}

	::UnityEngine::Vector4 get_NavMeshBoundBox()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_NAVMESHBOUNDBOX_OFFSET))(this);
	}

	::System::Void set_NavMeshBoundBox(::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_NAVMESHBOUNDBOX_OFFSET))(this, value);
	}

	::UnityEngine::Vector4 get_GroundPos()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_GROUNDPOS_OFFSET))(this);
	}

	::System::Void set_GroundPos(::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_GROUNDPOS_OFFSET))(this, value);
	}

	::UnityEngine::Rendering::Universal::SingleWeatherConfigParticle* get_particleConfig()
	{
		return ((::UnityEngine::Rendering::Universal::SingleWeatherConfigParticle*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_PARTICLECONFIG_OFFSET))(this);
	}

	::System::Void set_particleConfig(::UnityEngine::Rendering::Universal::SingleWeatherConfigParticle* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::SingleWeatherConfigParticle*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_PARTICLECONFIG_OFFSET))(this, value);
	}

	::UnityEngine::Rendering::Universal::SingleWeatherConfigWater* get_waterConfig()
	{
		return ((::UnityEngine::Rendering::Universal::SingleWeatherConfigWater*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_WATERCONFIG_OFFSET))(this);
	}

	::System::Void set_waterConfig(::UnityEngine::Rendering::Universal::SingleWeatherConfigWater* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::SingleWeatherConfigWater*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_WATERCONFIG_OFFSET))(this, value);
	}

	::UnityEngine::Rendering::Universal::SingleWeatherConfigWind* get_windConfig()
	{
		return ((::UnityEngine::Rendering::Universal::SingleWeatherConfigWind*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GET_WINDCONFIG_OFFSET))(this);
	}

	::System::Void set_windConfig(::UnityEngine::Rendering::Universal::SingleWeatherConfigWind* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::SingleWeatherConfigWind*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SET_WINDCONFIG_OFFSET))(this, value);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_RELEASE_OFFSET))(this);
	}

	static ::WeatherConfig* LerpWeatherNew(::WeatherConfig* from, ::WeatherConfig* to, ::System::Single lerpV, ::System::Boolean isPartial)
	{
		return ((::WeatherConfig*(*)(::WeatherConfig*, ::WeatherConfig*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + WEATHERCONFIG_LERPWEATHERNEW_OFFSET))(from, to, lerpV, isPartial);
	}

	::System::Void SetFog(::UnityEngine::Rendering::Universal::ExpHeightFogConfig* fogConfig)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ExpHeightFogConfig*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SETFOG_OFFSET))(this, fogConfig);
	}

	::System::Boolean IsLightShaftOn()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_ISLIGHTSHAFTON_OFFSET))(this);
	}

	::System::Void SetVisualEnvData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SETVISUALENVDATA_OFFSET))(this);
	}

	::System::Void BindMainLightData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_BINDMAINLIGHTDATA_OFFSET))(this);
	}

	::System::Void BindNightTextures(::WeatherConfig* weatherConfig, ::System::Boolean asNight)
	{
		return ((::System::Void(*)(::PVOID, ::WeatherConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + WEATHERCONFIG_BINDNIGHTTEXTURES_OFFSET))(this, weatherConfig, asNight);
	}

	::System::Single EvaluateSunDisk(::System::Single time)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_EVALUATESUNDISK_OFFSET))(this, time);
	}

	::System::Single EvaluateMainLightIntensity(::System::Single time)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_EVALUATEMAINLIGHTINTENSITY_OFFSET))(this, time);
	}

	::System::Boolean IsAmbientActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_ISAMBIENTACTIVE_OFFSET))(this);
	}

	::System::Void CaptureDataForRender()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_CAPTUREDATAFORRENDER_OFFSET))(this);
	}

	::System::Single GetDynamicObjectGIIntensity()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETDYNAMICOBJECTGIINTENSITY_OFFSET))(this);
	}

	::UnityEngine::Vector4 GetKodamaGIParams()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETKODAMAGIPARAMS_OFFSET))(this);
	}

	::System::Boolean GetCharacterColorGradingEnabled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETCHARACTERCOLORGRADINGENABLED_OFFSET))(this);
	}

	::System::Void LearpCharacterColorGradingParams(::UnityEngine::NAPRenderPipeline0::CharacterColorGradingParams& param, ::System::Single indoorWeight)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CharacterColorGradingParams&, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_LEARPCHARACTERCOLORGRADINGPARAMS_OFFSET))(this, param, indoorWeight);
	}

	::System::Void GetUserLookupTableParams(::UnityEngine::Texture*& userLutTex, ::UnityEngine::Vector4& userLutParam)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETUSERLOOKUPTABLEPARAMS_OFFSET))(this, userLutTex, userLutParam);
	}

	::System::Void GetUserLogLutParams(::UnityEngine::Texture*& userLutTex, ::UnityEngine::Vector4& userLutParam, ::UnityEngine::Texture*& userPreLogLut, ::System::Single& lerpAlpha)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*&, ::UnityEngine::Vector4&, ::UnityEngine::Texture*&, ::System::Single&))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETUSERLOGLUTPARAMS_OFFSET))(this, userLutTex, userLutParam, userPreLogLut, lerpAlpha);
	}

	::System::Boolean GetUseCloudMiddleColor()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETUSECLOUDMIDDLECOLOR_OFFSET))(this);
	}

	::System::Boolean GetUseAnimation()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETUSEANIMATION_OFFSET))(this);
	}

	::System::Boolean GetPreviewSkyboxForBake()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETPREVIEWSKYBOXFORBAKE_OFFSET))(this);
	}

	::System::Void GetDrawCloudParams(::UnityEngine::NAPRenderPipeline0::DrawCloudParams& parameters)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::DrawCloudParams&))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETDRAWCLOUDPARAMS_OFFSET))(this, parameters);
	}

	::UnityEngine::NAPRenderPipeline0::EKodamaGIType GetKodamaGIType()
	{
		return ((::UnityEngine::NAPRenderPipeline0::EKodamaGIType(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETKODAMAGITYPE_OFFSET))(this);
	}

	::UnityEngine::NAPRenderPipeline0::ESupportedGIType GetSupportedGIType()
	{
		return ((::UnityEngine::NAPRenderPipeline0::ESupportedGIType(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETSUPPORTEDGITYPE_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetIBLReflectionParam()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETIBLREFLECTIONPARAM_OFFSET))(this);
	}

	::System::Single GetPostExposure()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETPOSTEXPOSURE_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetGroundPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETGROUNDPOS_OFFSET))(this);
	}

	::UnityEngine::Material* GetReplaceSkyBoxMat()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETREPLACESKYBOXMAT_OFFSET))(this);
	}

	::System::Boolean IsSkyBoxForBake()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_ISSKYBOXFORBAKE_OFFSET))(this);
	}

	::System::Void GetWeatherConfigDrawSkyParams(::UnityEngine::NAPRenderPipeline0::WeatherConfigDrawSkyParams& skyParam)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::WeatherConfigDrawSkyParams&))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETWEATHERCONFIGDRAWSKYPARAMS_OFFSET))(this, skyParam);
	}

	::System::Boolean SetupChromaticAberration(::UnityEngine::Rendering::CommandBuffer* cmd)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SETUPCHROMATICABERRATION_OFFSET))(this, cmd);
	}

	::System::Void GetDrawSkyCoverParams(::UnityEngine::NAPRenderPipeline0::DrawSkyCoverParams& parameters)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::DrawSkyCoverParams&))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETDRAWSKYCOVERPARAMS_OFFSET))(this, parameters);
	}

	::System::Void GetDrawRainDropParams(::UnityEngine::NAPRenderPipeline0::DrawRainDropParams& p)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::DrawRainDropParams&))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETDRAWRAINDROPPARAMS_OFFSET))(this, p);
	}

	::System::Void GetDrawRainSplashParams(::UnityEngine::NAPRenderPipeline0::DrawRainSplashParams& p)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::DrawRainSplashParams&))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETDRAWRAINSPLASHPARAMS_OFFSET))(this, p);
	}

	::System::Void GetUpdateKodamaGILightingParams(::UnityEngine::NAPRenderPipeline0::UpdateKodamaLightingParams& p)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::UpdateKodamaLightingParams&))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETUPDATEKODAMAGILIGHTINGPARAMS_OFFSET))(this, p);
	}

	::System::Void GetLightShaftDrawParams(::UnityEngine::NAPRenderPipeline0::DrawLightShaftParams& p)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::DrawLightShaftParams&))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETLIGHTSHAFTDRAWPARAMS_OFFSET))(this, p);
	}

	::UnityEngine::Vector4 GetTintShadowBlurRadius()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETTINTSHADOWBLURRADIUS_OFFSET))(this);
	}

	::System::Boolean HasGlobalVolumetricFog()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_HASGLOBALVOLUMETRICFOG_OFFSET))(this);
	}

	::System::Void GetDrawVolumetricFogWeatherConfigParams(::UnityEngine::NAPRenderPipeline0::DrawVolumetricFogWeatherConfigParams& p, ::System::Single globalFogIntensity)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::DrawVolumetricFogWeatherConfigParams&, ::System::Single))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETDRAWVOLUMETRICFOGWEATHERCONFIGPARAMS_OFFSET))(this, p, globalFogIntensity);
	}

	::System::Void GetDrawFakeLightVolumetricFogParam(::UnityEngine::NAPRenderPipeline0::DrawFakeLightVolumetricFogParam& p)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::DrawFakeLightVolumetricFogParam&))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETDRAWFAKELIGHTVOLUMETRICFOGPARAM_OFFSET))(this, p);
	}

	::System::Boolean HasLightFogProxy()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_HASLIGHTFOGPROXY_OFFSET))(this);
	}

	::System::Void GetWeatherConfigSkyLutGradParams(::UnityEngine::NAPRenderPipeline0::WeatherConfigSkyLutGradParams& p)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::WeatherConfigSkyLutGradParams&))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETWEATHERCONFIGSKYLUTGRADPARAMS_OFFSET))(this, p);
	}

	::UnityEngine::Vector3 GetMainLightDir()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETMAINLIGHTDIR_OFFSET))(this);
	}

	::System::Int32 GetWeatherConfigSkyLutHashes(::Il2CppArray<::System::Int32>* hashes)
	{
		return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETWEATHERCONFIGSKYLUTHASHES_OFFSET))(this, hashes);
	}

	::UnityEngine::Texture* GetLookupTable()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETLOOKUPTABLE_OFFSET))(this);
	}

	::UnityEngine::Rendering::Universal::SceneColorGradingParams GetSceneColorGradingParams(::System::Boolean applyLutAfterEverything)
	{
		return ((::UnityEngine::Rendering::Universal::SceneColorGradingParams(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETSCENECOLORGRADINGPARAMS_OFFSET))(this, applyLutAfterEverything);
	}

	::UnityEngine::Texture2D* CreateToneCurveTexture()
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_CREATETONECURVETEXTURE_OFFSET))(this);
	}

	::System::Void SetupSpecularTonemapping(::UnityEngine::Rendering::CommandBuffer* cmd)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SETUPSPECULARTONEMAPPING_OFFSET))(this, cmd);
	}

	::System::Void CopyCharacterConfig(::WeatherConfig* target, ::System::Boolean copyCharLightData)
	{
		return ((::System::Void(*)(::PVOID, ::WeatherConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + WEATHERCONFIG_COPYCHARACTERCONFIG_OFFSET))(this, target, copyCharLightData);
	}

	::System::Void SetDefaultValues()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_SETDEFAULTVALUES_OFFSET))(this);
	}

	::System::Void ReplaceSkinRampColorsWithOtherRamp()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEATHERCONFIG_REPLACESKINRAMPCOLORSWITHOTHERRAMP_OFFSET))(this);
	}
};
