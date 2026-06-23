#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ERainType.h"
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
namespace UnityEngine::Rendering::Universal { class VolumetricCloudConfigV2; }

#define WEATHERCONFIG_BINDMAINLIGHTDATA_OFFSET UNITYSDK_OFFSET(0x1C158AF0)
#define WEATHERCONFIG_BINDNIGHTTEXTURES_OFFSET UNITYSDK_OFFSET(0x1C158EF0)
#define WEATHERCONFIG_CAPTUREDATAFORRENDER_OFFSET UNITYSDK_OFFSET(0x1C159830)
#define WEATHERCONFIG_COPYCHARACTERCONFIG_OFFSET UNITYSDK_OFFSET(0x1C15FD70)
#define WEATHERCONFIG_CREATETONECURVETEXTURE_OFFSET UNITYSDK_OFFSET(0x1C15F9C0)
#define WEATHERCONFIG_DEFAULTWEATHERCONFIG_OFFSET UNITYSDK_OFFSET(0x1C155D90)
#define WEATHERCONFIG_EVALUATEMAINLIGHTINTENSITY_OFFSET UNITYSDK_OFFSET(0x1C159090)
#define WEATHERCONFIG_EVALUATESUNDISK_OFFSET UNITYSDK_OFFSET(0x1C159010)
#define WEATHERCONFIG_GETCHARACTERCOLORGRADINGENABLED_OFFSET UNITYSDK_OFFSET(0x1C15A280)
#define WEATHERCONFIG_GETDRAWCLOUDPARAMS_OFFSET UNITYSDK_OFFSET(0x1C15AF00)
#define WEATHERCONFIG_GETDRAWFAKELIGHTVOLUMETRICFOGPARAM_OFFSET UNITYSDK_OFFSET(0x1C15DBC0)
#define WEATHERCONFIG_GETDRAWRAINDROPPARAMS_OFFSET UNITYSDK_OFFSET(0x1C15C7D0)
#define WEATHERCONFIG_GETDRAWRAINSPLASHPARAMS_OFFSET UNITYSDK_OFFSET(0x1C15CB20)
#define WEATHERCONFIG_GETDRAWSKYCOVERPARAMS_OFFSET UNITYSDK_OFFSET(0x1C15C750)
#define WEATHERCONFIG_GETDRAWVOLUMETRICFOGWEATHERCONFIGPARAMS_OFFSET UNITYSDK_OFFSET(0x1C15DAE0)
#define WEATHERCONFIG_GETDYNAMICOBJECTGIINTENSITY_OFFSET UNITYSDK_OFFSET(0x1C15A150)
#define WEATHERCONFIG_GETGROUNDPOS_OFFSET UNITYSDK_OFFSET(0x1C15B0E0)
#define WEATHERCONFIG_GETIBLREFLECTIONPARAM_OFFSET UNITYSDK_OFFSET(0x1C15B010)
#define WEATHERCONFIG_GETKODAMAGIPARAMS_OFFSET UNITYSDK_OFFSET(0x1C15A1B0)
#define WEATHERCONFIG_GETKODAMAGITYPE_OFFSET UNITYSDK_OFFSET(0x1C15AF60)
#define WEATHERCONFIG_GETLIGHTSHAFTDRAWPARAMS_OFFSET UNITYSDK_OFFSET(0x1C15D630)
#define WEATHERCONFIG_GETLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0x1C15E310)
#define WEATHERCONFIG_GETMAINLIGHTDIR_OFFSET UNITYSDK_OFFSET(0x1C15DF90)
#define WEATHERCONFIG_GETPOSTEXPOSURE_OFFSET UNITYSDK_OFFSET(0x1C15B090)
#define WEATHERCONFIG_GETPREVIEWSKYBOXFORBAKE_OFFSET UNITYSDK_OFFSET(0x1C15AEB0)
#define WEATHERCONFIG_GETREPLACESKYBOXMAT_OFFSET UNITYSDK_OFFSET(0x1C15B160)
#define WEATHERCONFIG_GETSCENECOLORGRADINGPARAMS_OFFSET UNITYSDK_OFFSET(0x1C15E360)
#define WEATHERCONFIG_GETSUPPORTEDGITYPE_OFFSET UNITYSDK_OFFSET(0x1C15AFC0)
#define WEATHERCONFIG_GETTINTSHADOWBLURRADIUS_OFFSET UNITYSDK_OFFSET(0x1C15DA10)
#define WEATHERCONFIG_GETUPDATEKODAMAGILIGHTINGPARAMS_OFFSET UNITYSDK_OFFSET(0x1C15CDD0)
#define WEATHERCONFIG_GETUPDATERTXGILIGHTINGPARAMS_OFFSET UNITYSDK_OFFSET(0x1C15D220)
#define WEATHERCONFIG_GETUSEANIMATION_OFFSET UNITYSDK_OFFSET(0x1C15AE60)
#define WEATHERCONFIG_GETUSECLOUDMIDDLECOLOR_OFFSET UNITYSDK_OFFSET(0x1C15AE20)
#define WEATHERCONFIG_GETUSERLOGLUTPARAMS_OFFSET UNITYSDK_OFFSET(0x1C15A900)
#define WEATHERCONFIG_GETUSERLOOKUPTABLEPARAMS_OFFSET UNITYSDK_OFFSET(0x1C15A6C0)
#define WEATHERCONFIG_GETWEATHERCONFIGDRAWSKYPARAMS_OFFSET UNITYSDK_OFFSET(0x1C15B310)
#define WEATHERCONFIG_GETWEATHERCONFIGSKYLUTGRADPARAMS_OFFSET UNITYSDK_OFFSET(0x1C15DC80)
#define WEATHERCONFIG_GETWEATHERCONFIGSKYLUTHASHES_OFFSET UNITYSDK_OFFSET(0x1C15E000)
#define WEATHERCONFIG_GET_CLOUDLERPALPHA_OFFSET UNITYSDK_OFFSET(0x1C1561D0)
#define WEATHERCONFIG_GET_CUSTOMSKYBOXMESH_OFFSET UNITYSDK_OFFSET(0x1C1560D0)
#define WEATHERCONFIG_GET_DISABLESSPR_OFFSET UNITYSDK_OFFSET(0x1C155F80)
#define WEATHERCONFIG_GET_ENABLELOCALHEIGHTMAP_OFFSET UNITYSDK_OFFSET(0x1C156210)
#define WEATHERCONFIG_GET_ENABLEOCEAN_OFFSET UNITYSDK_OFFSET(0x1C155E10)
#define WEATHERCONFIG_GET_GLOBALDECALBLENDPARAMS_OFFSET UNITYSDK_OFFSET(0x1C156350)
#define WEATHERCONFIG_GET_GROUNDPOS_OFFSET UNITYSDK_OFFSET(0x1C156630)
#define WEATHERCONFIG_GET_HASTRIGGERSPECIALCLOUDLAYER_OFFSET UNITYSDK_OFFSET(0x1C156190)
#define WEATHERCONFIG_GET_HEIGHTMAP2_OFFSET UNITYSDK_OFFSET(0x1C156330)
#define WEATHERCONFIG_GET_HEIGHTMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1C1563D0)
#define WEATHERCONFIG_GET_HEIGHTMAP_OFFSET UNITYSDK_OFFSET(0x1C1561F0)
#define WEATHERCONFIG_GET_HOLLOWCOVERMESH_OFFSET UNITYSDK_OFFSET(0x1C156130)
#define WEATHERCONFIG_GET_HOLLOWCOVERSIZE_OFFSET UNITYSDK_OFFSET(0x1C156110)
#define WEATHERCONFIG_GET_ISOPTIMIZEDSCENEBOUNDBOXVALUE_OFFSET UNITYSDK_OFFSET(0x1C1565F0)
#define WEATHERCONFIG_GET_LERPVALUE_OFFSET UNITYSDK_OFFSET(0x1C1561B0)
#define WEATHERCONFIG_GET_NAVMESHBOUNDBOX_OFFSET UNITYSDK_OFFSET(0x1C156610)
#define WEATHERCONFIG_GET_OCEANCENTER_OFFSET UNITYSDK_OFFSET(0x1C1562D0)
#define WEATHERCONFIG_GET_OCEANDEPTHOFFSET_OFFSET UNITYSDK_OFFSET(0x1C156310)
#define WEATHERCONFIG_GET_OCEANFFTBAKEDATA_OFFSET UNITYSDK_OFFSET(0x1C1562B0)
#define WEATHERCONFIG_GET_OCEANMASKHEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x1C156290)
#define WEATHERCONFIG_GET_OCEANMASKMAPRECT_OFFSET UNITYSDK_OFFSET(0x1C156250)
#define WEATHERCONFIG_GET_OCEANMASKMAP_OFFSET UNITYSDK_OFFSET(0x1C156230)
#define WEATHERCONFIG_GET_OVERRIDELOWCLOUDDARKCOLOR_OFFSET UNITYSDK_OFFSET(0x1C156070)
#define WEATHERCONFIG_GET_OVERRIDELOWCLOUDLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x1C156050)
#define WEATHERCONFIG_GET_OVERRIDESKYBTNCOLOR_OFFSET UNITYSDK_OFFSET(0x1C156010)
#define WEATHERCONFIG_GET_OVERRIDESKYTOPCOLOR_OFFSET UNITYSDK_OFFSET(0x1C156030)
#define WEATHERCONFIG_GET_OVERRIDESKYWEIGHT_OFFSET UNITYSDK_OFFSET(0x1C155FF0)
#define WEATHERCONFIG_GET_PARTICLECONFIG_OFFSET UNITYSDK_OFFSET(0x1C156650)
#define WEATHERCONFIG_GET_SCENEBOUNDBOX_OFFSET UNITYSDK_OFFSET(0x1C1565B0)
#define WEATHERCONFIG_GET_SCENECLIPPLANEY_OFFSET UNITYSDK_OFFSET(0x1C1560B0)
#define WEATHERCONFIG_GET_SCENEETHERCOVEREFFECTMAT_OFFSET UNITYSDK_OFFSET(0x1C1560F0)
#define WEATHERCONFIG_GET_SCENEHEIGHTMAPYOFFSET_OFFSET UNITYSDK_OFFSET(0x1C1565D0)
#define WEATHERCONFIG_GET_SCENEWATERPOOLBOUNDBOX_OFFSET UNITYSDK_OFFSET(0x1C156390)
#define WEATHERCONFIG_GET_SCENEWATERPOOLMAP_OFFSET UNITYSDK_OFFSET(0x1C156370)
#define WEATHERCONFIG_GET_SCENEWATERPOOLMINMAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1C1563B0)
#define WEATHERCONFIG_GET_SEALEVELHEIGHT_OFFSET UNITYSDK_OFFSET(0x1C156270)
#define WEATHERCONFIG_GET_SPECULARTONEMAPPINGCURVETEXTURE_OFFSET UNITYSDK_OFFSET(0x1C155FE0)
#define WEATHERCONFIG_GET_SUPPORTEDGITYPE_OFFSET UNITYSDK_OFFSET(0x1C156090)
#define WEATHERCONFIG_GET_WATERCONFIG_OFFSET UNITYSDK_OFFSET(0x1C156670)
#define WEATHERCONFIG_GET_WATERHEIGHT_OFFSET UNITYSDK_OFFSET(0x1C156170)
#define WEATHERCONFIG_GET_WATERMATERIALS_OFFSET UNITYSDK_OFFSET(0x1C156150)
#define WEATHERCONFIG_GET_WINDCONFIG_OFFSET UNITYSDK_OFFSET(0x1C156690)
#define WEATHERCONFIG_HASGLOBALVOLUMETRICFOG_OFFSET UNITYSDK_OFFSET(0x1C15DA90)
#define WEATHERCONFIG_HASLIGHTFOGPROXY_OFFSET UNITYSDK_OFFSET(0x1C15DC30)
#define WEATHERCONFIG_ISAMBIENTACTIVE_OFFSET UNITYSDK_OFFSET(0x1C159110)
#define WEATHERCONFIG_ISLIGHTSHAFTON_OFFSET UNITYSDK_OFFSET(0x1C158890)
#define WEATHERCONFIG_ISSKYBOXFORBAKE_OFFSET UNITYSDK_OFFSET(0x1C15B1B0)
#define WEATHERCONFIG_LEARPCHARACTERCOLORGRADINGPARAMS_OFFSET UNITYSDK_OFFSET(0x1C15A2D0)
#define WEATHERCONFIG_LERPWEATHERNEW_OFFSET UNITYSDK_OFFSET(0x1C158130)
#define WEATHERCONFIG_RELEASE_OFFSET UNITYSDK_OFFSET(0x1C157C50)
#define WEATHERCONFIG_REPLACESKINRAMPCOLORSWITHOTHERRAMP_OFFSET UNITYSDK_OFFSET(0x1C160200)
#define WEATHERCONFIG_SETDEFAULTVALUES_OFFSET UNITYSDK_OFFSET(0x1C160100)
#define WEATHERCONFIG_SETFOG_OFFSET UNITYSDK_OFFSET(0x1C158830)
#define WEATHERCONFIG_SETUPCHROMATICABERRATION_OFFSET UNITYSDK_OFFSET(0x1C15C0F0)
#define WEATHERCONFIG_SETUPSPECULARTONEMAPPING_OFFSET UNITYSDK_OFFSET(0x1C15FAB0)
#define WEATHERCONFIG_SETVISUALENVDATA_OFFSET UNITYSDK_OFFSET(0x1C158AB0)
#define WEATHERCONFIG_SET_CLOUDLERPALPHA_OFFSET UNITYSDK_OFFSET(0x1C1561E0)
#define WEATHERCONFIG_SET_CUSTOMSKYBOXMESH_OFFSET UNITYSDK_OFFSET(0x1C1560E0)
#define WEATHERCONFIG_SET_ENABLELOCALHEIGHTMAP_OFFSET UNITYSDK_OFFSET(0x1C156220)
#define WEATHERCONFIG_SET_GLOBALDECALBLENDPARAMS_OFFSET UNITYSDK_OFFSET(0x1C156360)
#define WEATHERCONFIG_SET_GROUNDPOS_OFFSET UNITYSDK_OFFSET(0x1C156640)
#define WEATHERCONFIG_SET_HASTRIGGERSPECIALCLOUDLAYER_OFFSET UNITYSDK_OFFSET(0x1C1561A0)
#define WEATHERCONFIG_SET_HEIGHTMAP2_OFFSET UNITYSDK_OFFSET(0x1C156340)
#define WEATHERCONFIG_SET_HEIGHTMAP_OFFSET UNITYSDK_OFFSET(0x1C156200)
#define WEATHERCONFIG_SET_HOLLOWCOVERMESH_OFFSET UNITYSDK_OFFSET(0x1C156140)
#define WEATHERCONFIG_SET_HOLLOWCOVERSIZE_OFFSET UNITYSDK_OFFSET(0x1C156120)
#define WEATHERCONFIG_SET_ISOPTIMIZEDSCENEBOUNDBOXVALUE_OFFSET UNITYSDK_OFFSET(0x1C156600)
#define WEATHERCONFIG_SET_LERPVALUE_OFFSET UNITYSDK_OFFSET(0x1C1561C0)
#define WEATHERCONFIG_SET_NAVMESHBOUNDBOX_OFFSET UNITYSDK_OFFSET(0x1C156620)
#define WEATHERCONFIG_SET_OCEANCENTER_OFFSET UNITYSDK_OFFSET(0x1C1562F0)
#define WEATHERCONFIG_SET_OCEANDEPTHOFFSET_OFFSET UNITYSDK_OFFSET(0x1C156320)
#define WEATHERCONFIG_SET_OCEANFFTBAKEDATA_OFFSET UNITYSDK_OFFSET(0x1C1562C0)
#define WEATHERCONFIG_SET_OCEANMASKHEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x1C1562A0)
#define WEATHERCONFIG_SET_OCEANMASKMAPRECT_OFFSET UNITYSDK_OFFSET(0x1C156260)
#define WEATHERCONFIG_SET_OCEANMASKMAP_OFFSET UNITYSDK_OFFSET(0x1C156240)
#define WEATHERCONFIG_SET_OVERRIDELOWCLOUDDARKCOLOR_OFFSET UNITYSDK_OFFSET(0x1C156080)
#define WEATHERCONFIG_SET_OVERRIDELOWCLOUDLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x1C156060)
#define WEATHERCONFIG_SET_OVERRIDESKYBTNCOLOR_OFFSET UNITYSDK_OFFSET(0x1C156020)
#define WEATHERCONFIG_SET_OVERRIDESKYTOPCOLOR_OFFSET UNITYSDK_OFFSET(0x1C156040)
#define WEATHERCONFIG_SET_OVERRIDESKYWEIGHT_OFFSET UNITYSDK_OFFSET(0x1C156000)
#define WEATHERCONFIG_SET_PARTICLECONFIG_OFFSET UNITYSDK_OFFSET(0x1C156660)
#define WEATHERCONFIG_SET_SCENEBOUNDBOX_OFFSET UNITYSDK_OFFSET(0x1C1565C0)
#define WEATHERCONFIG_SET_SCENECLIPPLANEY_OFFSET UNITYSDK_OFFSET(0x1C1560C0)
#define WEATHERCONFIG_SET_SCENEETHERCOVEREFFECTMAT_OFFSET UNITYSDK_OFFSET(0x1C156100)
#define WEATHERCONFIG_SET_SCENEHEIGHTMAPYOFFSET_OFFSET UNITYSDK_OFFSET(0x1C1565E0)
#define WEATHERCONFIG_SET_SCENEWATERPOOLBOUNDBOX_OFFSET UNITYSDK_OFFSET(0x1C1563A0)
#define WEATHERCONFIG_SET_SCENEWATERPOOLMAP_OFFSET UNITYSDK_OFFSET(0x1C156380)
#define WEATHERCONFIG_SET_SCENEWATERPOOLMINMAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1C1563C0)
#define WEATHERCONFIG_SET_SEALEVELHEIGHT_OFFSET UNITYSDK_OFFSET(0x1C156280)
#define WEATHERCONFIG_SET_SUPPORTEDGITYPE_OFFSET UNITYSDK_OFFSET(0x1C1560A0)
#define WEATHERCONFIG_SET_WATERCONFIG_OFFSET UNITYSDK_OFFSET(0x1C156680)
#define WEATHERCONFIG_SET_WATERHEIGHT_OFFSET UNITYSDK_OFFSET(0x1C156180)
#define WEATHERCONFIG_SET_WATERMATERIALS_OFFSET UNITYSDK_OFFSET(0x1C156160)
#define WEATHERCONFIG_SET_WINDCONFIG_OFFSET UNITYSDK_OFFSET(0x1C1566A0)
#define WEATHERCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1602F0)
#define WEATHERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1566B0)

