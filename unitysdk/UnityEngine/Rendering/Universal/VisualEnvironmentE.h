#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LazyLoadReference_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EKodamaGIType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ENapGIQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ESupportedGIType.h"
#include "unitysdk/UnityEngine/ParticleSystem_Particle.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SimulatingPlatform.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VisualEnvironmentE_CachedWeatherHolderData.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VisualEnvironmentE_DayTimeFrameType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VisualEnvironmentE_ResolutionOption.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VisualEnvironmentE_TimeOfDay.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VisualEnvironmentE_TodType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VisualEnvironmentE_WeatherConfigDataType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VisualEnvironmentE_WeatherSoundParams.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VisualEnvironmentE_WeatherSystemVersionType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VisualEnvironmentE_WeatherType.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class WeatherConfig;
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3> class Tuple_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class CubemapArray; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class KodamaRealtimeLight; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ReflectionProbe; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class WindZone; }
namespace UnityEngine::NAPRenderPipeline0 { class IWeatherConfig; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering { class VolumeBounds; }
namespace UnityEngine::Rendering::Universal { class BGBuildingLightConfig; }
namespace UnityEngine::Rendering::Universal { class NapCharacterGI; }
namespace UnityEngine::Rendering::Universal { class OceanFFTBakeData; }
namespace UnityEngine::Rendering::Universal { class OverrideWeatherConfigScriptableObject; }
namespace UnityEngine::Rendering::Universal { class UnityEnvironment; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }
namespace UnityEngine::Rendering::Universal { class VisualEnvironmentEExtension; }
namespace UnityEngine::Rendering::Universal { class VisualEnvironmentE_WeatherConfigOverrideData; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigParticle; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigWater; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigWind; }
namespace UnityEngine::Rendering::Universal { class WeatherGroupScriptableObject; }
namespace UnityEngine::Rendering::Universal::Internal { class NapLightMapData; }
namespace UnityEngine::Rendering::Universal::Internal { class NapReflectionProbeDataV2; }
namespace UnityEngine::Rendering::Universal::Internal { class SceneObjectProxy; }
namespace UnityEngine::Rendering::Universal::WeatherSystem { class LocalWeatherVolumeContext; }

#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_ADDTOMOUNTPOINTS_1_OFFSET UNITYSDK_OFFSET(0x1B809C50)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_ADDTOMOUNTPOINTS_2_OFFSET UNITYSDK_OFFSET(0x1B809FD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_ADDTOMOUNTPOINTS_OFFSET UNITYSDK_OFFSET(0x1B809EA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_ADDTORENDERLIST_OFFSET UNITYSDK_OFFSET(0x1B805F10)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_AUTOBINDSCENEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B8132B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B8115F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_BINDCOMMONCONFIGBEFORELERP_OFFSET UNITYSDK_OFFSET(0x1B81AB60)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_BINDCOMMONCONFIG_OFFSET UNITYSDK_OFFSET(0x1B81ABC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_BINDINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B815900)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_BINDKODAMADATA_OFFSET UNITYSDK_OFFSET(0x1B803DA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_BINDTEMPWEATHERLIST_OFFSET UNITYSDK_OFFSET(0x1B803240)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_BIND_OFFSET UNITYSDK_OFFSET(0x1B812E70)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_CHECKCURRENTWEATHERISRAINING_OFFSET UNITYSDK_OFFSET(0x1B809170)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_CHECKIN_OFFSET UNITYSDK_OFFSET(0x1B815540)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_CHECKOUT_OFFSET UNITYSDK_OFFSET(0x1B814C30)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_CHECKTODINSCOPE_OFFSET UNITYSDK_OFFSET(0x1B8185E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_CLEANUPSOUNDACTIONLISTENERS_OFFSET UNITYSDK_OFFSET(0x1B810670)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_CLEARCACHEFRAME_OFFSET UNITYSDK_OFFSET(0x1B816670)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_CLEARLOCALCACHEFRAME_OFFSET UNITYSDK_OFFSET(0x1B807BF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_CLEARLOCALWEATHERVOLUME_OFFSET UNITYSDK_OFFSET(0x1B81A1C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_CLEARMONOROCKEFFECT_OFFSET UNITYSDK_OFFSET(0x1B806500)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_CLEAROVERRIDEVECONFIG_OFFSET UNITYSDK_OFFSET(0x1B817440)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_CLEAROVERRIDEWEATHERDATA_OFFSET UNITYSDK_OFFSET(0x1B8190E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_CLEARWEATHERRESOURCE_OFFSET UNITYSDK_OFFSET(0x1B81B6A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_COPYSOURCESCENEEFFECTVALUETOOTHER_OFFSET UNITYSDK_OFFSET(0x1B8030A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_CREATEANDSYNCMONOROCKEFFECT_OFFSET UNITYSDK_OFFSET(0x1B8049A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_DISABLESTYLIZATION_OFFSET UNITYSDK_OFFSET(0x1B813B30)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_DUMPWEATHERDATA_OFFSET UNITYSDK_OFFSET(0x1B801680)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_EVALUATEANIMATE_OFFSET UNITYSDK_OFFSET(0x1B80BA30)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_EVALUATESUNANIMATE_OFFSET UNITYSDK_OFFSET(0x1B80BE20)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETALLWEATHERCONFIGS_OFFSET UNITYSDK_OFFSET(0x1B8154F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETASSETIFLOADED_OFFSET UNITYSDK_OFFSET(0x1B814FD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETCUBEMAPARRAYINDEX_OFFSET UNITYSDK_OFFSET(0x1B80ECF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETCURRENTCUBEMAPARRAYINDEX_OFFSET UNITYSDK_OFFSET(0x1B80EC70)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETCURRENTWEATHERCONFIGEDITORONLY_OFFSET UNITYSDK_OFFSET(0x1B81A230)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETCURRENTWEATHERCONFIGINRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x1B8174C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETCURRENTWEATHERCONFIG_OFFSET UNITYSDK_OFFSET(0x1B807C40)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETCURRENTWEATHERHOLDER_OFFSET UNITYSDK_OFFSET(0x1B808B00)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETFIXALLCHARACTERLOWSHADOWINTENSITYCOLOR_OFFSET UNITYSDK_OFFSET(0x1B81CBB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETFIXCHARACTERLOWSHADOWINTENSITYCOLOR_OFFSET UNITYSDK_OFFSET(0x1B81CB60)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETKODAMAASSETPATHWITHVERSION_OFFSET UNITYSDK_OFFSET(0x1B8068F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETKODAMAISSTATICLIGHTING_OFFSET UNITYSDK_OFFSET(0x1B806750)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETLEFTRIGHTWEATHERCONFIG_OFFSET UNITYSDK_OFFSET(0x1B81CAF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETLEFTRIGHT_OFFSET UNITYSDK_OFFSET(0x1B817340)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETLIGHTMAPDATA_OFFSET UNITYSDK_OFFSET(0x1B803A60)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETLIGHTTRIGGERDAYTIME_OFFSET UNITYSDK_OFFSET(0x1B80FE60)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETSUPPORTEDGITYPE_OFFSET UNITYSDK_OFFSET(0x1B801410)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETTIMEOFDAYFROMTIMEVALUE_OFFSET UNITYSDK_OFFSET(0x1B818670)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETWEATHERTYPEINDEX_OFFSET UNITYSDK_OFFSET(0x1B81C9F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETWEATHERWITHINDEX_OFFSET UNITYSDK_OFFSET(0x1B81A2E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_CHARACTERGI_OFFSET UNITYSDK_OFFSET(0x1B801460)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_CURRENTGLOBALWEATHERKEYSETBYLOGIC_OFFSET UNITYSDK_OFFSET(0x1B8113C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_CURRENTSCENEWEATHERSYSTEMVERSION_OFFSET UNITYSDK_OFFSET(0x1B810AC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_DAYTIME_OFFSET UNITYSDK_OFFSET(0x1B810030)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B810EA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_ISBINDLIGHTMAPDATAOVER_OFFSET UNITYSDK_OFFSET(0x1B802550)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_ISDYNAMICTIME_OFFSET UNITYSDK_OFFSET(0x1B8013A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_ISLENSFLAREON_OFFSET UNITYSDK_OFFSET(0x1B8014C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_KODAMAGIREFRESHOVERTIME_OFFSET UNITYSDK_OFFSET(0x1B8024E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_M_WEATHERTYPE_OFFSET UNITYSDK_OFFSET(0x1B8073E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_NEEDDYNAMICKODAMAGI_OFFSET UNITYSDK_OFFSET(0x1B8066E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_SCENEENVVOLUME_OFFSET UNITYSDK_OFFSET(0x1B810D40)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_SCENESERIALIZEDDEFAULTWEATHERKEY_OFFSET UNITYSDK_OFFSET(0x1B8115D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_S_CURRENTSCENEWEATHERTYPE_OFFSET UNITYSDK_OFFSET(0x1B811070)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_S_ISBAKING_OFFSET UNITYSDK_OFFSET(0x1B81C480)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_S_LOGICDAYTIME_OFFSET UNITYSDK_OFFSET(0x1B811220)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_USESINGLELIGHTMAPFOLDER_OFFSET UNITYSDK_OFFSET(0x1B801520)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_USESINGLEREFLECTIONPROBEFOLDER_OFFSET UNITYSDK_OFFSET(0x1B8015E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_INDEXTOZEROWEATHERTYPE_OFFSET UNITYSDK_OFFSET(0x1B809E50)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_ISDYNAMICTIME_OFFSET UNITYSDK_OFFSET(0x1B81CA40)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B814A00)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B813AB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B8128D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1B8118A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_ONWEATHERCHANGE_OFFSET UNITYSDK_OFFSET(0x1B80C820)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_PREPAREV2KEYFORV1_OFFSET UNITYSDK_OFFSET(0x1B801240)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_REFRESHKODAMAGIFLAG_OFFSET UNITYSDK_OFFSET(0x1B802500)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_REFRESHREFLECTIONPROBEDATA_OFFSET UNITYSDK_OFFSET(0x1B807580)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_REGISTERLIGHTTRIGGER_OFFSET UNITYSDK_OFFSET(0x1B80A9C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_REGISTERMOUNTPOINT_OFFSET UNITYSDK_OFFSET(0x1B809320)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_REGISTERSOUNDACTIONLISTENER_OFFSET UNITYSDK_OFFSET(0x1B810490)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_REGISTERWINDZONE_OFFSET UNITYSDK_OFFSET(0x1B80E880)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_REMOVEFROMLIGHTLIST_OFFSET UNITYSDK_OFFSET(0x1B80AC90)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_REMOVEFROMMOUNTPOINT_1_OFFSET UNITYSDK_OFFSET(0x1B80A370)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_REMOVEFROMMOUNTPOINT_2_OFFSET UNITYSDK_OFFSET(0x1B80A460)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_REMOVEFROMMOUNTPOINT_OFFSET UNITYSDK_OFFSET(0x1B80A1F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_REMOVENOUSEDREFLECTIONCUBEASSET_OFFSET UNITYSDK_OFFSET(0x1B802BF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_REPLACESKINRAMPCOLORSWITHOTHERRAMP_OFFSET UNITYSDK_OFFSET(0x1B81CC00)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETALLLENSFLAREOFF_OFFSET UNITYSDK_OFFSET(0x1B817210)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETALLLENSFLAREON_OFFSET UNITYSDK_OFFSET(0x1B817190)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETBAKEDGI_OFFSET UNITYSDK_OFFSET(0x1B806AB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETCHARSTYLIZATION_OFFSET UNITYSDK_OFFSET(0x1B8127B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETCURRENTCAMERAVOLUMELAYER_OFFSET UNITYSDK_OFFSET(0x1B816970)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETCURRENTWEATHERBYKEYV2_OFFSET UNITYSDK_OFFSET(0x1B811550)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETCURRENTWEATHER_OFFSET UNITYSDK_OFFSET(0x1B817290)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETETHEREFFECTSPEED_OFFSET UNITYSDK_OFFSET(0x1B80BEE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETEXTENSIONDATA_OFFSET UNITYSDK_OFFSET(0x1B8116A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETFOGDENSITYSCALE_OFFSET UNITYSDK_OFFSET(0x1B810E00)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETGAMEOBJECTLAYER_OFFSET UNITYSDK_OFFSET(0x1B8048B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETHOLLOWZEROOVERRIDEVECONFIG_OFFSET UNITYSDK_OFFSET(0x1B8173B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETLEFTRIGHT_OFFSET UNITYSDK_OFFSET(0x1B8172E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETLIGHTMAPDATA_OFFSET UNITYSDK_OFFSET(0x1B804030)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETLIGHTPROBEDATA_OFFSET UNITYSDK_OFFSET(0x1B804290)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETLOCALVOLUMESTATE_OFFSET UNITYSDK_OFFSET(0x1B816FA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETMOONBIGSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x1B806130)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETOVERRIDEWEATHERCONFIGV2_OFFSET UNITYSDK_OFFSET(0x1B81DA10)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETOVERRIDEWEATHERCONFIG_OFFSET UNITYSDK_OFFSET(0x1B818BE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETSKINRAMPDEFAULTVALUES_OFFSET UNITYSDK_OFFSET(0x1B8118F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SET_CURRENTGLOBALWEATHERKEYSETBYLOGIC_OFFSET UNITYSDK_OFFSET(0x1B811420)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B810FC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SET_ISBINDLIGHTMAPDATAOVER_OFFSET UNITYSDK_OFFSET(0x1B802560)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SET_KODAMAGIREFRESHOVERTIME_OFFSET UNITYSDK_OFFSET(0x1B8024F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SET_M_WEATHERTYPE_OFFSET UNITYSDK_OFFSET(0x1B811210)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SET_SCENEENVVOLUME_OFFSET UNITYSDK_OFFSET(0x1B810DA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SET_SCENESERIALIZEDDEFAULTWEATHERKEY_OFFSET UNITYSDK_OFFSET(0x1B8115E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SET_S_CURRENTSCENEWEATHERTYPE_OFFSET UNITYSDK_OFFSET(0x1B8110D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SET_S_ISBAKING_OFFSET UNITYSDK_OFFSET(0x1B81C4E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SET_S_LOGICDAYTIME_OFFSET UNITYSDK_OFFSET(0x1B811280)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_START_OFFSET UNITYSDK_OFFSET(0x1B81C710)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SWITCHCHARACTERGI_OFFSET UNITYSDK_OFFSET(0x1B814560)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SYNCETHEREFFECT_OFFSET UNITYSDK_OFFSET(0x1B804600)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SYNCGITYPE_OFFSET UNITYSDK_OFFSET(0x1B8044D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SYNCMAINLIGHTDIRECTIONTOWEATHER_OFFSET UNITYSDK_OFFSET(0x1B807900)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SYNCWITHBASE_OFFSET UNITYSDK_OFFSET(0x1B81A8B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_TRIGGERALLLIGHT_OFFSET UNITYSDK_OFFSET(0x1B80D670)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_TRIGGERWEATHERSOUNDACTION_OFFSET UNITYSDK_OFFSET(0x1B80FA10)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_TRIMNOUSEDREFLECTIONCUBEDATAV2_OFFSET UNITYSDK_OFFSET(0x1B8029F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_TRIMNOUSEDREFLECTIONCUBEDATA_OFFSET UNITYSDK_OFFSET(0x1B802610)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_TRYDELETENIGHTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B8150A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_TRYDESTROYLIGHTNINGFXINSTANCES_OFFSET UNITYSDK_OFFSET(0x1B80FAF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_TRYOVERRIDEWEATHERV2_OFFSET UNITYSDK_OFFSET(0x1B8195B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_TRYOVERRIDEWEATHER_OFFSET UNITYSDK_OFFSET(0x1B8191F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_TRYRELEASENIGHTTEXTURESIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x1B818B40)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_UNBIND_OFFSET UNITYSDK_OFFSET(0x1B813BD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_UNLOADASSET_OFFSET UNITYSDK_OFFSET(0x1B8027E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_UNREGISTERLIGHTTRIGGER_OFFSET UNITYSDK_OFFSET(0x1B80ADC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_UNREGISTERMOUNTPOINT_OFFSET UNITYSDK_OFFSET(0x1B80A5A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_UNREGISTERSOUNDACTIONLISTENER_OFFSET UNITYSDK_OFFSET(0x1B810580)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_UNREGISTERWINDZONE_OFFSET UNITYSDK_OFFSET(0x1B8106F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_UPDATEDAYANDNIGHTSCENEOBJECTPROXY_OFFSET UNITYSDK_OFFSET(0x1B810140)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_UPDATELIGHTNINGFX_OFFSET UNITYSDK_OFFSET(0x1B80EDC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_UPDATELIGHTTRIGGER_OFFSET UNITYSDK_OFFSET(0x1B80C2B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_UPDATELIGHTWEATHERDATA_OFFSET UNITYSDK_OFFSET(0x1B80AE90)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_UPDATELOCALWEATHERVOLUME_OFFSET UNITYSDK_OFFSET(0x1B8183A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_UPDATEWINDZONE_OFFSET UNITYSDK_OFFSET(0x1B80E4E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B814080)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_WEATHERTYPETOFOLDERNAME_OFFSET UNITYSDK_OFFSET(0x1B8023F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B81E410)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B81DF30)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE_TypeDefinitionIndex = 26496;

