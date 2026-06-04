#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/CRPRectShadowSerialize.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LightBakingOutput.h"
#include "unitysdk/UnityEngine/LightRenderMode.h"
#include "unitysdk/UnityEngine/LightShadowCasterMode.h"
#include "unitysdk/UnityEngine/LightShadows.h"
#include "unitysdk/UnityEngine/LightShape.h"
#include "unitysdk/UnityEngine/LightType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rendering/CRPLightDebugInfo.h"
#include "unitysdk/UnityEngine/Rendering/CRPLightInfo.h"
#include "unitysdk/UnityEngine/Rendering/CRPLightInfoArea.h"
#include "unitysdk/UnityEngine/Rendering/CRPLightInfoCommon.h"
#include "unitysdk/UnityEngine/Rendering/CRPLightInfoFade.h"
#include "unitysdk/UnityEngine/Rendering/CRPLightInfoLocal.h"
#include "unitysdk/UnityEngine/Rendering/CRPLightInfoSpot.h"
#include "unitysdk/UnityEngine/Rendering/CRPLightMeshStencil.h"
#include "unitysdk/UnityEngine/Rendering/ComputeQueueType.h"
#include "unitysdk/UnityEngine/Rendering/LightEvent.h"
#include "unitysdk/UnityEngine/Rendering/LightShadowResolution.h"
#include "unitysdk/UnityEngine/Rendering/ShadowMapPass.h"
#include "unitysdk/UnityEngine/RuntimeAreaLightShapeType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Flare; }
namespace UnityEngine { class Light_OnParticleLightEvent; }
namespace UnityEngine { class TextAsset; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_LIGHT_ADDCOMMANDBUFFERASYNC_1_OFFSET UNITYSDK_OFFSET(0x1B29DA30)
#define UNITYENGINE_LIGHT_ADDCOMMANDBUFFERASYNC_OFFSET UNITYSDK_OFFSET(0x1B29DA10)
#define UNITYENGINE_LIGHT_ADDCOMMANDBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1B29DA00)
#define UNITYENGINE_LIGHT_ADDCOMMANDBUFFER_OFFSET UNITYSDK_OFFSET(0x1B29D9F0)
#define UNITYENGINE_LIGHT_DOPARTICLELIGHTEVENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B29DC70)
#define UNITYENGINE_LIGHT_GETCOMMANDBUFFERS_OFFSET UNITYSDK_OFFSET(0x1B29DA70)
#define UNITYENGINE_LIGHT_GETLIGHTS_OFFSET UNITYSDK_OFFSET(0x1B29DAB0)
#define UNITYENGINE_LIGHT_GETLINEDIRECTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B29D9A0)
#define UNITYENGINE_LIGHT_GETLINEDIRECTION_OFFSET UNITYSDK_OFFSET(0x1B29D950)
#define UNITYENGINE_LIGHT_GETLINEPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B29D920)
#define UNITYENGINE_LIGHT_GETLINEPOINT_OFFSET UNITYSDK_OFFSET(0x1B29D8D0)
#define UNITYENGINE_LIGHT_GETNUMLINEPOINTS_OFFSET UNITYSDK_OFFSET(0x1B29D8C0)
#define UNITYENGINE_LIGHT_GETVISRATIO_OFFSET UNITYSDK_OFFSET(0x1B29D9D0)
#define UNITYENGINE_LIGHT_GET_AREAATTENFACTOR_OFFSET UNITYSDK_OFFSET(0x1B29D860)
#define UNITYENGINE_LIGHT_GET_AREALIGHTTEX_OFFSET UNITYSDK_OFFSET(0x1B29D820)
#define UNITYENGINE_LIGHT_GET_AREASIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B29D7C0)
#define UNITYENGINE_LIGHT_GET_AREASIZE_OFFSET UNITYSDK_OFFSET(0x1B29D790)
#define UNITYENGINE_LIGHT_GET_ATTENUATE_OFFSET UNITYSDK_OFFSET(0x1B29DB00)
#define UNITYENGINE_LIGHT_GET_BAKEDDESIREDSHADOWMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B29D710)
#define UNITYENGINE_LIGHT_GET_BAKEDHYBIRDDYNAMICSHADOW_OFFSET UNITYSDK_OFFSET(0x1B29D6D0)
#define UNITYENGINE_LIGHT_GET_BAKEDINDEX_OFFSET UNITYSDK_OFFSET(0x1B29D770)
#define UNITYENGINE_LIGHT_GET_BAKEDSHADOWMAPENABLED_OFFSET UNITYSDK_OFFSET(0x1B29D690)
#define UNITYENGINE_LIGHT_GET_BAKEDSHADOWMAPHIGHQUALITY_OFFSET UNITYSDK_OFFSET(0x1B29D6B0)
#define UNITYENGINE_LIGHT_GET_BAKEDSHADOWMAPRESOLUTIONBIAS_OFFSET UNITYSDK_OFFSET(0x1B29D730)
#define UNITYENGINE_LIGHT_GET_BAKEDSHADOWMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B29D6F0)
#define UNITYENGINE_LIGHT_GET_BAKEDSHADOWMAP_OFFSET UNITYSDK_OFFSET(0x1B29D670)
#define UNITYENGINE_LIGHT_GET_BAKINGOUTPUT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B29D4B0)
#define UNITYENGINE_LIGHT_GET_BAKINGOUTPUT_OFFSET UNITYSDK_OFFSET(0x1B29D460)
#define UNITYENGINE_LIGHT_GET_BOUNCEINTENSITY_OFFSET UNITYSDK_OFFSET(0x1B29D240)
#define UNITYENGINE_LIGHT_GET_BOUNDINGSPHEREOVERRIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B29D2C0)
#define UNITYENGINE_LIGHT_GET_BOUNDINGSPHEREOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1B29D280)
#define UNITYENGINE_LIGHT_GET_COLORTEMPERATURE_OFFSET UNITYSDK_OFFSET(0x1B29D1E0)
#define UNITYENGINE_LIGHT_GET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B29D1B0)
#define UNITYENGINE_LIGHT_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x1B29D170)
#define UNITYENGINE_LIGHT_GET_COMMANDBUFFERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B29DA80)
#define UNITYENGINE_LIGHT_GET_COOKIESIZE_OFFSET UNITYSDK_OFFSET(0x1B29D610)
#define UNITYENGINE_LIGHT_GET_COOKIE_OFFSET UNITYSDK_OFFSET(0x1B29D630)
#define UNITYENGINE_LIGHT_GET_CULLINGMASK_OFFSET UNITYSDK_OFFSET(0x1B29D4E0)
#define UNITYENGINE_LIGHT_GET_CURRENTSHADOWMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B29D700)
#define UNITYENGINE_LIGHT_GET_ENABLEAREALIGHTFALLOFF_OFFSET UNITYSDK_OFFSET(0x1B29D840)
#define UNITYENGINE_LIGHT_GET_FLARE_OFFSET UNITYSDK_OFFSET(0x1B29D440)
#define UNITYENGINE_LIGHT_GET_INNERSPOTANGLE_OFFSET UNITYSDK_OFFSET(0x1B29D150)
#define UNITYENGINE_LIGHT_GET_INTENSITY_OFFSET UNITYSDK_OFFSET(0x1B29D220)
#define UNITYENGINE_LIGHT_GET_LAYERSHADOWCULLDISTANCES_OFFSET UNITYSDK_OFFSET(0x1B29D5F0)
#define UNITYENGINE_LIGHT_GET_LIGHTSHADOWCASTERMODE_OFFSET UNITYSDK_OFFSET(0x1B29D520)
#define UNITYENGINE_LIGHT_GET_LINERADIUS_OFFSET UNITYSDK_OFFSET(0x1B29D880)
#define UNITYENGINE_LIGHT_GET_NUMLINEPOINTS_OFFSET UNITYSDK_OFFSET(0x1B29D8A0)
#define UNITYENGINE_LIGHT_GET_PIXELLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x1B29DA90)
#define UNITYENGINE_LIGHT_GET_RANGE_OFFSET UNITYSDK_OFFSET(0x1B29D420)
#define UNITYENGINE_LIGHT_GET_RENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1B29D500)
#define UNITYENGINE_LIGHT_GET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x1B29D750)
#define UNITYENGINE_LIGHT_GET_RUNTIMEAREALIGHTSHAPE_OFFSET UNITYSDK_OFFSET(0x1B29D800)
#define UNITYENGINE_LIGHT_GET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x1B29D310)
#define UNITYENGINE_LIGHT_GET_SHADOWCONSTANTBIAS_OFFSET UNITYSDK_OFFSET(0x1B29DAC0)
#define UNITYENGINE_LIGHT_GET_SHADOWCUSTOMRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B29D2F0)
#define UNITYENGINE_LIGHT_GET_SHADOWMATRIXOVERRIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B29D3F0)
#define UNITYENGINE_LIGHT_GET_SHADOWMATRIXOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1B29D390)
#define UNITYENGINE_LIGHT_GET_SHADOWNEARPLANE_OFFSET UNITYSDK_OFFSET(0x1B29D350)
#define UNITYENGINE_LIGHT_GET_SHADOWNORMALBIAS_OFFSET UNITYSDK_OFFSET(0x1B29D330)
#define UNITYENGINE_LIGHT_GET_SHADOWOBJECTSIZEBIAS_OFFSET UNITYSDK_OFFSET(0x1B29DAE0)
#define UNITYENGINE_LIGHT_GET_SHADOWRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B29D590)
#define UNITYENGINE_LIGHT_GET_SHADOWSOFTNESSFADE_OFFSET UNITYSDK_OFFSET(0x1B29D5D0)
#define UNITYENGINE_LIGHT_GET_SHADOWSOFTNESS_OFFSET UNITYSDK_OFFSET(0x1B29D5B0)
#define UNITYENGINE_LIGHT_GET_SHADOWSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1B29D570)
#define UNITYENGINE_LIGHT_GET_SHADOWS_OFFSET UNITYSDK_OFFSET(0x1B29D550)
#define UNITYENGINE_LIGHT_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1B29D110)
#define UNITYENGINE_LIGHT_GET_SPOTANGLE_OFFSET UNITYSDK_OFFSET(0x1B29D130)
#define UNITYENGINE_LIGHT_GET_SPOTIESTEX_OFFSET UNITYSDK_OFFSET(0x1B29D650)
#define UNITYENGINE_LIGHT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B29D0F0)
#define UNITYENGINE_LIGHT_GET_USEBOUNDINGSPHEREOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1B29D260)
#define UNITYENGINE_LIGHT_GET_USECOLORTEMPERATURE_OFFSET UNITYSDK_OFFSET(0x1B29D200)
#define UNITYENGINE_LIGHT_GET_USESHADOWMATRIXOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1B29D370)
#define UNITYENGINE_LIGHT_GET_VCMASK_OFFSET UNITYSDK_OFFSET(0x1B29DB20)
#define UNITYENGINE_LIGHT_REMOVEALLCOMMANDBUFFERS_OFFSET UNITYSDK_OFFSET(0x1B29DA60)
#define UNITYENGINE_LIGHT_REMOVECOMMANDBUFFERS_OFFSET UNITYSDK_OFFSET(0x1B29DA50)
#define UNITYENGINE_LIGHT_REMOVECOMMANDBUFFER_OFFSET UNITYSDK_OFFSET(0x1B29DA40)
#define UNITYENGINE_LIGHT_RESETLIGHTDATA_OFFSET UNITYSDK_OFFSET(0x1B29DB50)
#define UNITYENGINE_LIGHT_RESET_OFFSET UNITYSDK_OFFSET(0x1B29D540)
#define UNITYENGINE_LIGHT_SETGEOMETRYAABB_OFFSET UNITYSDK_OFFSET(0x1B29DC60)
#define UNITYENGINE_LIGHT_SETGEOMETRYSHADOW_OFFSET UNITYSDK_OFFSET(0x1B29DC50)
#define UNITYENGINE_LIGHT_SETLIGHTCLIPPLANEDATA_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B29DC20)
#define UNITYENGINE_LIGHT_SETLIGHTCLIPPLANEDATA_OFFSET UNITYSDK_OFFSET(0x1B29DC10)
#define UNITYENGINE_LIGHT_SETLIGHTCLIPPLANEFADEDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B29DC30)
#define UNITYENGINE_LIGHT_SETLIGHTDISTANCEFADECURVE_OFFSET UNITYSDK_OFFSET(0x1B29DBF0)
#define UNITYENGINE_LIGHT_SETLINEDIRECTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B29D9C0)
#define UNITYENGINE_LIGHT_SETLINEDIRECTION_OFFSET UNITYSDK_OFFSET(0x1B29D9B0)
#define UNITYENGINE_LIGHT_SETLINEPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B29D940)
#define UNITYENGINE_LIGHT_SETLINEPOINT_OFFSET UNITYSDK_OFFSET(0x1B29D930)
#define UNITYENGINE_LIGHT_SETNUMLIGHTCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x1B29DC00)
#define UNITYENGINE_LIGHT_SETVISRATIO_OFFSET UNITYSDK_OFFSET(0x1B29D9E0)
#define UNITYENGINE_LIGHT_SET_AREAATTENFACTOR_OFFSET UNITYSDK_OFFSET(0x1B29D870)
#define UNITYENGINE_LIGHT_SET_AREALIGHTTEX_OFFSET UNITYSDK_OFFSET(0x1B29D830)
#define UNITYENGINE_LIGHT_SET_AREASIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B29D7F0)
#define UNITYENGINE_LIGHT_SET_AREASIZE_OFFSET UNITYSDK_OFFSET(0x1B29D7D0)
#define UNITYENGINE_LIGHT_SET_ATTENUATE_OFFSET UNITYSDK_OFFSET(0x1B29DB10)
#define UNITYENGINE_LIGHT_SET_BAKEDDESIREDSHADOWMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B29D720)
#define UNITYENGINE_LIGHT_SET_BAKEDHYBIRDDYNAMICSHADOW_OFFSET UNITYSDK_OFFSET(0x1B29D6E0)
#define UNITYENGINE_LIGHT_SET_BAKEDINDEX_OFFSET UNITYSDK_OFFSET(0x1B29D780)
#define UNITYENGINE_LIGHT_SET_BAKEDSHADOWMAPENABLED_OFFSET UNITYSDK_OFFSET(0x1B29D6A0)
#define UNITYENGINE_LIGHT_SET_BAKEDSHADOWMAPHIGHQUALITY_OFFSET UNITYSDK_OFFSET(0x1B29D6C0)
#define UNITYENGINE_LIGHT_SET_BAKEDSHADOWMAPRESOLUTIONBIAS_OFFSET UNITYSDK_OFFSET(0x1B29D740)
#define UNITYENGINE_LIGHT_SET_BAKEDSHADOWMAP_OFFSET UNITYSDK_OFFSET(0x1B29D680)
#define UNITYENGINE_LIGHT_SET_BAKINGOUTPUT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B29D4D0)
#define UNITYENGINE_LIGHT_SET_BAKINGOUTPUT_OFFSET UNITYSDK_OFFSET(0x1B29D4C0)
#define UNITYENGINE_LIGHT_SET_BOUNCEINTENSITY_OFFSET UNITYSDK_OFFSET(0x1B29D250)
#define UNITYENGINE_LIGHT_SET_BOUNDINGSPHEREOVERRIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B29D2E0)
#define UNITYENGINE_LIGHT_SET_BOUNDINGSPHEREOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1B29D2D0)
#define UNITYENGINE_LIGHT_SET_COLORTEMPERATURE_OFFSET UNITYSDK_OFFSET(0x1B29D1F0)
#define UNITYENGINE_LIGHT_SET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B29D1D0)
#define UNITYENGINE_LIGHT_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x1B29D1C0)
#define UNITYENGINE_LIGHT_SET_COOKIESIZE_OFFSET UNITYSDK_OFFSET(0x1B29D620)
#define UNITYENGINE_LIGHT_SET_COOKIE_OFFSET UNITYSDK_OFFSET(0x1B29D640)
#define UNITYENGINE_LIGHT_SET_CULLINGMASK_OFFSET UNITYSDK_OFFSET(0x1B29D4F0)
#define UNITYENGINE_LIGHT_SET_ENABLEAREALIGHTFALLOFF_OFFSET UNITYSDK_OFFSET(0x1B29D850)
#define UNITYENGINE_LIGHT_SET_FLARE_OFFSET UNITYSDK_OFFSET(0x1B29D450)
#define UNITYENGINE_LIGHT_SET_INNERSPOTANGLE_OFFSET UNITYSDK_OFFSET(0x1B29D160)
#define UNITYENGINE_LIGHT_SET_INTENSITY_OFFSET UNITYSDK_OFFSET(0x1B29D230)
#define UNITYENGINE_LIGHT_SET_LAYERSHADOWCULLDISTANCES_OFFSET UNITYSDK_OFFSET(0x1B29D600)
#define UNITYENGINE_LIGHT_SET_LIGHTSHADOWCASTERMODE_OFFSET UNITYSDK_OFFSET(0x1B29D530)
#define UNITYENGINE_LIGHT_SET_LINERADIUS_OFFSET UNITYSDK_OFFSET(0x1B29D890)
#define UNITYENGINE_LIGHT_SET_NUMLINEPOINTS_OFFSET UNITYSDK_OFFSET(0x1B29D8B0)
#define UNITYENGINE_LIGHT_SET_PIXELLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x1B29DAA0)
#define UNITYENGINE_LIGHT_SET_RANGE_OFFSET UNITYSDK_OFFSET(0x1B29D430)
#define UNITYENGINE_LIGHT_SET_RENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1B29D510)
#define UNITYENGINE_LIGHT_SET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x1B29D760)
#define UNITYENGINE_LIGHT_SET_RUNTIMEAREALIGHTSHAPE_OFFSET UNITYSDK_OFFSET(0x1B29D810)
#define UNITYENGINE_LIGHT_SET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x1B29D320)
#define UNITYENGINE_LIGHT_SET_SHADOWCONSTANTBIAS_OFFSET UNITYSDK_OFFSET(0x1B29DAD0)
#define UNITYENGINE_LIGHT_SET_SHADOWCUSTOMRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B29D300)
#define UNITYENGINE_LIGHT_SET_SHADOWMATRIXOVERRIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B29D410)
#define UNITYENGINE_LIGHT_SET_SHADOWMATRIXOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1B29D400)
#define UNITYENGINE_LIGHT_SET_SHADOWNEARPLANE_OFFSET UNITYSDK_OFFSET(0x1B29D360)
#define UNITYENGINE_LIGHT_SET_SHADOWNORMALBIAS_OFFSET UNITYSDK_OFFSET(0x1B29D340)
#define UNITYENGINE_LIGHT_SET_SHADOWOBJECTSIZEBIAS_OFFSET UNITYSDK_OFFSET(0x1B29DAF0)
#define UNITYENGINE_LIGHT_SET_SHADOWRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B29D5A0)
#define UNITYENGINE_LIGHT_SET_SHADOWSOFTNESSFADE_OFFSET UNITYSDK_OFFSET(0x1B29D5E0)
#define UNITYENGINE_LIGHT_SET_SHADOWSOFTNESS_OFFSET UNITYSDK_OFFSET(0x1B29D5C0)
#define UNITYENGINE_LIGHT_SET_SHADOWSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1B29D580)
#define UNITYENGINE_LIGHT_SET_SHADOWS_OFFSET UNITYSDK_OFFSET(0x1B29D560)
#define UNITYENGINE_LIGHT_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1B29D120)
#define UNITYENGINE_LIGHT_SET_SPOTANGLE_OFFSET UNITYSDK_OFFSET(0x1B29D140)
#define UNITYENGINE_LIGHT_SET_SPOTIESTEX_OFFSET UNITYSDK_OFFSET(0x1B29D660)
#define UNITYENGINE_LIGHT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B29D100)
#define UNITYENGINE_LIGHT_SET_USEBOUNDINGSPHEREOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1B29D270)
#define UNITYENGINE_LIGHT_SET_USECOLORTEMPERATURE_OFFSET UNITYSDK_OFFSET(0x1B29D210)
#define UNITYENGINE_LIGHT_SET_USESHADOWMATRIXOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1B29D380)
#define UNITYENGINE_LIGHT_SET_VCMASK_OFFSET UNITYSDK_OFFSET(0x1B29DB30)
#define UNITYENGINE_LIGHT_UPDATELIGHTASYNCLOADEDDATA_OFFSET UNITYSDK_OFFSET(0x1B29DC40)
#define UNITYENGINE_LIGHT_UPDATELIGHTDATAAREA_OFFSET UNITYSDK_OFFSET(0x1B29DBC0)
#define UNITYENGINE_LIGHT_UPDATELIGHTDATACOMMON_OFFSET UNITYSDK_OFFSET(0x1B29DB60)
#define UNITYENGINE_LIGHT_UPDATELIGHTDATADEBUG_OFFSET UNITYSDK_OFFSET(0x1B29DBD0)
#define UNITYENGINE_LIGHT_UPDATELIGHTDATAFADE_OFFSET UNITYSDK_OFFSET(0x1B29DBE0)
#define UNITYENGINE_LIGHT_UPDATELIGHTDATALOCAL2_OFFSET UNITYSDK_OFFSET(0x1B29DBA0)
#define UNITYENGINE_LIGHT_UPDATELIGHTDATALOCALSPOT_OFFSET UNITYSDK_OFFSET(0x1B29DBB0)
#define UNITYENGINE_LIGHT_UPDATELIGHTDATALOCAL_OFFSET UNITYSDK_OFFSET(0x1B29DB90)
#define UNITYENGINE_LIGHT_UPDATELIGHTDATASPOT_OFFSET UNITYSDK_OFFSET(0x1B29DB80)
#define UNITYENGINE_LIGHT_UPDATELIGHTDATA_OFFSET UNITYSDK_OFFSET(0x1B29DB40)
#define UNITYENGINE_LIGHT_UPDATELIGHTMESHSTENCIL_OFFSET UNITYSDK_OFFSET(0x1B29DB70)
#define UNITYENGINE_LIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B29DCB0)

namespace UnityEngine
{
	inline static constexpr unsigned int Light_TypeDefinitionIndex = 4129;