inline static constexpr unsigned int WeatherConfig_TypeDefinitionIndex = 27054;

class WeatherConfig : public ::System::Object
{
public:
	static ::UnityEngine::Gradient** StaticGet_defaultGradient()
	{
		return (::UnityEngine::Gradient**)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x22330);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_rgbMaskType()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x22338);
	}
	static ::WeatherConfig** StaticGet_s_DefaultConfig()
	{
		return (::WeatherConfig**)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x22340);
	}
	static ::WeatherConfig** StaticGet_s_CachedConfig()
	{
		return (::WeatherConfig**)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x22348);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_Sampler_LerpWeatherNew()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x22350);
	}
	static ::System::Single* StaticGet_lastLerpValue()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x74A0);
	}
	static ::UnityEngine::Vector4* StaticGet_s_CachedKodamaGIParams()
	{
		return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x74A4);
	}
	static ::System::Boolean* StaticGet_s_EnableStaticLighting()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x74B4);
	}
	static ::System::Boolean* StaticGet_s_RefreshLocalLight()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x74B5);
	}
	static ::UnityEngine::NAPRenderPipeline0::UpdateKodamaLightingParams* StaticGet_s_CachedUpdateKodamaLightingParams()
	{
		return (::UnityEngine::NAPRenderPipeline0::UpdateKodamaLightingParams*)Il2CppClass::FromTypeDefinitionIndex(WeatherConfig_TypeDefinitionIndex)->GetStaticField(0x74B8);
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
	::System::Boolean overrideRainGroundFog; // 0x1F0
	::UnityEngine::Vector4 rainGroundFogParam1; // 0x1F4
	::UnityEngine::Vector4 rainGroundFogParam2; // 0x204
	::UnityEngine::Color rainGroundFogColor; // 0x214
	::System::Boolean overrideVolumetricFog; // 0x224
	::System::Boolean hasGlobalVolumetricFog; // 0x225
	::System::Boolean volumetricFogDisableFogShadow; // 0x226
	::System::Single volumetricFogSize; // 0x228
	::System::Single volumetricFog_Jittering; // 0x22C
	::System::Single volumetricFog_Dithering; // 0x230
	::System::Single volumetricFog_IntensityTowardLight; // 0x234
	::System::Single volumetricFog_DustIntensity; // 0x238
	::System::Single volumetricFog_MaxIntensity; // 0x23C
	::System::Single volumetricFog_Step; // 0x240
	::UnityEngine::Color volumetricFog_Color; // 0x244
	::System::Single volumetricFog_PunctualLightMultiplier; // 0x254
	::System::Single volumetricFog_PunctualLightFadePower; // 0x258
	::System::Single volumetricFog_ExtraBlurValue; // 0x25C
	::System::Boolean VolumetricFogBlitBeforeEffect; // 0x260
	::System::Boolean overrideLightFog; // 0x261
	::System::Boolean hasLightFogProxy; // 0x262
	::System::Single lightFogMaxDensity; // 0x264
	::System::Single lightFogSoftParticleStartFadeDistance; // 0x268
	::System::Single lightFogSoftParticleFadeFactor; // 0x26C
	::System::Boolean useSimpleFakeLightFogProxy; // 0x270
	::System::Boolean overrideSceneFogCard; // 0x271
	::System::Boolean overrideSceneFogCardColor; // 0x272
	::UnityEngine::Color sceneFogCardAmbientScatteringColor; // 0x274
	::System::Boolean useRevertVolumetricFog; // 0x284
	::System::Boolean overrideSkyCloud; // 0x285
	::UnityEngine::Rendering::Universal::SkyCloudConfig* skyCloudConfig; // 0x288
	::System::Boolean overrideSkyCloudEarthArc; // 0x290
	::System::Boolean overrideSkyCloudLighting; // 0x291
	::System::Boolean CloudLightEnabled; // 0x292
	::System::Single cloudLightWidth; // 0x294
	::System::Single cloudLightStrength; // 0x298
	::System::Single cloudLightMaxIntervalTime; // 0x29C
	::System::Single cloudLightMinIntervalTime; // 0x2A0
	::System::Single cloudLightDurationTime; // 0x2A4
	::System::Single cloudLightMaxLength; // 0x2A8
	::System::Single cloudLightMinLength; // 0x2AC
	::System::Single cloudLightLocalTime; // 0x2B0
	::System::Single cloudLightRandom; // 0x2B4
	::System::Boolean overrideCloudShadow; // 0x2B8
	::System::Single cloudShadowIntensity; // 0x2BC
	::UnityEngine::Texture* cloudShadow; // 0x2C0
	::UnityEngine::Vector4 cloudShadowTileAndOffset; // 0x2C8
	::System::Boolean cloudGodRay; // 0x2D8
	::UnityEngine::Vector2 cloudShadowMoveSpeed; // 0x2DC
	::UnityEngine::Vector3 cloudShadowRotation; // 0x2E4
	::System::Boolean overrideBaked6WayCloud; // 0x2F0
	::UnityEngine::Color bakedCloudSunColor; // 0x2F4
	::UnityEngine::Color bakedCloudSkyColor; // 0x304
	::System::Boolean overrideVolumetricCloud; // 0x314
	::UnityEngine::Rendering::Universal::VolumetricCloudConfig* volumetricCloudConfig; // 0x318
	::UnityEngine::Rendering::Universal::VolumetricCloudConfigV2* volumetricCloudConfigV2; // 0x320
	::System::Boolean mistBlitAfterColorGrading; // 0x328
	::System::Boolean mistBlitAfterParticleDecal; // 0x329
	::System::Boolean overrideCloudChromaAmount; // 0x32A
	::UnityEngine::Color cloudChromaAmountIntensity; // 0x32C
	::UnityEngine::Vector2 cloudChromaAmount; // 0x33C
	::UnityEngine::NAPRenderPipeline0::RGBMaskType cloudChromaType; // 0x344
	::UnityEngine::Texture2D* cloudChromaAmountIntensityMask; // 0x348
	::UnityEngine::Texture2D* cloudChromaAmountMask; // 0x350
	::UnityEngine::Vector2 cloudChromaAmountMaskTiling; // 0x358
	::UnityEngine::Vector2 cloudChromaAmountMaskSpeed; // 0x360
	::UnityEngine::NAPRenderPipeline0::TextureChannel cloudChromaAmountMaskChannel; // 0x368
	::System::Boolean overrideSkyCover; // 0x36C
	::System::Single SkyCoverMoveSpeed; // 0x370
	::UnityEngine::Color SkyCoverColor; // 0x374
	::System::Boolean useAnimatedSkyCover; // 0x384
	::System::Single skyCoverAnimationDeltaTime; // 0x388
	::UnityEngine::AnimationCurve* skyCoverAlphaAnimation; // 0x390
	::System::Boolean overrideSceneParticle; // 0x398
	::UnityEngine::Rendering::Universal::SceneParticleConfig* sceneParticleConfig; // 0x3A0
	::System::Boolean overrideEtherFX; // 0x3A8
	::System::Single etherFXWaveAngle; // 0x3AC
	::System::Single etherFXWaveSpeed; // 0x3B0
	::System::Single etherFXWaveSpacing; // 0x3B4
	::System::Single etherEffectDirection; // 0x3B8
	::System::Single etherEffectSpeed; // 0x3BC
	::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType particleConfigWeatherType; // 0x3C0
	::System::Single weatherEffectFoggyIntensity; // 0x3C4
	::System::Single weatherEffectSpecialRedIntensity; // 0x3C8
	::System::Boolean overrideSkyColor; // 0x3CC
	::UnityEngine::Gradient* skyVerticalGradient; // 0x3D0
	::System::Single skyVerticalGradientMinRange; // 0x3D8
	::System::Boolean overrideSunLight; // 0x3DC
	::UnityEngine::Vector3 mainLightDir; // 0x3E0
	::System::Boolean overrideSunLightColor; // 0x3EC
	::UnityEngine::Color mainLightColor; // 0x3F0
	::System::Single mainLightIntensity; // 0x400
	::System::Boolean overrideSkySun; // 0x404
	::UnityEngine::Color sunDiskColor; // 0x408
	::System::Single SunDiskSize; // 0x418
	::System::Single SunDiskIntensity; // 0x41C
	::System::Boolean useSingleSunDiskPosition; // 0x420
	::UnityEngine::Vector3 sunDiskPosition; // 0x424
	::System::Single customSunHardness; // 0x430
	::System::Boolean useSunAnimation; // 0x434
	::System::Single SunanimationLifeTime; // 0x438
	::UnityEngine::AnimationCurve* SunDiskCurve; // 0x440
	::System::Boolean overrideSunPost; // 0x448
	::System::Boolean enableLensFlareForSun; // 0x449
	::UnityEngine::Rendering::LensFlareDataSRP* lensFlareDataSrp; // 0x450
	::UnityEngine::Rendering::Universal::LensFlareConfig* lensFlareConfigForSun; // 0x458
	::UnityEngine::Rendering::Universal::LightShaftConfig* lightShaftConfigForSun; // 0x460
	::System::Boolean overrideMoonLight; // 0x468
	::UnityEngine::Vector3 moonDir; // 0x46C
	::System::Boolean overrideMoonLightColor; // 0x478
	::UnityEngine::Color MoonLightColor; // 0x47C
	::System::Single MoonLightIntensity; // 0x48C
	::System::Boolean overrideSkyMoon; // 0x490
	::UnityEngine::LazyLoadReference_1<::UnityEngine::Texture*> moonOnSky; // 0x494
	::UnityEngine::Color MoonColor; // 0x498
	::System::Single moonSize; // 0x4A8
	::System::Single moonPhaseAlphaBlend; // 0x4AC
	::UnityEngine::Color MoonGlowColor; // 0x4B0
	::System::Boolean overrideMoonPost; // 0x4C0
	::System::Boolean enableLensFlareForMoon; // 0x4C1
	::UnityEngine::Rendering::LensFlareDataSRP* lensFlareDataSrpForMoon; // 0x4C8
	::UnityEngine::Rendering::Universal::LensFlareConfig* lensFlareConfigForMoon; // 0x4D0
	::UnityEngine::Rendering::Universal::LightShaftConfig* lightShaftConfigForMoon; // 0x4D8
	::System::Boolean overrideSkyStar; // 0x4E0
	::System::Boolean isNight; // 0x4E1
	::UnityEngine::LazyLoadReference_1<::UnityEngine::Texture*> starMapOnSky; // 0x4E4
	::UnityEngine::LazyLoadReference_1<::UnityEngine::Texture*> starMaskOnSky; // 0x4E8
	::System::Single starsTwinklingRate; // 0x4EC
	::System::Single StarsIntensity; // 0x4F0
	::UnityEngine::LazyLoadReference_1<::UnityEngine::Texture*> galaxyOnSky; // 0x4F4
	::UnityEngine::Vector3 galaxyDir; // 0x4F8
	::UnityEngine::Vector3 galaxyAngleSpeed; // 0x504
	::System::Single GalaxyIntensity; // 0x510
	::System::Boolean overrideShadowTint; // 0x514
	::System::Boolean mainLightShadowTint; // 0x515
	::UnityEngine::Color mainLightShadowTintColor; // 0x518
	::System::Single mainLightShadowTintSourceAngle; // 0x528
	::System::Single mainLightShadowTintPower; // 0x52C
	::System::Single mainLightShadowTintRadius; // 0x530
	::System::Single mainLightShadowTintRadiusPower; // 0x534
	::System::Single mainLightShadowTintDepthBias; // 0x538
	::System::Boolean overrideCustomSkyBox; // 0x53C
	::System::Boolean controlMainLightParam; // 0x53D
	::UnityEngine::Material* replaceSkybox; // 0x540
	::UnityEngine::Material* hollowCoverMat; // 0x548
	::UnityEngine::Gradient* cloudOnSkyColor; // 0x550
	::System::Single cloudRotateAngle; // 0x558
	::System::Boolean overrideSkyEffectOutline; // 0x55C
	::System::Boolean enableSkyEffectOutline; // 0x55D
	::UnityEngine::Rendering::Universal::SkyEffectOutlineConfig* skyEffectOutlineConfig; // 0x560
	::System::Boolean overrideWetness; // 0x568
	::System::Single wetness; // 0x56C
	::System::Boolean ignoreHeightMap; // 0x570
	::System::Boolean ignoreNoiseMap; // 0x571
	::UnityEngine::Texture* wetnessNoise; // 0x578
	::System::Single wetnessNoiseTilling; // 0x580
	::UnityEngine::Vector2 wetnessNoiseClampRange; // 0x584
	::System::Boolean wetnessNoiseForHeight; // 0x58C
	::UnityEngine::Vector2 porosity; // 0x590
	::System::Boolean overrideRainConfig; // 0x598
	::System::Boolean isRaining; // 0x599
	::ERainType rainType; // 0x59C
	::UnityEngine::Texture* rainDropTexture; // 0x5A0
	::UnityEngine::Color rainDropColor; // 0x5A8
	::System::Single rainDropMultiplyLightColor; // 0x5B8
	::System::Int32 rainDropBatchCount; // 0x5BC
	::System::Single rainDropSpeed; // 0x5C0
	::System::Single rainDropMaxHeight; // 0x5C4
	::System::Single rainDropMinHeight; // 0x5C8
	::UnityEngine::Vector2 rainDropSizeX; // 0x5CC
	::UnityEngine::Vector2 rainDropSizeY; // 0x5D4
	::System::Single rainDropAngle; // 0x5DC
	::System::Single rainDropAngleIntensity; // 0x5E0
	::System::Single rainDropOuterCircleRadius; // 0x5E4
	::System::Single rainDropInnerCircleRadius; // 0x5E8
	::UnityEngine::Rendering::Universal::ScreenRainDropConfig* screenRainDropConfig; // 0x5F0
	::UnityEngine::Texture* rainFlowTexture; // 0x5F8
	::System::Single rainFlowTilling; // 0x600
	::System::Single rainFlowSpeed; // 0x604
	::System::Single rainFlowIntensity; // 0x608
	::UnityEngine::Texture* rainFlowNoise; // 0x610
	::UnityEngine::Texture* rainGroundNormalTex1; // 0x618
	::UnityEngine::Vector4 rainGroundNormalTexParams; // 0x620
	::UnityEngine::Vector4 rainGroundParams11; // 0x630
	::UnityEngine::Vector4 rainGroundParams22; // 0x640
	::UnityEngine::Texture* rainTexture2; // 0x650
	::System::Single rippleTextureTilling; // 0x658
	::System::Single rippleSpeed; // 0x65C
	::System::Single rippleDensity; // 0x660
	::System::Single rippleFoamIntensity; // 0x664
	::UnityEngine::Texture* rainSplashTexture; // 0x668
	::UnityEngine::Texture* rainSplashTexture2; // 0x670
	::UnityEngine::Texture* rainSplashTexture3; // 0x678
	::UnityEngine::Color rainSplashColor; // 0x680
	::UnityEngine::Vector2 rainSplashIntensityRange; // 0x690
	::UnityEngine::Vector2 rainSplashSizeRange; // 0x698
	::System::Single rainSplashPlayTime; // 0x6A0
	::System::Int32 rainSplashCount; // 0x6A4
	::System::Single rainSplashRange; // 0x6A8
	::System::Boolean overrideLightning; // 0x6AC
	::System::Boolean useAnimation; // 0x6AD
	::System::Single animationLifeTime; // 0x6B0
	::UnityEngine::AnimationCurve* mainLightIntensityCurve; // 0x6B8
	::UnityEngine::Color brightLightColor; // 0x6C0
	::UnityEngine::Vector2 brightLightColorRange; // 0x6D0
	::System::Boolean useLightningFx; // 0x6D8
	::UnityEngine::ParticleSystem* lightningFxPrefab; // 0x6E0
	::UnityEngine::Vector2 lightningFxDistanceRange; // 0x6E8
	::UnityEngine::Vector2 lightningFxHeightRange; // 0x6F0
	::UnityEngine::Vector2 lightningFxInterval; // 0x6F8
	::System::Boolean overrideDetailLayerConfig; // 0x700
	::UnityEngine::Rendering::Universal::DetailLayerConfig* detailLayerConfig; // 0x708
	::System::Boolean overrideSkyGridConfig; // 0x710
	::UnityEngine::Rendering::Universal::SkyGridConfig* skyGridConfig; // 0x718
	::System::Boolean overrideCharacterToneMapping; // 0x720
	::System::Single characterLightTonemapStart; // 0x724
	::System::Single characterLightTonemapMax; // 0x728
	::System::Single characterLightTonemapFaceAdd; // 0x72C
	::System::Single characterLightTonemapFaceEnd; // 0x730
	::System::Single characterGiWeight; // 0x734
	::System::Single toeStrength; // 0x738
	::System::Single toeLength; // 0x73C
	::System::Single shoulderStrength; // 0x740
	::System::Single shoulderLength; // 0x744
	::System::Single shoulderAngle; // 0x748
	::System::Single customGamma; // 0x74C
	::System::Boolean characterEditorIsIndoor; // 0x750
	::System::Boolean overrideCharacterLight; // 0x751
	::UnityEngine::Color mainLightColorForChara; // 0x754
	::System::Single mainLightIntensityForChara; // 0x764
	::System::Single mainLightShadowStrengthForChara; // 0x768
	::System::Single rimGlowIntensityForChara; // 0x76C
	::UnityEngine::Color MoonLightColorForChar; // 0x770
	::System::Single MoonLightIntensityForChar; // 0x780
	::System::Single moonLightShadowStrengthForChara; // 0x784
	::System::Single moonRimGlowIntensityForChara; // 0x788
	::UnityEngine::Color ambient; // 0x78C
	::UnityEngine::Color mainLightColorForCharaIndoor; // 0x79C
	::System::Single mainLightIntensityForCharaIndoor; // 0x7AC
	::System::Single mainLightShadowStrengthForCharaIndoor; // 0x7B0
	::System::Single rimGlowIntensityForCharaIndoor; // 0x7B4
	::UnityEngine::Color MoonLightColorForCharIndoor; // 0x7B8
	::System::Single MoonLightIntensityForCharIndoor; // 0x7C8
	::System::Single moonLightShadowStrengthForCharaIndoor; // 0x7CC
	::System::Single moonRimGlowIntensityForCharaIndoor; // 0x7D0
	::UnityEngine::Color ambientIndoor; // 0x7D4
	::System::Boolean overrideCharacterRamp; // 0x7E4
	::UnityEngine::Color skinFrontTint; // 0x7E8
	::UnityEngine::Color frontTint; // 0x7F8
	::UnityEngine::Color skinSssTint; // 0x808
	::UnityEngine::Color sssTint; // 0x818
	::UnityEngine::Color skinShallowTint; // 0x828
	::UnityEngine::Color shallowTint; // 0x838
	::UnityEngine::Color skinShallowFadeTint; // 0x848
	::UnityEngine::Color shallowFadeTint; // 0x858
	::UnityEngine::Color skinShadowTint; // 0x868
	::UnityEngine::Color shadowTint; // 0x878
	::UnityEngine::Color skinShadowFadeTint; // 0x888
	::UnityEngine::Color shadowFadeTint; // 0x898
	::UnityEngine::Color ambientGradient; // 0x8A8
	::UnityEngine::Color outlineTint; // 0x8B8
	::System::Boolean useShadowTintAsOutline; // 0x8C8
	::UnityEngine::Color skinFrontTintIndoor; // 0x8CC
	::UnityEngine::Color frontTintIndoor; // 0x8DC
	::UnityEngine::Color skinSssTintIndoor; // 0x8EC
	::UnityEngine::Color sssTintIndoor; // 0x8FC
	::UnityEngine::Color skinShallowTintIndoor; // 0x90C
	::UnityEngine::Color shallowTintIndoor; // 0x91C
	::UnityEngine::Color skinShallowFadeTintIndoor; // 0x92C
	::UnityEngine::Color shallowFadeTintIndoor; // 0x93C
	::UnityEngine::Color skinShadowTintIndoor; // 0x94C
	::UnityEngine::Color shadowTintIndoor; // 0x95C
	::UnityEngine::Color skinShadowFadeTintIndoor; // 0x96C
	::UnityEngine::Color shadowFadeTintIndoor; // 0x97C
	::UnityEngine::Color ambientGradientIndoor; // 0x98C
	::UnityEngine::Color outlineTintIndoor; // 0x99C
	::System::Boolean useShadowTintAsOutlineIndoor; // 0x9AC
	::System::Boolean overrideCharacterPost; // 0x9AD
	::System::Boolean characterColorGradingEnabled; // 0x9AE
	::System::Single characterPostExposure; // 0x9B0
	::System::Single contrast; // 0x9B4
	::System::Single saturation; // 0x9B8
	::UnityEngine::Vector4 lift; // 0x9BC
	::UnityEngine::Vector4 gamma; // 0x9CC
	::UnityEngine::Vector4 gain; // 0x9DC
	::System::Single characterPostExposureIndoor; // 0x9EC
	::System::Single contrastIndoor; // 0x9F0
	::System::Single saturationIndoor; // 0x9F4
	::UnityEngine::Vector4 liftIndoor; // 0x9F8
	::UnityEngine::Vector4 gammaIndoor; // 0xA08
	::UnityEngine::Vector4 gainIndoor; // 0xA18
	::System::Boolean skinColorsInitialized; // 0xA28
	::System::Boolean overrideWaterConfig; // 0xA29
	::System::Boolean useGlobalWaterConfig; // 0xA2A
	::UnityEngine::Rendering::Universal::SingleWeatherConfigWater* localWaterConfig; // 0xA30
	::System::Boolean overrideOceanConfig; // 0xA38
	::UnityEngine::Rendering::Universal::OceanConfig* oceanConfig; // 0xA40
	::System::Boolean trackControlScenePost; // 0xA48
	::System::Boolean overrideOldSceneLut; // 0xA49
	::System::Boolean useCustomLookupTable; // 0xA4A
	::UnityEngine::Texture* lookupTable; // 0xA50
	::System::Single lutContribution; // 0xA58
	::System::Single postExposure; // 0xA5C
	::UnityEngine::Rendering::Universal::ScenePostEffectConfig* scenePostEffectConfig; // 0xA60
	::System::Boolean overrideSceneLut; // 0xA68
	::System::Boolean useLogLookupTable; // 0xA69
	::UnityEngine::Texture* LogLutTex; // 0xA70
	::System::Single loglutContribution; // 0xA78
	::UnityEngine::Texture* PreLogLutTex; // 0xA80
	::System::Single preLoglutContribution; // 0xA88
	::System::Boolean overrideSceneBloom; // 0xA8C
	::System::Boolean useSceneBloom; // 0xA8D
	::System::Single bloomThreshold; // 0xA90
	::System::Single bloomMaxThreshold; // 0xA94
	::System::Single bloomIntensity; // 0xA98
	::System::Boolean overrideSpecularTonemapping; // 0xA9C
	::System::Boolean enableSpecularTonemapping; // 0xA9D
	::System::Boolean previewSpecularLutTexture; // 0xA9E
	::UnityEngine::Texture2D* specularTonemappingLut; // 0xAA0
	::UnityEngine::NAPRenderPipeline0::TextureCurve* specularToneCurve_master; // 0xAA8
	::UnityEngine::NAPRenderPipeline0::TextureCurve* specularToneCurve_red; // 0xAB0
	::UnityEngine::NAPRenderPipeline0::TextureCurve* specularToneCurve_green; // 0xAB8
	::UnityEngine::NAPRenderPipeline0::TextureCurve* specularToneCurve_blue; // 0xAC0
	::UnityEngine::RenderTexture* specularToneMappingCurveTexture; // 0xAC8
	::UnityEngine::Texture2D* specularCurveTexMaster; // 0xAD0
	::UnityEngine::Texture2D* specularCurveTexR; // 0xAD8
	::UnityEngine::Texture2D* specularCurveTexG; // 0xAE0
	::UnityEngine::Texture2D* specularCurveTexB; // 0xAE8
	::UnityEngine::Material* specularLUTMat; // 0xAF0
	::UnityEngine::Vector2 specularDistanceFade; // 0xAF8
	::UnityEngine::Vector2 specularDistanceFadeValue; // 0xB00
	::UnityEngine::Vector2 specularAngleFade; // 0xB08
	::UnityEngine::Vector2 specularAngleFadeValue; // 0xB10
	::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType WeatherType; // 0xB18
	::System::Boolean isSerializedData; // 0xB1C
	::WeatherConfig_ResultMainLightParams resultMainLightParams; // 0xB20
	::System::Single _CachedMainLightIntensity; // 0xB78
	::System::Single _AnimationSunDisk; // 0xB7C
	::WeatherConfig_CapturedWeatherData capturedData; // 0xB80
	::WeatherConfig_RuntimeUsedNightTextures nightTextures; // 0xBF0
	::System::Single _OverrideSkyWeight_k__BackingField; // 0xC10
	::UnityEngine::Color _OverrideSkyBtnColor_k__BackingField; // 0xC14
	::UnityEngine::Color _OverrideSkyTopColor_k__BackingField; // 0xC24
	::UnityEngine::Color _OverrideLowCloudLightColor_k__BackingField; // 0xC34
	::UnityEngine::Color _OverrideLowCloudDarkColor_k__BackingField; // 0xC44
	::UnityEngine::NAPRenderPipeline0::ESupportedGIType _SupportedGIType_k__BackingField; // 0xC54
	::System::Single _SceneClipPlaneY_k__BackingField; // 0xC58
	::UnityEngine::Mesh* _customSkyboxMesh_k__BackingField; // 0xC60
	::UnityEngine::Material* _sceneEtherCoverEffectMat_k__BackingField; // 0xC68
	::System::Single _hollowCoverSize_k__BackingField; // 0xC70
	::UnityEngine::Mesh* _hollowCoverMesh_k__BackingField; // 0xC78
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* _waterMaterials_k__BackingField; // 0xC80
	::System::Single _waterHeight_k__BackingField; // 0xC88
	::System::Boolean _hasTriggerSpecialCloudLayer_k__BackingField; // 0xC8C
	::System::Single cloudLerpAlpha; // 0xC90
	::System::Single lerpValue; // 0xC94
	::UnityEngine::Texture* _HeightMap_k__BackingField; // 0xC98
	::System::Boolean _enableLocalHeightMap_k__BackingField; // 0xCA0
	::UnityEngine::Texture* _OceanMaskMap_k__BackingField; // 0xCA8
	::UnityEngine::Vector4 _OceanMaskMapRect_k__BackingField; // 0xCB0
	::System::Single _SeaLevelHeight_k__BackingField; // 0xCC0
	::System::Single _OceanMaskHeightOffset_k__BackingField; // 0xCC4
	::UnityEngine::Rendering::Universal::OceanFFTBakeData* _OceanFFTBakeData_k__BackingField; // 0xCC8
	::UnityEngine::Vector3 _OceanCenter_k__BackingField; // 0xCD0
	::System::Single _OceanDepthOffset_k__BackingField; // 0xCDC
	::UnityEngine::Texture* _HeightMap2_k__BackingField; // 0xCE0
	::UnityEngine::Vector4 _GlobalDecalBlendParams_k__BackingField; // 0xCE8
	::UnityEngine::Texture* _SceneWaterPoolMap_k__BackingField; // 0xCF8
	::UnityEngine::Vector4 _SceneWaterPoolBoundBox_k__BackingField; // 0xD00
	::UnityEngine::Vector2 _SceneWaterPoolMinMaxHeight_k__BackingField; // 0xD10
	::UnityEngine::Vector4 _SceneBoundBox_k__BackingField; // 0xD18
	::System::Single _sceneHeightMapYOffset_k__BackingField; // 0xD28
	::System::Boolean _isOptimizedSceneBoundBoxValue_k__BackingField; // 0xD2C
	::UnityEngine::Vector4 _NavMeshBoundBox_k__BackingField; // 0xD30
	::UnityEngine::Vector4 _GroundPos_k__BackingField; // 0xD40
	::UnityEngine::Rendering::Universal::SingleWeatherConfigParticle* _particleConfig_k__BackingField; // 0xD50
	::UnityEngine::Rendering::Universal::SingleWeatherConfigWater* _waterConfig_k__BackingField; // 0xD58
	::UnityEngine::Rendering::Universal::SingleWeatherConfigWind* _windConfig_k__BackingField; // 0xD60
	::System::Single preFrameDaytime; // 0xD68

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

	::System::Void GetUpdateRTXGILightingParams(::UnityEngine::NAPRenderPipeline0::UpdateKodamaLightingParams& p)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::UpdateKodamaLightingParams&))((::PBYTE)hIl2Cpp + WEATHERCONFIG_GETUPDATERTXGILIGHTINGPARAMS_OFFSET))(this, p);
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