	class VisualEnvironmentE : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::VisualEnvironmentE*>*>** StaticGet_s_CachedVEList()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::VisualEnvironmentE*>*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x20C40);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>** StaticGet_s_CachedVEListIsDirtyMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x20C48);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_CachedWeatherHolderData>** StaticGet_s_CachedCameraWeatherHolderMaps()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_CachedWeatherHolderData>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x20C50);
		}
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::WindZone*>** StaticGet_s_WindZones()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::WindZone*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x20C58);
		}
		static ::UnityEngine::Rendering::Universal::VisualEnvironmentE** StaticGet_s_OverrideVEConfig()
		{
			return (::UnityEngine::Rendering::Universal::VisualEnvironmentE**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x20C60);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>*>** StaticGet_LightSparkTriggerList()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x20C68);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>** StaticGet_DynamicLightTriggerList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x20C70);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>*>** StaticGet_ZeroWeatherMountPoints()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x20C78);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>*>** StaticGet_LightTriggerList()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x20C80);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>*>** StaticGet_WeatherMountPointsWithDayAndNight()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x20C88);
		}
		static ::UnityEngine::Rendering::Universal::VisualEnvironmentE** StaticGet__SceneEnvVolume_k__BackingField()
		{
			return (::UnityEngine::Rendering::Universal::VisualEnvironmentE**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x20C90);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_TriggerAllLight()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x20C98);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>** StaticGet_DynamicWeatherMountPointsWithWeatherV2()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x20CA0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_SamplerUpdateLightTrigger()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x20CA8);
		}
		static ::UnityEngine::Rendering::Universal::VisualEnvironmentE** StaticGet_s_PreActiveInstance()
		{
			return (::UnityEngine::Rendering::Universal::VisualEnvironmentE**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x20CB0);
		}
		static ::WeatherConfig** StaticGet_weatherInstance()
		{
			return (::WeatherConfig**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x20CB8);
		}
		static ::System::Type** StaticGet_s_TypeLensFlareComponentSRP()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x20CC0);
		}
		static ::System::String** StaticGet_s_GlobalWeatherKeySetByLogic()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x20CC8);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData*>** StaticGet_overrideWeatherV2DataTuples()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigOverrideData*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x20CD0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>*>** StaticGet_WeatherMountPointsWithWeatherV2()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x20CD8);
		}
		static ::System::Action_1<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherSoundParams>** StaticGet_s_SoundActionListener()
		{
			return (::System::Action_1<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherSoundParams>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x20CE0);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>*>** StaticGet_WeatherMountPoints()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x20CE8);
		}
		static ::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*, ::System::Single, ::System::Int32>*>** StaticGet_overrideWeatherDataTuples()
		{
			return (::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*, ::System::Single, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x20CF0);
		}
		static ::System::Single* StaticGet_FogDensityScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x58A0);
		}
		static ::System::Int32* StaticGet__CenterPos()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x58A4);
		}
		static ::System::Int32* StaticGet__Forward()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x58A8);
		}
		static ::System::Boolean* StaticGet_IsBundleCached()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x58AC);
		}
		static ::System::Boolean* StaticGet__IsLensFlareOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x58AD);
		}
		static ::System::Single* StaticGet___s_LogicDayTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x58B0);
		}
		static ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType* StaticGet___s_LogicSceneWeatherType()
		{
			return (::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType*)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x58B4);
		}
		static ::System::Boolean* StaticGet_s_LocalIsBaking()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x58B8);
		}
		static ::System::Boolean* StaticGet_ForceNoStaticLighting()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x58B9);
		}
		static ::System::Boolean* StaticGet_s_PauseWeatherAnimation()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x58BA);
		}
		static ::System::Boolean* StaticGet_s_IsBakingReflectionProbes()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x58BB);
		}
		static ::System::Int32* StaticGet_MAX_LOOP_LIGHT_PER_FRAME()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x58BC);
		}
		static ::System::Single* StaticGet_kStaticLightingDelayFrameCount()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(VisualEnvironmentE_TypeDefinitionIndex)->GetStaticField(0x58C0);
		}
		// static const ::System::Int32 kDefaultDayTimeForReset = 0xFFFFFC19; // 0x0
		// static const ::System::Int32 MaxLightningFxCount = 0x8; // 0x0
		::System::Single cachedV2DayTime; // 0x18
		::UnityEngine::Rendering::Universal::UnityEnvironment* m_Environment; // 0x20
		::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType weatherType; // 0x28
		::System::Boolean applySkyLut; // 0x2C
		::System::Boolean localIsDynamicTime; // 0x2D
		::UnityEngine::Rendering::Universal::VisualEnvironmentE_TodType todType; // 0x30
		::System::Boolean todTypeActive; // 0x34
		::System::Boolean mPreviewEasyMode; // 0x35
		::UnityEngine::Vector3 groundPosition; // 0x38
		::UnityEngine::Rendering::Universal::Internal::NapLightMapData* lightMapData1; // 0x48
		::UnityEngine::Rendering::Universal::Internal::NapLightMapData* lightMapData2; // 0x50
		::UnityEngine::Rendering::Universal::Internal::NapLightMapData* lightMapData3; // 0x58
		::UnityEngine::Rendering::Universal::Internal::NapLightMapData* lightMapData4; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* waterMaterials; // 0x68
		::System::Single waterHeight; // 0x70
		::UnityEngine::Light* m_MainLight; // 0x78
		::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* m_MainLightData; // 0x80
		::UnityEngine::WindZone* m_WindZone; // 0x88
		::System::Single _dayTime; // 0x90
		::System::Single _todPreviewTime; // 0x94
		::System::Single s_LightOnTime; // 0x98
		::System::Single s_LightOffTime; // 0x9C
		::System::Boolean isEditorMode; // 0xA0
		::System::Boolean useStaticToD; // 0xA1
		::System::Boolean disableOverride; // 0xA2
		::System::Boolean compatibleV2LocalWeather; // 0xA3
		::System::Int32 m_DefaultDayTimeInSpecialWeather; // 0xA4
		::System::Boolean isBakingMode; // 0xA8
		::System::Boolean freeMainLightParams; // 0xA9
		::System::Boolean useWeatherControlledLightMap; // 0xAA
		::UnityEngine::NAPRenderPipeline0::ESupportedGIType supportedGIType; // 0xAC
		::System::Boolean enableRTXOnPC; // 0xB0
		::UnityEngine::NAPRenderPipeline0::EKodamaGIType kodamaGIType; // 0xB4
		::System::Boolean enableLocalSkyOnlyGIConfig; // 0xB8
		::UnityEngine::Color indoorSkyOnlyGIColorAndIntensity; // 0xBC
		::UnityEngine::Color outdoorSkyOnlyGIColorAndIntensity; // 0xCC
		::System::Boolean overrideGIQuality; // 0xDC
		::UnityEngine::Rendering::Universal::SimulatingPlatform platformForDisableKodama; // 0xE0
		::UnityEngine::NAPRenderPipeline0::ENapGIQuality giQuality; // 0xE4
		::System::Boolean useOB0101BlendLight; // 0xE8
		::UnityEngine::GameObject* lightingTriggerObject; // 0xF0
		::System::Single lightingTriggerBrightnessValue; // 0xF8
		::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherSystemVersionType WeatherSystemVersion; // 0xFC
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* weatherConfigV2; // 0x100
		::UnityEngine::Rendering::Universal::WeatherGroupScriptableObject* weatherGroupV2; // 0x108
		::WeatherConfig* currentWeatherV2ForEditor; // 0x110
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* currentWeatherSOV2ForEditor; // 0x118
		::WeatherConfig* weather1; // 0x120
		::WeatherConfig* weather2; // 0x128
		::WeatherConfig* weather3; // 0x130
		::WeatherConfig* weather4; // 0x138
		::WeatherConfig* weather5; // 0x140
		::WeatherConfig* weather6; // 0x148
		::WeatherConfig* weather7; // 0x150
		::WeatherConfig* weather8; // 0x158
		::WeatherConfig* weather9; // 0x160
		::WeatherConfig* weather10; // 0x168
		::WeatherConfig* weather11; // 0x170
		::WeatherConfig* weather12; // 0x178
		::WeatherConfig* weather13; // 0x180
		::WeatherConfig* weather14; // 0x188
		::System::Boolean hasTriggerSpecialCloudLayer; // 0x190
		::UnityEngine::GameObject* sceneMoveWithCharacterEtherEffectPrefab; // 0x198
		::UnityEngine::GameObject* sceneLocalEtherEffectPrefab; // 0x1A0
		::Il2CppArray<::UnityEngine::GameObject*>* dynamicEtherObjects; // 0x1A8
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* autoGeneratedLocalEtherEffect; // 0x1B0
		::UnityEngine::GameObject* moveWithCharacterEtherEffect; // 0x1B8
		::UnityEngine::Rendering::Universal::WeatherConfigParticle* particleConfigs; // 0x1C0
		::System::Boolean m_DisableDefaultDof; // 0x1C8
		::System::Boolean m_GlobalDecalBlendActive; // 0x1C9
		::System::Single m_GlobalDecalBlendValueForBaseColor; // 0x1CC
		::System::Single m_GlobalDecalBlendValueForMS; // 0x1D0
		::System::Single m_GlobalIceDecalBlendValueForBaseColor; // 0x1D4
		::System::Single m_GlobalIceDecalBlendValueForMS; // 0x1D8
		::System::Single m_SceneClipPlaneY; // 0x1DC
		::UnityEngine::Texture* moonMaskTex; // 0x1E0
		::System::Boolean showMoonEffectProperties; // 0x1E8
		::UnityEngine::Texture* moonGlowBaseTex; // 0x1F0
		::UnityEngine::Texture* moonGlow2Tex; // 0x1F8
		::UnityEngine::Texture* moonGlow2MaskTex; // 0x200
		::UnityEngine::Texture* moonGlow2MaskTex2; // 0x208
		::UnityEngine::Vector4 glowParams; // 0x210
		::UnityEngine::Vector4 moonRockParams; // 0x220
		::UnityEngine::Vector4 moonOffsetFor19_5; // 0x230
		::UnityEngine::Vector4 moonOffsetFor15; // 0x240
		::UnityEngine::GameObject* moonRockEffect; // 0x250
		::System::Boolean useHugeMoonRockEffect; // 0x258
		::UnityEngine::GameObject* hugeMoonRockEffect; // 0x260
		::UnityEngine::Material* replaceSkybox; // 0x268
		::UnityEngine::Mesh* customSkyboxMesh; // 0x270
		::UnityEngine::Material* hollowCoverMat; // 0x278
		::UnityEngine::Mesh* hollowCoverMesh; // 0x280
		::System::Single hollowCoverSize; // 0x288
		::UnityEngine::Material* sceneEtherCoverEffectMat; // 0x290
		::UnityEngine::Rendering::Universal::WeatherConfigWater* waterConfigs; // 0x298
		::UnityEngine::ReflectionProbe* waterReflectionCubeProxy; // 0x2A0
		::UnityEngine::Rendering::Universal::OceanFFTBakeData* OceanFFTBakeData; // 0x2A8
		::System::Single SeaPlanePosition; // 0x2B0
		::System::Single SeaPlaneDepthOffset; // 0x2B4
		::UnityEngine::Vector2 SeaPlaneCenter; // 0x2B8
		::UnityEngine::Texture* oceanMaskMap; // 0x2C0
		::System::Single oceanMaskHeightOffset; // 0x2C8
		::UnityEngine::Vector4 oceanMaskMapRect; // 0x2CC
		::UnityEngine::Rendering::Universal::WeatherConfigWind* windConfigs; // 0x2E0
		::UnityEngine::AnimationCurve* lightTriggerCurve; // 0x2E8
		::UnityEngine::AnimationCurve* remoteEmissionTriggerCurve; // 0x2F0
		::Il2CppArray<::UnityEngine::AnimationCurve*>* continueTriggerCurves; // 0x2F8
		::System::Single m_ContinueSparkLiftTime; // 0x300
		::System::Single lightTriggerMaxDelayTime; // 0x304
		::UnityEngine::Rendering::Universal::BGBuildingLightConfig* buildingLightConfig; // 0x308
		::UnityEngine::Animation* weatherControlAnimationA; // 0x310
		::System::Int32 weatherControlAnimationFrameCount; // 0x318
		::UnityEngine::Texture* m_SceneWaterPoolMap; // 0x320
		::UnityEngine::Vector4 m_SceneWaterPoolBoundBox; // 0x328
		::UnityEngine::Vector2 m_SceneWaterPoolMinMaxHeight; // 0x338
		::System::Boolean useCustomHeightMapRange; // 0x340
		::UnityEngine::Rendering::VolumeBounds* customBounds; // 0x348
		::System::Single expand; // 0x350
		::UnityEngine::Rendering::Universal::VisualEnvironmentE_ResolutionOption ResolutionCurrentOption; // 0x354
		::UnityEngine::Texture* heightMap; // 0x358
		::System::Single heightMapOffset; // 0x360
		::UnityEngine::Texture* heightMap2; // 0x368
		::UnityEngine::Vector4 sceneBoundBox; // 0x370
		::UnityEngine::Vector4 navMeshBoundBox; // 0x380
		::System::Boolean isOptimizedSceneBoundBoxValue; // 0x390
		::System::Boolean fixCharacterLowShadowIntensityColor; // 0x391
		::System::Boolean fixAllCharacterLowShadowIntensityColor; // 0x392
		::System::Boolean charStylization; // 0x393
		::System::Single styleStartRange; // 0x394
		::System::Single styleEndRange; // 0x398
		::System::Single reduceContrast; // 0x39C
		::System::Single outLineStyleFocus; // 0x3A0
		::System::Single outLineStyleRange; // 0x3A4
		::System::Single outLineWidthScale; // 0x3A8
		::System::Boolean shadowLine; // 0x3AC
		::System::Single shadowLineDensity; // 0x3B0
		::Il2CppArray<::WeatherConfig*>* tempWeatherList; // 0x3B8
		::Il2CppArray<::UnityEngine::ParticleSystem_Particle>* m_LightningFxParticles; // 0x3C0
		::WeatherConfig* left; // 0x3C8
		::WeatherConfig* right; // 0x3D0
		::System::Int32 ticks; // 0x3D8
		::UnityEngine::GameObject* moonRockInstance; // 0x3E0
		::System::Collections::Generic::HashSet_1<::UnityEngine::Renderer*>* moonRockRenderers; // 0x3E8
		::UnityEngine::Vector3 preCharacterPosition; // 0x3F0
		::System::Boolean isBindLightMapDataOver; // 0x3FC
		::System::Single m_KodamaGIRefreshOverTime; // 0x400
		::UnityEngine::NAPRenderPipeline0::ESupportedGIType preGIType; // 0x404
		::UnityEngine::Transform* moon_ROOT_Big; // 0x408
		::UnityEngine::Transform* moon_ROOT_Small; // 0x410
		::UnityEngine::Transform* moon_ROOT_UV; // 0x418
		::UnityEngine::Transform* moon_small_ROOT_Move; // 0x420
		::UnityEngine::Transform* moon_small_ROOT_UV; // 0x428
		::System::Single preFrameMoonSize; // 0x430
		::System::Single preCameraFarClipPlane; // 0x434
		::UnityEngine::Vector3 preMoonDir; // 0x438
		::System::Single m_PreDayTime; // 0x444
		::System::String* m_PreWeatherKey; // 0x448
		::System::Int32 m_LoopLightIndex; // 0x450
		::System::Int32 m_NeedProcessedLightCount; // 0x454
		::System::Single preFrameTimer; // 0x458
		::System::Boolean weatherTypeHasChanged; // 0x45C
		::System::Int32 preLoadedReflectionCubeArrayIndex; // 0x460
		::System::Single RemoveReflectionProbeTime; // 0x464
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* lightningFxInstanceList; // 0x468
		::System::Single lightningFxTimer; // 0x470
		::UnityEngine::ParticleSystem* lightningFxPrefab; // 0x478
		::System::Boolean serveAsLightTrigger; // 0x480
		::System::Boolean m_IsImportant; // 0x481
		::UnityEngine::Rendering::Universal::VisualEnvironmentEExtension* veExtension; // 0x488
		::System::String* currentV2WeatherKey; // 0x490
		::System::String* editorWeatherKey; // 0x498
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::WeatherConfig*>* indexToWeatherMap; // 0x4A0
		::System::Boolean isFirstTimeEnable; // 0x4A8
		::System::Int32 m_LastIsDynamicWeather; // 0x4AC
		::System::Int32 m_LastWeatherIndex0; // 0x4B0
		::System::Int32 m_LastWeatherIndex1; // 0x4B4
		::System::Int32 m_PreviousLayer; // 0x4B8
		::UnityEngine::GameObject* oldDataForDay; // 0x4C0
		::System::Single m_PreCheckOutTime; // 0x4C8
		::System::Boolean isFirstTimeBind; // 0x4CC
		::UnityEngine::Camera* weatherTriggerCamera; // 0x4D0
		::WeatherConfig* curFrameConfig; // 0x4D8
		::WeatherConfig* CurrentWeatherConfig; // 0x4E0
		::UnityEngine::KodamaRealtimeLight* m_MainLightRealtimeLight; // 0x4E8
		::System::Single m_Timer; // 0x4F0
		::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType currentWeatherType; // 0x4F4
		::System::String* lastWetherKey; // 0x4F8
		::UnityEngine::Rendering::Universal::VisualEnvironmentE_DayTimeFrameType m_CurrentDayTimeFrameType; // 0x500
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*, ::System::Boolean>* weatherMap; // 0x508
		::System::Boolean preDofState; // 0x510
		::UnityEngine::Rendering::Universal::VisualEnvironmentE_TimeOfDay preTodType; // 0x514
		::System::Single _CachedLightingIntensity; // 0x518
		::UnityEngine::Vector3 _CachedLightingPosition; // 0x51C
		::System::Boolean cachedLightningTriggerOn; // 0x528
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::WeatherSystem::LocalWeatherVolumeContext*>* m_LocalWeatherArray; // 0x530

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE__CCTOR_OFFSET))();
		}

		::System::Void PrepareV2KeyForV1(::System::Single mainCityDayTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_PREPAREV2KEYFORV1_OFFSET))(this, mainCityDayTime);
		}

		::System::Boolean get_isDynamicTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_ISDYNAMICTIME_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::ESupportedGIType GetSupportedGIType()
		{
			return ((::UnityEngine::NAPRenderPipeline0::ESupportedGIType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETSUPPORTEDGITYPE_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::NapCharacterGI* get_characterGI()
		{
			return ((::UnityEngine::Rendering::Universal::NapCharacterGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_CHARACTERGI_OFFSET))(this);
		}

		static ::System::Boolean get_IsLensFlareOn()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_ISLENSFLAREON_OFFSET))();
		}

		::System::Boolean get_useSingleLightMapFolder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_USESINGLELIGHTMAPFOLDER_OFFSET))(this);
		}

		::System::Boolean get_useSingleReflectionProbeFolder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_USESINGLEREFLECTIONPROBEFOLDER_OFFSET))(this);
		}

		static ::System::Void DumpWeatherData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_DUMPWEATHERDATA_OFFSET))();
		}

		static ::System::String* WeatherTypeToFolderName(::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType weatherType, ::System::Int32& index)
		{
			return ((::System::String*(*)(::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_WEATHERTYPETOFOLDERNAME_OFFSET))(weatherType, index);
		}

		::System::Single get_KodamaGIRefreshOverTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_KODAMAGIREFRESHOVERTIME_OFFSET))(this);
		}

		::System::Void set_KodamaGIRefreshOverTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SET_KODAMAGIREFRESHOVERTIME_OFFSET))(this, value);
		}

		::System::Void RefreshKodamaGIFlag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_REFRESHKODAMAGIFLAG_OFFSET))(this);
		}

		::System::Boolean get_IsBindLightMapDataOver()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_ISBINDLIGHTMAPDATAOVER_OFFSET))(this);
		}

		::System::Void set_IsBindLightMapDataOver(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SET_ISBINDLIGHTMAPDATAOVER_OFFSET))(this, value);
		}

		::System::Void TrimNoUsedReflectionCubeData(::UnityEngine::Rendering::Universal::Internal::NapLightMapData* lightmapData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::NapLightMapData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_TRIMNOUSEDREFLECTIONCUBEDATA_OFFSET))(this, lightmapData);
		}

		::System::Void UnloadAsset(::UnityEngine::Texture* tex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_UNLOADASSET_OFFSET))(this, tex);
		}

		::System::Void TrimNoUsedReflectionCubeDataV2(::UnityEngine::Rendering::Universal::Internal::NapReflectionProbeDataV2* reflectionData, ::System::Boolean justReleaseBakedReflectionCube, ::UnityEngine::CubemapArray* cubemapArray)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::NapReflectionProbeDataV2*, ::System::Boolean, ::UnityEngine::CubemapArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_TRIMNOUSEDREFLECTIONCUBEDATAV2_OFFSET))(this, reflectionData, justReleaseBakedReflectionCube, cubemapArray);
		}

		::System::Void RemoveNoUsedReflectionCubeAsset(::UnityEngine::Rendering::Universal::Internal::NapLightMapData* usedLightMapData, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::NapLightMapData*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_REMOVENOUSEDREFLECTIONCUBEASSET_OFFSET))(this, usedLightMapData, index);
		}

		::System::Void CopySourceSceneEffectValueToOther(::WeatherConfig* weatherConfig)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_COPYSOURCESCENEEFFECTVALUETOOTHER_OFFSET))(this, weatherConfig);
		}

		::UnityEngine::Rendering::Universal::Internal::NapLightMapData* GetLightMapData(::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType weatherType)
		{
			return ((::UnityEngine::Rendering::Universal::Internal::NapLightMapData*(*)(::PVOID, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETLIGHTMAPDATA_OFFSET))(this, weatherType);
		}

		::System::Void BindKodamaData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_BINDKODAMADATA_OFFSET))(this);
		}

		::System::Void SetLightMapData(::UnityEngine::Rendering::Universal::Internal::NapLightMapData* targetLightMapData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::NapLightMapData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETLIGHTMAPDATA_OFFSET))(this, targetLightMapData);
		}

		::System::Void SetLightProbeData(::UnityEngine::Rendering::Universal::Internal::NapLightMapData* targetLightMapData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::NapLightMapData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETLIGHTPROBEDATA_OFFSET))(this, targetLightMapData);
		}

		::System::Void SyncGIType(::System::Int32 mGIQuality, ::WeatherConfig*& weatherConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::WeatherConfig*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SYNCGITYPE_OFFSET))(this, mGIQuality, weatherConfig);
		}

		::System::Void SyncEtherEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SYNCETHEREFFECT_OFFSET))(this);
		}

		::System::Void SetGameObjectLayer(::UnityEngine::GameObject* go, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETGAMEOBJECTLAYER_OFFSET))(this, go, layer);
		}

		::System::Void CreateAndSyncMonoRockEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_CREATEANDSYNCMONOROCKEFFECT_OFFSET))(this);
		}

		::System::Void AddToRenderList(::UnityEngine::Transform* targetRoot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_ADDTORENDERLIST_OFFSET))(this, targetRoot);
		}

		::System::Void SetMoonBigScaleOffset(::UnityEngine::Transform* child, ::WeatherConfig* config, ::System::Boolean noOffset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::WeatherConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETMOONBIGSCALEOFFSET_OFFSET))(this, child, config, noOffset);
		}

		::System::Void ClearMonoRockEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_CLEARMONOROCKEFFECT_OFFSET))(this);
		}

		::System::Boolean get_needDynamicKodamaGI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_NEEDDYNAMICKODAMAGI_OFFSET))(this);
		}

		::System::Boolean GetKodamaIsStaticLighting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETKODAMAISSTATICLIGHTING_OFFSET))(this);
		}

		static ::System::String* GetKodamaAssetPathWithVersion(::UnityEngine::SceneManagement::Scene scene, ::System::Boolean& withVersion, ::System::String*& rawPath)
		{
			return ((::System::String*(*)(::UnityEngine::SceneManagement::Scene, ::System::Boolean&, ::System::String*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETKODAMAASSETPATHWITHVERSION_OFFSET))(scene, withVersion, rawPath);
		}

		::System::Void SetBakedGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETBAKEDGI_OFFSET))(this);
		}

		::System::Void SyncMainLightDirectionToWeather(::UnityEngine::Vector3 mainPageLightRotOffset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SYNCMAINLIGHTDIRECTIONTOWEATHER_OFFSET))(this, mainPageLightRotOffset);
		}

		static ::UnityEngine::Rendering::Universal::VisualEnvironmentE* GetCurrentWeatherHolder(::UnityEngine::Camera* triggerCamera)
		{
			return ((::UnityEngine::Rendering::Universal::VisualEnvironmentE*(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETCURRENTWEATHERHOLDER_OFFSET))(triggerCamera);
		}

		static ::System::Boolean CheckCurrentWeatherIsRaining(::UnityEngine::Camera* triggerCamera)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_CHECKCURRENTWEATHERISRAINING_OFFSET))(triggerCamera);
		}

		static ::System::Void RegisterMountPoint(::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy* go, ::System::Int32 rawMatrix, ::System::Collections::Generic::List_1<::System::String*>* keyList)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*, ::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_REGISTERMOUNTPOINT_OFFSET))(go, rawMatrix, keyList);
		}

		static ::System::Void AddToMountPoints(::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType localWeatherType, ::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy* go, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>*>* targetMountPoints)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType, ::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_ADDTOMOUNTPOINTS_OFFSET))(localWeatherType, go, targetMountPoints);
		}

		static ::System::Void AddToMountPoints_1(::System::Int32 localWeatherType, ::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy* go)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_ADDTOMOUNTPOINTS_1_OFFSET))(localWeatherType, go);
		}

		static ::System::Void AddToMountPoints_2(::System::String* weatherKey, ::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy* go, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>*>* targetMountPoints)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_ADDTOMOUNTPOINTS_2_OFFSET))(weatherKey, go, targetMountPoints);
		}

		static ::System::Void RemoveFromMountPoint(::System::Int32 localWeatherType, ::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy* go)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_REMOVEFROMMOUNTPOINT_OFFSET))(localWeatherType, go);
		}

		static ::System::Void RemoveFromMountPoint_1(::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType localWeatherType, ::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy* go, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>*>* targetMountPoints)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType, ::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_REMOVEFROMMOUNTPOINT_1_OFFSET))(localWeatherType, go, targetMountPoints);
		}

		static ::System::Void RemoveFromMountPoint_2(::System::String* key, ::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy* go, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>*>* targetMountPoints)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_REMOVEFROMMOUNTPOINT_2_OFFSET))(key, go, targetMountPoints);
		}

		static ::System::Void UnRegisterMountPoint(::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy* go, ::System::Int32 rawMatrix, ::System::Collections::Generic::List_1<::System::String*>* keyAndShowList)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*, ::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_UNREGISTERMOUNTPOINT_OFFSET))(go, rawMatrix, keyAndShowList);
		}

		static ::System::Void RegisterLightTrigger(::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy* lightTrigger, ::System::Int32 layerMask)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_REGISTERLIGHTTRIGGER_OFFSET))(lightTrigger, layerMask);
		}

		static ::System::Void RemoveFromLightList(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>*>* targetList, ::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy* lightTrigger, ::System::Int32 layerMask)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*>*>*, ::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_REMOVEFROMLIGHTLIST_OFFSET))(targetList, lightTrigger, layerMask);
		}

		static ::System::Void UnRegisterLightTrigger(::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy* lightTrigger, ::System::Int32 layerMask)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::SceneObjectProxy*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_UNREGISTERLIGHTTRIGGER_OFFSET))(lightTrigger, layerMask);
		}

		static ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType IndexToZeroWeatherType(::System::Int32 index)
		{
			return ((::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_INDEXTOZEROWEATHERTYPE_OFFSET))(index);
		}

		::System::Void UpdateLightWeatherData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_UPDATELIGHTWEATHERDATA_OFFSET))(this);
		}

		::System::Void UpdateLightTrigger(::System::Int32 cullingMask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_UPDATELIGHTTRIGGER_OFFSET))(this, cullingMask);
		}

		::System::Void UpdateWindZone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_UPDATEWINDZONE_OFFSET))(this);
		}

		::System::Int32 GetCurrentCubeMapArrayIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETCURRENTCUBEMAPARRAYINDEX_OFFSET))(this);
		}

		::System::Int32 GetCubeMapArrayIndex(::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType weatherType)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETCUBEMAPARRAYINDEX_OFFSET))(this, weatherType);
		}

		::System::Void RefreshReflectionProbeData(::System::Boolean forceUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_REFRESHREFLECTIONPROBEDATA_OFFSET))(this, forceUpdate);
		}

		::System::Void UpdateLightningFx(::UnityEngine::Transform* cameraTrans)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_UPDATELIGHTNINGFX_OFFSET))(this, cameraTrans);
		}

		::System::Void TryDestroyLightningFxInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_TRYDESTROYLIGHTNINGFXINSTANCES_OFFSET))(this);
		}

		::System::Single GetLightTriggerDayTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETLIGHTTRIGGERDAYTIME_OFFSET))(this);
		}

		::System::Void TriggerAllLight(::System::Int32 cullingMask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_TRIGGERALLLIGHT_OFFSET))(this, cullingMask);
		}

		static ::System::Void RegisterSoundActionListener(::System::Action_1<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherSoundParams>* listener)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherSoundParams>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_REGISTERSOUNDACTIONLISTENER_OFFSET))(listener);
		}

		static ::System::Void UnRegisterSoundActionListener(::System::Action_1<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherSoundParams>* listener)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherSoundParams>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_UNREGISTERSOUNDACTIONLISTENER_OFFSET))(listener);
		}

		static ::System::Void CleanupSoundActionListeners()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_CLEANUPSOUNDACTIONLISTENERS_OFFSET))();
		}

		static ::System::Void TriggerWeatherSoundAction(::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherSoundParams soundParams)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherSoundParams))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_TRIGGERWEATHERSOUNDACTION_OFFSET))(soundParams);
		}

		static ::System::Void RegisterWindZone(::UnityEngine::WindZone* windZone)
		{
			return ((::System::Void(*)(::UnityEngine::WindZone*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_REGISTERWINDZONE_OFFSET))(windZone);
		}

		static ::System::Void UnRegisterWindZone(::UnityEngine::WindZone* windZone)
		{
			return ((::System::Void(*)(::UnityEngine::WindZone*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_UNREGISTERWINDZONE_OFFSET))(windZone);
		}

		static ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherSystemVersionType get_CurrentSceneWeatherSystemVersion()
		{
			return ((::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherSystemVersionType(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_CURRENTSCENEWEATHERSYSTEMVERSION_OFFSET))();
		}

		static ::UnityEngine::Rendering::Universal::VisualEnvironmentE* get_SceneEnvVolume()
		{
			return ((::UnityEngine::Rendering::Universal::VisualEnvironmentE*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_SCENEENVVOLUME_OFFSET))();
		}

		static ::System::Void set_SceneEnvVolume(::UnityEngine::Rendering::Universal::VisualEnvironmentE* value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::VisualEnvironmentE*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SET_SCENEENVVOLUME_OFFSET))(value);
		}

		static ::System::Void SetFogDensityScale(::System::Single scale)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETFOGDENSITYSCALE_OFFSET))(scale);
		}

		static ::UnityEngine::Rendering::Universal::VisualEnvironmentE* get_instance()
		{
			return ((::UnityEngine::Rendering::Universal::VisualEnvironmentE*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_instance(::UnityEngine::Rendering::Universal::VisualEnvironmentE* value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::VisualEnvironmentE*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SET_INSTANCE_OFFSET))(value);
		}

		static ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType get_s_CurrentSceneWeatherType()
		{
			return ((::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_S_CURRENTSCENEWEATHERTYPE_OFFSET))();
		}

		static ::System::Void set_s_CurrentSceneWeatherType(::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SET_S_CURRENTSCENEWEATHERTYPE_OFFSET))(value);
		}

		::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType get_m_WeatherType()
		{
			return ((::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_M_WEATHERTYPE_OFFSET))(this);
		}

		::System::Void set_m_WeatherType(::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SET_M_WEATHERTYPE_OFFSET))(this, value);
		}

		static ::System::Single get_s_LogicDayTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_S_LOGICDAYTIME_OFFSET))();
		}

		static ::System::Void set_s_LogicDayTime(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SET_S_LOGICDAYTIME_OFFSET))(value);
		}

		::System::Single get_dayTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_DAYTIME_OFFSET))(this);
		}

		static ::System::String* get_CurrentGlobalWeatherKeySetByLogic()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_CURRENTGLOBALWEATHERKEYSETBYLOGIC_OFFSET))();
		}

		static ::System::Void set_CurrentGlobalWeatherKeySetByLogic(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SET_CURRENTGLOBALWEATHERKEYSETBYLOGIC_OFFSET))(value);
		}

		static ::System::Void SetCurrentWeatherByKeyV2(::System::String* key)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETCURRENTWEATHERBYKEYV2_OFFSET))(key);
		}

		::System::String* get_sceneSerializedDefaultWeatherKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_SCENESERIALIZEDDEFAULTWEATHERKEY_OFFSET))(this);
		}

		::System::Void set_sceneSerializedDefaultWeatherKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SET_SCENESERIALIZEDDEFAULTWEATHERKEY_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_AWAKE_OFFSET))(this);
		}

		::System::Void BindTempWeatherList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_BINDTEMPWEATHERLIST_OFFSET))(this);
		}

		::System::Void SetExtensionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETEXTENSIONDATA_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_ONVALIDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_UPDATE_OFFSET))(this);
		}

		::System::Void SwitchCharacterGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SWITCHCHARACTERGI_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_ONDESTROY_OFFSET))(this);
		}

		::System::Void Bind(::System::Int32 layerMask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_BIND_OFFSET))(this, layerMask);
		}

		::System::Void Unbind(::System::Int32 oldLayerMask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_UNBIND_OFFSET))(this, oldLayerMask);
		}

		::System::Void CheckOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_CHECKOUT_OFFSET))(this);
		}

		static ::UnityEngine::Texture* GetAssetIfLoaded(::UnityEngine::LazyLoadReference_1<::UnityEngine::Texture*> tex)
		{
			return ((::UnityEngine::Texture*(*)(::UnityEngine::LazyLoadReference_1<::UnityEngine::Texture*>))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETASSETIFLOADED_OFFSET))(tex);
		}

		::System::Void TryDeleteNightTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_TRYDELETENIGHTTEXTURE_OFFSET))(this);
		}

		::System::Void CheckIn(::UnityEngine::Camera* targetCamera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_CHECKIN_OFFSET))(this, targetCamera);
		}

		static ::System::Boolean BindInstance(::UnityEngine::Rendering::Universal::VisualEnvironmentE* targetItem, ::UnityEngine::Camera* targetCamera)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::Universal::VisualEnvironmentE*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_BINDINSTANCE_OFFSET))(targetItem, targetCamera);
		}

		::System::Void ClearLocalCacheFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_CLEARLOCALCACHEFRAME_OFFSET))(this);
		}

		static ::System::Void ClearCacheFrame()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_CLEARCACHEFRAME_OFFSET))();
		}

		static ::System::Void SetCurrentCameraVolumeLayer(::System::Int32 volumeLayer, ::System::Int32 cullingMask, ::UnityEngine::Camera* currentCamera)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETCURRENTCAMERAVOLUMELAYER_OFFSET))(volumeLayer, cullingMask, currentCamera);
		}

		static ::System::Void SetAllLensFlareOn()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETALLLENSFLAREON_OFFSET))();
		}

		static ::System::Void SetAllLensFlareOff()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETALLLENSFLAREOFF_OFFSET))();
		}

		::System::Void SetCurrentWeather(::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType weather)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETCURRENTWEATHER_OFFSET))(this, weather);
		}

		::System::Void SetLeftRight(::WeatherConfig* leftW, ::WeatherConfig* rightW)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*, ::WeatherConfig*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETLEFTRIGHT_OFFSET))(this, leftW, rightW);
		}

		::System::Void GetLeftRight(::WeatherConfig*& leftW, ::WeatherConfig*& rightW)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*&, ::WeatherConfig*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETLEFTRIGHT_OFFSET))(this, leftW, rightW);
		}

		static ::System::Void SetHollowZeroOverrideVEConfig(::UnityEngine::Rendering::Universal::VisualEnvironmentE* overrideVeConfig)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::VisualEnvironmentE*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETHOLLOWZEROOVERRIDEVECONFIG_OFFSET))(overrideVeConfig);
		}

		static ::System::Void ClearOverrideVEConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_CLEAROVERRIDEVECONFIG_OFFSET))();
		}

		static ::WeatherConfig* GetCurrentWeatherConfigInRenderPipeline(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::WeatherConfig*(*)(::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETCURRENTWEATHERCONFIGINRENDERPIPELINE_OFFSET))(cameraData);
		}

		::Il2CppArray<::WeatherConfig*>* GetAllWeatherConfigs()
		{
			return ((::Il2CppArray<::WeatherConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETALLWEATHERCONFIGS_OFFSET))(this);
		}

		static ::System::Boolean CheckTodInScope(::System::Single timeOfDay, ::System::Int32 pre, ::System::Int32 next)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_CHECKTODINSCOPE_OFFSET))(timeOfDay, pre, next);
		}

		static ::UnityEngine::Rendering::Universal::VisualEnvironmentE_TimeOfDay GetTimeOfDayFromTimeValue(::System::Single timeOfDay, ::System::Single& current, ::System::Single& next)
		{
			return ((::UnityEngine::Rendering::Universal::VisualEnvironmentE_TimeOfDay(*)(::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETTIMEOFDAYFROMTIMEVALUE_OFFSET))(timeOfDay, current, next);
		}

		::System::Void TryReleaseNightTexturesIfNecessary(::System::Boolean isDynamicTime, ::System::Int32 weather0, ::System::Int32 weather1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_TRYRELEASENIGHTTEXTURESIFNECESSARY_OFFSET))(this, isDynamicTime, weather0, weather1);
		}

		static ::System::Void SetOverrideWeatherConfig(::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject* config, ::System::Single weight, ::System::Int32 priority)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETOVERRIDEWEATHERCONFIG_OFFSET))(config, weight, priority);
		}

		static ::System::Void ClearOverrideWeatherData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_CLEAROVERRIDEWEATHERDATA_OFFSET))();
		}

		::System::Void TryOverrideWeather(::WeatherConfig*& result)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_TRYOVERRIDEWEATHER_OFFSET))(this, result);
		}

		::System::Void UpdateLocalWeatherVolume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_UPDATELOCALWEATHERVOLUME_OFFSET))(this);
		}

		::System::Void ClearLocalWeatherVolume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_CLEARLOCALWEATHERVOLUME_OFFSET))(this);
		}

		::WeatherConfig* GetCurrentWeatherConfigEditorOnly(::System::Int32 index, ::System::Boolean isFromEditorInspector)
		{
			return ((::WeatherConfig*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETCURRENTWEATHERCONFIGEDITORONLY_OFFSET))(this, index, isFromEditorInspector);
		}

		::WeatherConfig* GetCurrentWeatherConfig(::System::Int32 index, ::System::Boolean isFromEditorInspector)
		{
			return ((::WeatherConfig*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETCURRENTWEATHERCONFIG_OFFSET))(this, index, isFromEditorInspector);
		}

		::System::Void ClearWeatherResource(::System::Boolean noCloud, ::System::Boolean noRain, ::System::Boolean noNight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_CLEARWEATHERRESOURCE_OFFSET))(this, noCloud, noRain, noNight);
		}

		::WeatherConfig* GetWeatherWithIndex(::System::Int32 weatherIndex)
		{
			return ((::WeatherConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETWEATHERWITHINDEX_OFFSET))(this, weatherIndex);
		}

		::System::Void SyncWithBase(::WeatherConfig* result, ::WeatherConfig* weather1)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*, ::WeatherConfig*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SYNCWITHBASE_OFFSET))(this, result, weather1);
		}

		::System::Void BindCommonConfigBeforeLerp(::WeatherConfig* result)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_BINDCOMMONCONFIGBEFORELERP_OFFSET))(this, result);
		}

		::System::Void BindCommonConfig(::WeatherConfig* result, ::System::Int32 leftIndex, ::System::Int32 rightIndex)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_BINDCOMMONCONFIG_OFFSET))(this, result, leftIndex, rightIndex);
		}

		static ::System::Boolean get_s_IsBaking()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GET_S_ISBAKING_OFFSET))();
		}

		static ::System::Void set_s_IsBaking(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SET_S_ISBAKING_OFFSET))(value);
		}

		::System::Void AutoBindSceneObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_AUTOBINDSCENEOBJECT_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_START_OFFSET))(this);
		}

		::System::Void SetEtherEffectSpeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETETHEREFFECTSPEED_OFFSET))(this);
		}

		::System::Void UpdateDayAndNightSceneObjectProxy(::System::Single envLightTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_UPDATEDAYANDNIGHTSCENEOBJECTPROXY_OFFSET))(this, envLightTime);
		}

		::System::Void OnWeatherChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_ONWEATHERCHANGE_OFFSET))(this);
		}

		::System::Void EvaluateAnimate(::System::Single time, ::WeatherConfig* weatherConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::WeatherConfig*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_EVALUATEANIMATE_OFFSET))(this, time, weatherConfig);
		}

		::System::Void EvaluateSunAnimate(::System::Single time, ::WeatherConfig* weatherConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::WeatherConfig*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_EVALUATESUNANIMATE_OFFSET))(this, time, weatherConfig);
		}

		::System::Int32 GetWeatherTypeIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETWEATHERTYPEINDEX_OFFSET))(this);
		}

		::System::Boolean IsDynamicTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_ISDYNAMICTIME_OFFSET))(this);
		}

		::System::Void GetLeftRightWeatherConfig(::UnityEngine::NAPRenderPipeline0::IWeatherConfig*& leftConfig, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig*& rightConfig)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig*&, ::UnityEngine::NAPRenderPipeline0::IWeatherConfig*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETLEFTRIGHTWEATHERCONFIG_OFFSET))(this, leftConfig, rightConfig);
		}

		::System::Boolean GetFixCharacterLowShadowIntensityColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETFIXCHARACTERLOWSHADOWINTENSITYCOLOR_OFFSET))(this);
		}

		::System::Boolean GetFixAllCharacterLowShadowIntensityColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_GETFIXALLCHARACTERLOWSHADOWINTENSITYCOLOR_OFFSET))(this);
		}

		::System::Void ReplaceSkinRampColorsWithOtherRamp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_REPLACESKINRAMPCOLORSWITHOTHERRAMP_OFFSET))(this);
		}

		::System::Void SetSkinRampDefaultValues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETSKINRAMPDEFAULTVALUES_OFFSET))(this);
		}

		::System::Void SetCharStylization()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETCHARSTYLIZATION_OFFSET))(this);
		}

		::System::Void DisableStylization()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_DISABLESTYLIZATION_OFFSET))(this);
		}

		static ::System::Void SetLocalVolumeState(::System::Boolean enableLocalVolume)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETLOCALVOLUMESTATE_OFFSET))(enableLocalVolume);
		}

		static ::System::Void SetOverrideWeatherConfigV2(::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* config, ::System::Single weight, ::System::Int32 priority, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigDataType type)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject*, ::System::Single, ::System::Int32, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherConfigDataType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_SETOVERRIDEWEATHERCONFIGV2_OFFSET))(config, weight, priority, type);
		}

		::System::Boolean TryOverrideWeatherV2(::WeatherConfig*& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::WeatherConfig*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISUALENVIRONMENTE_TRYOVERRIDEWEATHERV2_OFFSET))(this, result);
		}
	};
}