	class Light : public ::UnityEngine::Behaviour
	{
	public:
		static ::UnityEngine::Light_OnParticleLightEvent** StaticGet_psLightCb()
		{
			return (::UnityEngine::Light_OnParticleLightEvent**)Il2CppClass::FromTypeDefinitionIndex(Light_TypeDefinitionIndex)->GetStaticField(0x2FCF0);
		}
		::System::Int32 m_BakedIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT__CTOR_OFFSET))(this);
		}

		::UnityEngine::LightType get_type()
		{
			return ((::UnityEngine::LightType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_type(::UnityEngine::LightType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LightType))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_TYPE_OFFSET))(this, a1);
		}

		::UnityEngine::LightShape get_shape()
		{
			return ((::UnityEngine::LightShape(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHAPE_OFFSET))(this);
		}

		::System::Void set_shape(::UnityEngine::LightShape a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LightShape))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHAPE_OFFSET))(this, a1);
		}

		::System::Single get_spotAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SPOTANGLE_OFFSET))(this);
		}

		::System::Void set_spotAngle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SPOTANGLE_OFFSET))(this, a1);
		}

		::System::Single get_innerSpotAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_INNERSPOTANGLE_OFFSET))(this);
		}

		::System::Void set_innerSpotAngle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_INNERSPOTANGLE_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_color()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_COLOR_OFFSET))(this);
		}

		::System::Void set_color(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_COLOR_OFFSET))(this, a1);
		}

		::System::Single get_colorTemperature()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_COLORTEMPERATURE_OFFSET))(this);
		}

		::System::Void set_colorTemperature(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_COLORTEMPERATURE_OFFSET))(this, a1);
		}

		::System::Boolean get_useColorTemperature()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_USECOLORTEMPERATURE_OFFSET))(this);
		}

		::System::Void set_useColorTemperature(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_USECOLORTEMPERATURE_OFFSET))(this, a1);
		}

		::System::Single get_intensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_INTENSITY_OFFSET))(this);
		}

		::System::Void set_intensity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_INTENSITY_OFFSET))(this, a1);
		}

		::System::Single get_bounceIntensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_BOUNCEINTENSITY_OFFSET))(this);
		}

		::System::Void set_bounceIntensity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_BOUNCEINTENSITY_OFFSET))(this, a1);
		}

		::System::Boolean get_useBoundingSphereOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_USEBOUNDINGSPHEREOVERRIDE_OFFSET))(this);
		}

		::System::Void set_useBoundingSphereOverride(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_USEBOUNDINGSPHEREOVERRIDE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 get_boundingSphereOverride()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_BOUNDINGSPHEREOVERRIDE_OFFSET))(this);
		}

		::System::Void set_boundingSphereOverride(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_BOUNDINGSPHEREOVERRIDE_OFFSET))(this, a1);
		}

		::System::Int32 get_shadowCustomResolution()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHADOWCUSTOMRESOLUTION_OFFSET))(this);
		}

		::System::Void set_shadowCustomResolution(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHADOWCUSTOMRESOLUTION_OFFSET))(this, a1);
		}

		::System::Single get_shadowBias()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHADOWBIAS_OFFSET))(this);
		}

		::System::Void set_shadowBias(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHADOWBIAS_OFFSET))(this, a1);
		}

		::System::Single get_shadowNormalBias()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHADOWNORMALBIAS_OFFSET))(this);
		}

		::System::Void set_shadowNormalBias(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHADOWNORMALBIAS_OFFSET))(this, a1);
		}

		::System::Single get_shadowNearPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHADOWNEARPLANE_OFFSET))(this);
		}

		::System::Void set_shadowNearPlane(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHADOWNEARPLANE_OFFSET))(this, a1);
		}

		::System::Boolean get_useShadowMatrixOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_USESHADOWMATRIXOVERRIDE_OFFSET))(this);
		}

		::System::Void set_useShadowMatrixOverride(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_USESHADOWMATRIXOVERRIDE_OFFSET))(this, a1);
		}

		::UnityEngine::Matrix4x4 get_shadowMatrixOverride()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHADOWMATRIXOVERRIDE_OFFSET))(this);
		}

		::System::Void set_shadowMatrixOverride(::UnityEngine::Matrix4x4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHADOWMATRIXOVERRIDE_OFFSET))(this, a1);
		}

		::System::Single get_range()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_RANGE_OFFSET))(this);
		}

		::System::Void set_range(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_RANGE_OFFSET))(this, a1);
		}

		::UnityEngine::Flare* get_flare()
		{
			return ((::UnityEngine::Flare*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_FLARE_OFFSET))(this);
		}

		::System::Void set_flare(::UnityEngine::Flare* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Flare*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_FLARE_OFFSET))(this, a1);
		}

		::UnityEngine::LightBakingOutput get_bakingOutput()
		{
			return ((::UnityEngine::LightBakingOutput(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_BAKINGOUTPUT_OFFSET))(this);
		}

		::System::Void set_bakingOutput(::UnityEngine::LightBakingOutput a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LightBakingOutput))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_BAKINGOUTPUT_OFFSET))(this, a1);
		}

		::System::Int32 get_cullingMask()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_CULLINGMASK_OFFSET))(this);
		}

		::System::Void set_cullingMask(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_CULLINGMASK_OFFSET))(this, a1);
		}

		::System::Int32 get_renderingLayerMask()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_RENDERINGLAYERMASK_OFFSET))(this);
		}

		::System::Void set_renderingLayerMask(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_RENDERINGLAYERMASK_OFFSET))(this, a1);
		}

		::UnityEngine::LightShadowCasterMode get_lightShadowCasterMode()
		{
			return ((::UnityEngine::LightShadowCasterMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_LIGHTSHADOWCASTERMODE_OFFSET))(this);
		}

		::System::Void set_lightShadowCasterMode(::UnityEngine::LightShadowCasterMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LightShadowCasterMode))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_LIGHTSHADOWCASTERMODE_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_RESET_OFFSET))(this);
		}

		::UnityEngine::LightShadows get_shadows()
		{
			return ((::UnityEngine::LightShadows(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHADOWS_OFFSET))(this);
		}

		::System::Void set_shadows(::UnityEngine::LightShadows a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LightShadows))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHADOWS_OFFSET))(this, a1);
		}

		::System::Single get_shadowStrength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHADOWSTRENGTH_OFFSET))(this);
		}

		::System::Void set_shadowStrength(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHADOWSTRENGTH_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::LightShadowResolution get_shadowResolution()
		{
			return ((::UnityEngine::Rendering::LightShadowResolution(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHADOWRESOLUTION_OFFSET))(this);
		}

		::System::Void set_shadowResolution(::UnityEngine::Rendering::LightShadowResolution a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::LightShadowResolution))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHADOWRESOLUTION_OFFSET))(this, a1);
		}

		::System::Single get_shadowSoftness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHADOWSOFTNESS_OFFSET))(this);
		}

		::System::Void set_shadowSoftness(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHADOWSOFTNESS_OFFSET))(this, a1);
		}

		::System::Single get_shadowSoftnessFade()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHADOWSOFTNESSFADE_OFFSET))(this);
		}

		::System::Void set_shadowSoftnessFade(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHADOWSOFTNESSFADE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Single>* get_layerShadowCullDistances()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_LAYERSHADOWCULLDISTANCES_OFFSET))(this);
		}

		::System::Void set_layerShadowCullDistances(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_LAYERSHADOWCULLDISTANCES_OFFSET))(this, a1);
		}

		::System::Single get_cookieSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_COOKIESIZE_OFFSET))(this);
		}

		::System::Void set_cookieSize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_COOKIESIZE_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* get_cookie()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_COOKIE_OFFSET))(this);
		}

		::System::Void set_cookie(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_COOKIE_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* get_spotIESTex()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SPOTIESTEX_OFFSET))(this);
		}

		::System::Void set_spotIESTex(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SPOTIESTEX_OFFSET))(this, a1);
		}

		::UnityEngine::TextAsset* get_bakedShadowMap()
		{
			return ((::UnityEngine::TextAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_BAKEDSHADOWMAP_OFFSET))(this);
		}

		::System::Void set_bakedShadowMap(::UnityEngine::TextAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_BAKEDSHADOWMAP_OFFSET))(this, a1);
		}

		::System::Boolean get_bakedShadowMapEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_BAKEDSHADOWMAPENABLED_OFFSET))(this);
		}

		::System::Void set_bakedShadowMapEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_BAKEDSHADOWMAPENABLED_OFFSET))(this, a1);
		}

		::System::Boolean get_bakedShadowMapHighQuality()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_BAKEDSHADOWMAPHIGHQUALITY_OFFSET))(this);
		}

		::System::Void set_bakedShadowMapHighQuality(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_BAKEDSHADOWMAPHIGHQUALITY_OFFSET))(this, a1);
		}

		::System::Boolean get_bakedHybirdDynamicShadow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_BAKEDHYBIRDDYNAMICSHADOW_OFFSET))(this);
		}

		::System::Void set_bakedHybirdDynamicShadow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_BAKEDHYBIRDDYNAMICSHADOW_OFFSET))(this, a1);
		}

		::System::Int32 get_bakedShadowmapResolution()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_BAKEDSHADOWMAPRESOLUTION_OFFSET))(this);
		}

		::System::Int32 get_currentShadowmapResolution()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_CURRENTSHADOWMAPRESOLUTION_OFFSET))(this);
		}

		::System::Int32 get_bakedDesiredShadowmapResolution()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_BAKEDDESIREDSHADOWMAPRESOLUTION_OFFSET))(this);
		}

		::System::Void set_bakedDesiredShadowmapResolution(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_BAKEDDESIREDSHADOWMAPRESOLUTION_OFFSET))(this, a1);
		}

		::System::Int32 get_bakedShadowmapResolutionBias()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_BAKEDSHADOWMAPRESOLUTIONBIAS_OFFSET))(this);
		}

		::System::Void set_bakedShadowmapResolutionBias(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_BAKEDSHADOWMAPRESOLUTIONBIAS_OFFSET))(this, a1);
		}

		::UnityEngine::LightRenderMode get_renderMode()
		{
			return ((::UnityEngine::LightRenderMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_RENDERMODE_OFFSET))(this);
		}

		::System::Void set_renderMode(::UnityEngine::LightRenderMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LightRenderMode))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_RENDERMODE_OFFSET))(this, a1);
		}

		::System::Int32 get_bakedIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_BAKEDINDEX_OFFSET))(this);
		}

		::System::Void set_bakedIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_BAKEDINDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_areaSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_AREASIZE_OFFSET))(this);
		}

		::System::Void set_areaSize(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_AREASIZE_OFFSET))(this, a1);
		}

		::UnityEngine::RuntimeAreaLightShapeType get_runtimeAreaLightShape()
		{
			return ((::UnityEngine::RuntimeAreaLightShapeType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_RUNTIMEAREALIGHTSHAPE_OFFSET))(this);
		}

		::System::Void set_runtimeAreaLightShape(::UnityEngine::RuntimeAreaLightShapeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RuntimeAreaLightShapeType))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_RUNTIMEAREALIGHTSHAPE_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* get_areaLightTex()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_AREALIGHTTEX_OFFSET))(this);
		}

		::System::Void set_areaLightTex(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_AREALIGHTTEX_OFFSET))(this, a1);
		}

		::System::Boolean get_enableAreaLightFalloff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_ENABLEAREALIGHTFALLOFF_OFFSET))(this);
		}

		::System::Void set_enableAreaLightFalloff(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_ENABLEAREALIGHTFALLOFF_OFFSET))(this, a1);
		}

		::System::Single get_areaAttenFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_AREAATTENFACTOR_OFFSET))(this);
		}

		::System::Void set_areaAttenFactor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_AREAATTENFACTOR_OFFSET))(this, a1);
		}

		::System::Single get_lineRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_LINERADIUS_OFFSET))(this);
		}

		::System::Void set_lineRadius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_LINERADIUS_OFFSET))(this, a1);
		}

		::System::Int32 get_numLinePoints()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_NUMLINEPOINTS_OFFSET))(this);
		}

		::System::Void set_numLinePoints(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_NUMLINEPOINTS_OFFSET))(this, a1);
		}

		::System::Int32 GetNumLinePoints()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETNUMLINEPOINTS_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetLinePoint(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETLINEPOINT_OFFSET))(this, a1);
		}

		::System::Void SetLinePoint(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLINEPOINT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 GetLineDirection(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETLINEDIRECTION_OFFSET))(this, a1);
		}

		::System::Void SetLineDirection(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLINEDIRECTION_OFFSET))(this, a1, a2);
		}

		::System::Single GetVisRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETVISRATIO_OFFSET))(this);
		}

		::System::Void SetVisRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETVISRATIO_OFFSET))(this, a1);
		}

		::System::Void AddCommandBuffer(::UnityEngine::Rendering::LightEvent a1, ::UnityEngine::Rendering::CommandBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::LightEvent, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_ADDCOMMANDBUFFER_OFFSET))(this, a1, a2);
		}

		::System::Void AddCommandBuffer_1(::UnityEngine::Rendering::LightEvent a1, ::UnityEngine::Rendering::CommandBuffer* a2, ::UnityEngine::Rendering::ShadowMapPass a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::LightEvent, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ShadowMapPass))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_ADDCOMMANDBUFFER_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddCommandBufferAsync(::UnityEngine::Rendering::LightEvent a1, ::UnityEngine::Rendering::CommandBuffer* a2, ::UnityEngine::Rendering::ComputeQueueType a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::LightEvent, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ComputeQueueType))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_ADDCOMMANDBUFFERASYNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddCommandBufferAsync_1(::UnityEngine::Rendering::LightEvent a1, ::UnityEngine::Rendering::CommandBuffer* a2, ::UnityEngine::Rendering::ShadowMapPass a3, ::UnityEngine::Rendering::ComputeQueueType a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::LightEvent, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ShadowMapPass, ::UnityEngine::Rendering::ComputeQueueType))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_ADDCOMMANDBUFFERASYNC_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RemoveCommandBuffer(::UnityEngine::Rendering::LightEvent a1, ::UnityEngine::Rendering::CommandBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::LightEvent, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_REMOVECOMMANDBUFFER_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveCommandBuffers(::UnityEngine::Rendering::LightEvent a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::LightEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_REMOVECOMMANDBUFFERS_OFFSET))(this, a1);
		}

		::System::Void RemoveAllCommandBuffers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_REMOVEALLCOMMANDBUFFERS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Rendering::CommandBuffer*>* GetCommandBuffers(::UnityEngine::Rendering::LightEvent a1)
		{
			return ((::Il2CppArray<::UnityEngine::Rendering::CommandBuffer*>*(*)(::PVOID, ::UnityEngine::Rendering::LightEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETCOMMANDBUFFERS_OFFSET))(this, a1);
		}

		::System::Int32 get_commandBufferCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_COMMANDBUFFERCOUNT_OFFSET))(this);
		}

		static ::System::Int32 get_pixelLightCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_PIXELLIGHTCOUNT_OFFSET))();
		}

		static ::System::Void set_pixelLightCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_PIXELLIGHTCOUNT_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::Light*>* GetLights(::UnityEngine::LightType a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::UnityEngine::Light*>*(*)(::UnityEngine::LightType, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETLIGHTS_OFFSET))(a1, a2);
		}

		::System::Single get_shadowConstantBias()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHADOWCONSTANTBIAS_OFFSET))(this);
		}

		::System::Void set_shadowConstantBias(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHADOWCONSTANTBIAS_OFFSET))(this, a1);
		}

		::System::Single get_shadowObjectSizeBias()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHADOWOBJECTSIZEBIAS_OFFSET))(this);
		}

		::System::Void set_shadowObjectSizeBias(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHADOWOBJECTSIZEBIAS_OFFSET))(this, a1);
		}

		::System::Boolean get_attenuate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_ATTENUATE_OFFSET))(this);
		}

		::System::Void set_attenuate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_ATTENUATE_OFFSET))(this, a1);
		}

		::System::Byte get_vCMask()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_VCMASK_OFFSET))(this);
		}

		::System::Void set_vCMask(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_VCMASK_OFFSET))(this, a1);
		}

		::System::Void UpdateLightData(::UnityEngine::Rendering::CRPLightInfo& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPLightInfo&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_UPDATELIGHTDATA_OFFSET))(this, a1);
		}

		::System::Void ResetLightData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_RESETLIGHTDATA_OFFSET))(this);
		}

		::System::Void UpdateLightDataCommon(::UnityEngine::Rendering::CRPLightInfoCommon& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPLightInfoCommon&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_UPDATELIGHTDATACOMMON_OFFSET))(this, a1);
		}

		::System::Void UpdateLightMeshStencil(::UnityEngine::Rendering::CRPLightMeshStencil& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPLightMeshStencil&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_UPDATELIGHTMESHSTENCIL_OFFSET))(this, a1);
		}

		::System::Void UpdateLightDataSpot(::UnityEngine::Rendering::CRPLightInfoCommon& a1, ::UnityEngine::Rendering::CRPLightInfoSpot& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPLightInfoCommon&, ::UnityEngine::Rendering::CRPLightInfoSpot&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_UPDATELIGHTDATASPOT_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateLightDataLocal(::UnityEngine::Rendering::CRPLightInfoCommon& a1, ::UnityEngine::Rendering::CRPLightInfoLocal& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPLightInfoCommon&, ::UnityEngine::Rendering::CRPLightInfoLocal&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_UPDATELIGHTDATALOCAL_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateLightDataLocal2(::UnityEngine::Rendering::CRPLightInfoLocal& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPLightInfoLocal&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_UPDATELIGHTDATALOCAL2_OFFSET))(this, a1);
		}

		::System::Void UpdateLightDataLocalSpot(::UnityEngine::Rendering::CRPLightInfoCommon& a1, ::UnityEngine::Rendering::CRPLightInfoLocal& a2, ::UnityEngine::Rendering::CRPLightInfoSpot& a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPLightInfoCommon&, ::UnityEngine::Rendering::CRPLightInfoLocal&, ::UnityEngine::Rendering::CRPLightInfoSpot&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_UPDATELIGHTDATALOCALSPOT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateLightDataArea(::UnityEngine::Rendering::CRPLightInfoCommon& a1, ::UnityEngine::Rendering::CRPLightInfoArea& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPLightInfoCommon&, ::UnityEngine::Rendering::CRPLightInfoArea&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_UPDATELIGHTDATAAREA_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateLightDataDebug(::UnityEngine::Rendering::CRPLightDebugInfo& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPLightDebugInfo&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_UPDATELIGHTDATADEBUG_OFFSET))(this, a1);
		}

		::System::Void UpdateLightDataFade(::UnityEngine::Rendering::CRPLightInfoFade& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPLightInfoFade&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_UPDATELIGHTDATAFADE_OFFSET))(this, a1);
		}

		::System::Void SetLightDistanceFadeCurve(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLIGHTDISTANCEFADECURVE_OFFSET))(this, a1);
		}

		::System::Void SetNumLightClipPlane(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETNUMLIGHTCLIPPLANE_OFFSET))(this, a1);
		}

		::System::Void SetLightClipPlaneData(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLIGHTCLIPPLANEDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetLightClipPlaneFadeDistance(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLIGHTCLIPPLANEFADEDISTANCE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateLightAsyncLoadedData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_UPDATELIGHTASYNCLOADEDDATA_OFFSET))(this);
		}

		::System::Void SetGeometryShadow(::System::Collections::Generic::List_1<::UnityEngine::CRPRectShadowSerialize>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::CRPRectShadowSerialize>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETGEOMETRYSHADOW_OFFSET))(this, a1);
		}

		::System::Void SetGeometryAABB(::UnityEngine::Bounds& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETGEOMETRYAABB_OFFSET))(this, a1);
		}

		static ::System::Void DoParticleLightEvent_Internal(::UnityEngine::Light* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Light*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_DOPARTICLELIGHTEVENT_INTERNAL_OFFSET))(a1, a2);
		}

		::System::Void get_color_Injected(::UnityEngine::Color& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_COLOR_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_color_Injected(::UnityEngine::Color& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_COLOR_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_boundingSphereOverride_Injected(::UnityEngine::Vector4& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_BOUNDINGSPHEREOVERRIDE_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_boundingSphereOverride_Injected(::UnityEngine::Vector4& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_BOUNDINGSPHEREOVERRIDE_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_shadowMatrixOverride_Injected(::UnityEngine::Matrix4x4& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHADOWMATRIXOVERRIDE_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_shadowMatrixOverride_Injected(::UnityEngine::Matrix4x4& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHADOWMATRIXOVERRIDE_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_bakingOutput_Injected(::UnityEngine::LightBakingOutput& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LightBakingOutput&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_BAKINGOUTPUT_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_bakingOutput_Injected(::UnityEngine::LightBakingOutput& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LightBakingOutput&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_BAKINGOUTPUT_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_areaSize_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_AREASIZE_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_areaSize_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_AREASIZE_INJECTED_OFFSET))(this, a1);
		}

		::System::Void GetLinePoint_Injected(::System::Int32 a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETLINEPOINT_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void SetLinePoint_Injected(::System::Int32 a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLINEPOINT_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void GetLineDirection_Injected(::System::Int32 a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETLINEDIRECTION_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void SetLineDirection_Injected(::System::Int32 a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLINEDIRECTION_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void SetLightClipPlaneData_Injected(::System::Int32 a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLIGHTCLIPPLANEDATA_INJECTED_OFFSET))(this, a1, a2, a3);
		}
	};
}
