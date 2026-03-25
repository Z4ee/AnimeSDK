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

#define UNITYENGINE_LIGHT_ADDCOMMANDBUFFERASYNC_1_OFFSET UNITYSDK_OFFSET(0x18A12BE0)
#define UNITYENGINE_LIGHT_ADDCOMMANDBUFFERASYNC_OFFSET UNITYSDK_OFFSET(0x18A12BC0)
#define UNITYENGINE_LIGHT_ADDCOMMANDBUFFER_1_OFFSET UNITYSDK_OFFSET(0x18A12BB0)
#define UNITYENGINE_LIGHT_ADDCOMMANDBUFFER_OFFSET UNITYSDK_OFFSET(0x18A12BA0)
#define UNITYENGINE_LIGHT_DOPARTICLELIGHTEVENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18A12E20)
#define UNITYENGINE_LIGHT_GETCOMMANDBUFFERS_OFFSET UNITYSDK_OFFSET(0x18A12C20)
#define UNITYENGINE_LIGHT_GETLIGHTS_OFFSET UNITYSDK_OFFSET(0x18A12C60)
#define UNITYENGINE_LIGHT_GETLINEDIRECTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A12B50)
#define UNITYENGINE_LIGHT_GETLINEDIRECTION_OFFSET UNITYSDK_OFFSET(0x18A12B00)
#define UNITYENGINE_LIGHT_GETLINEPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A12AD0)
#define UNITYENGINE_LIGHT_GETLINEPOINT_OFFSET UNITYSDK_OFFSET(0x18A12A80)
#define UNITYENGINE_LIGHT_GETNUMLINEPOINTS_OFFSET UNITYSDK_OFFSET(0x18A12A70)
#define UNITYENGINE_LIGHT_GETVISRATIO_OFFSET UNITYSDK_OFFSET(0x18A12B80)
#define UNITYENGINE_LIGHT_GET_AREAATTENFACTOR_OFFSET UNITYSDK_OFFSET(0x18A12A10)
#define UNITYENGINE_LIGHT_GET_AREALIGHTTEX_OFFSET UNITYSDK_OFFSET(0x18A129D0)
#define UNITYENGINE_LIGHT_GET_AREASIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A12970)
#define UNITYENGINE_LIGHT_GET_AREASIZE_OFFSET UNITYSDK_OFFSET(0x18A12940)
#define UNITYENGINE_LIGHT_GET_ATTENUATE_OFFSET UNITYSDK_OFFSET(0x18A12CB0)
#define UNITYENGINE_LIGHT_GET_BAKEDDESIREDSHADOWMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x18A128C0)
#define UNITYENGINE_LIGHT_GET_BAKEDHYBIRDDYNAMICSHADOW_OFFSET UNITYSDK_OFFSET(0x18A12880)
#define UNITYENGINE_LIGHT_GET_BAKEDINDEX_OFFSET UNITYSDK_OFFSET(0x18A12920)
#define UNITYENGINE_LIGHT_GET_BAKEDSHADOWMAPENABLED_OFFSET UNITYSDK_OFFSET(0x18A12840)
#define UNITYENGINE_LIGHT_GET_BAKEDSHADOWMAPHIGHQUALITY_OFFSET UNITYSDK_OFFSET(0x18A12860)
#define UNITYENGINE_LIGHT_GET_BAKEDSHADOWMAPRESOLUTIONBIAS_OFFSET UNITYSDK_OFFSET(0x18A128E0)
#define UNITYENGINE_LIGHT_GET_BAKEDSHADOWMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x18A128A0)
#define UNITYENGINE_LIGHT_GET_BAKEDSHADOWMAP_OFFSET UNITYSDK_OFFSET(0x18A12820)
#define UNITYENGINE_LIGHT_GET_BAKINGOUTPUT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A12660)
#define UNITYENGINE_LIGHT_GET_BAKINGOUTPUT_OFFSET UNITYSDK_OFFSET(0x18A12610)
#define UNITYENGINE_LIGHT_GET_BOUNCEINTENSITY_OFFSET UNITYSDK_OFFSET(0x18A123F0)
#define UNITYENGINE_LIGHT_GET_BOUNDINGSPHEREOVERRIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A12470)
#define UNITYENGINE_LIGHT_GET_BOUNDINGSPHEREOVERRIDE_OFFSET UNITYSDK_OFFSET(0x18A12430)
#define UNITYENGINE_LIGHT_GET_COLORTEMPERATURE_OFFSET UNITYSDK_OFFSET(0x18A12390)
#define UNITYENGINE_LIGHT_GET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A12360)
#define UNITYENGINE_LIGHT_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x18A12320)
#define UNITYENGINE_LIGHT_GET_COMMANDBUFFERCOUNT_OFFSET UNITYSDK_OFFSET(0x18A12C30)
#define UNITYENGINE_LIGHT_GET_COOKIESIZE_OFFSET UNITYSDK_OFFSET(0x18A127C0)
#define UNITYENGINE_LIGHT_GET_COOKIE_OFFSET UNITYSDK_OFFSET(0x18A127E0)
#define UNITYENGINE_LIGHT_GET_CULLINGMASK_OFFSET UNITYSDK_OFFSET(0x18A12690)
#define UNITYENGINE_LIGHT_GET_CURRENTSHADOWMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x18A128B0)
#define UNITYENGINE_LIGHT_GET_ENABLEAREALIGHTFALLOFF_OFFSET UNITYSDK_OFFSET(0x18A129F0)
#define UNITYENGINE_LIGHT_GET_FLARE_OFFSET UNITYSDK_OFFSET(0x18A125F0)
#define UNITYENGINE_LIGHT_GET_INNERSPOTANGLE_OFFSET UNITYSDK_OFFSET(0x18A12300)
#define UNITYENGINE_LIGHT_GET_INTENSITY_OFFSET UNITYSDK_OFFSET(0x18A123D0)
#define UNITYENGINE_LIGHT_GET_LAYERSHADOWCULLDISTANCES_OFFSET UNITYSDK_OFFSET(0x18A127A0)
#define UNITYENGINE_LIGHT_GET_LIGHTSHADOWCASTERMODE_OFFSET UNITYSDK_OFFSET(0x18A126D0)
#define UNITYENGINE_LIGHT_GET_LINERADIUS_OFFSET UNITYSDK_OFFSET(0x18A12A30)
#define UNITYENGINE_LIGHT_GET_NUMLINEPOINTS_OFFSET UNITYSDK_OFFSET(0x18A12A50)
#define UNITYENGINE_LIGHT_GET_PIXELLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x18A12C40)
#define UNITYENGINE_LIGHT_GET_RANGE_OFFSET UNITYSDK_OFFSET(0x18A125D0)
#define UNITYENGINE_LIGHT_GET_RENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x18A126B0)
#define UNITYENGINE_LIGHT_GET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x18A12900)
#define UNITYENGINE_LIGHT_GET_RUNTIMEAREALIGHTSHAPE_OFFSET UNITYSDK_OFFSET(0x18A129B0)
#define UNITYENGINE_LIGHT_GET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x18A124C0)
#define UNITYENGINE_LIGHT_GET_SHADOWCONSTANTBIAS_OFFSET UNITYSDK_OFFSET(0x18A12C70)
#define UNITYENGINE_LIGHT_GET_SHADOWCUSTOMRESOLUTION_OFFSET UNITYSDK_OFFSET(0x18A124A0)
#define UNITYENGINE_LIGHT_GET_SHADOWMATRIXOVERRIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A125A0)
#define UNITYENGINE_LIGHT_GET_SHADOWMATRIXOVERRIDE_OFFSET UNITYSDK_OFFSET(0x18A12540)
#define UNITYENGINE_LIGHT_GET_SHADOWNEARPLANE_OFFSET UNITYSDK_OFFSET(0x18A12500)
#define UNITYENGINE_LIGHT_GET_SHADOWNORMALBIAS_OFFSET UNITYSDK_OFFSET(0x18A124E0)
#define UNITYENGINE_LIGHT_GET_SHADOWOBJECTSIZEBIAS_OFFSET UNITYSDK_OFFSET(0x18A12C90)
#define UNITYENGINE_LIGHT_GET_SHADOWRESOLUTION_OFFSET UNITYSDK_OFFSET(0x18A12740)
#define UNITYENGINE_LIGHT_GET_SHADOWSOFTNESSFADE_OFFSET UNITYSDK_OFFSET(0x18A12780)
#define UNITYENGINE_LIGHT_GET_SHADOWSOFTNESS_OFFSET UNITYSDK_OFFSET(0x18A12760)
#define UNITYENGINE_LIGHT_GET_SHADOWSTRENGTH_OFFSET UNITYSDK_OFFSET(0x18A12720)
#define UNITYENGINE_LIGHT_GET_SHADOWS_OFFSET UNITYSDK_OFFSET(0x18A12700)
#define UNITYENGINE_LIGHT_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x18A122C0)
#define UNITYENGINE_LIGHT_GET_SPOTANGLE_OFFSET UNITYSDK_OFFSET(0x18A122E0)
#define UNITYENGINE_LIGHT_GET_SPOTIESTEX_OFFSET UNITYSDK_OFFSET(0x18A12800)
#define UNITYENGINE_LIGHT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x18A122A0)
#define UNITYENGINE_LIGHT_GET_USEBOUNDINGSPHEREOVERRIDE_OFFSET UNITYSDK_OFFSET(0x18A12410)
#define UNITYENGINE_LIGHT_GET_USECOLORTEMPERATURE_OFFSET UNITYSDK_OFFSET(0x18A123B0)
#define UNITYENGINE_LIGHT_GET_USESHADOWMATRIXOVERRIDE_OFFSET UNITYSDK_OFFSET(0x18A12520)
#define UNITYENGINE_LIGHT_GET_VCMASK_OFFSET UNITYSDK_OFFSET(0x18A12CD0)
#define UNITYENGINE_LIGHT_REMOVEALLCOMMANDBUFFERS_OFFSET UNITYSDK_OFFSET(0x18A12C10)
#define UNITYENGINE_LIGHT_REMOVECOMMANDBUFFERS_OFFSET UNITYSDK_OFFSET(0x18A12C00)
#define UNITYENGINE_LIGHT_REMOVECOMMANDBUFFER_OFFSET UNITYSDK_OFFSET(0x18A12BF0)
#define UNITYENGINE_LIGHT_RESETLIGHTDATA_OFFSET UNITYSDK_OFFSET(0x18A12D00)
#define UNITYENGINE_LIGHT_RESET_OFFSET UNITYSDK_OFFSET(0x18A126F0)
#define UNITYENGINE_LIGHT_SETGEOMETRYAABB_OFFSET UNITYSDK_OFFSET(0x18A12E10)
#define UNITYENGINE_LIGHT_SETGEOMETRYSHADOW_OFFSET UNITYSDK_OFFSET(0x18A12E00)
#define UNITYENGINE_LIGHT_SETLIGHTCLIPPLANEDATA_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A12DD0)
#define UNITYENGINE_LIGHT_SETLIGHTCLIPPLANEDATA_OFFSET UNITYSDK_OFFSET(0x18A12DC0)
#define UNITYENGINE_LIGHT_SETLIGHTCLIPPLANEFADEDISTANCE_OFFSET UNITYSDK_OFFSET(0x18A12DE0)
#define UNITYENGINE_LIGHT_SETLIGHTDISTANCEFADECURVE_OFFSET UNITYSDK_OFFSET(0x18A12DA0)
#define UNITYENGINE_LIGHT_SETLINEDIRECTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A12B70)
#define UNITYENGINE_LIGHT_SETLINEDIRECTION_OFFSET UNITYSDK_OFFSET(0x18A12B60)
#define UNITYENGINE_LIGHT_SETLINEPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A12AF0)
#define UNITYENGINE_LIGHT_SETLINEPOINT_OFFSET UNITYSDK_OFFSET(0x18A12AE0)
#define UNITYENGINE_LIGHT_SETNUMLIGHTCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x18A12DB0)
#define UNITYENGINE_LIGHT_SETVISRATIO_OFFSET UNITYSDK_OFFSET(0x18A12B90)
#define UNITYENGINE_LIGHT_SET_AREAATTENFACTOR_OFFSET UNITYSDK_OFFSET(0x18A12A20)
#define UNITYENGINE_LIGHT_SET_AREALIGHTTEX_OFFSET UNITYSDK_OFFSET(0x18A129E0)
#define UNITYENGINE_LIGHT_SET_AREASIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A129A0)
#define UNITYENGINE_LIGHT_SET_AREASIZE_OFFSET UNITYSDK_OFFSET(0x18A12980)
#define UNITYENGINE_LIGHT_SET_ATTENUATE_OFFSET UNITYSDK_OFFSET(0x18A12CC0)
#define UNITYENGINE_LIGHT_SET_BAKEDDESIREDSHADOWMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x18A128D0)
#define UNITYENGINE_LIGHT_SET_BAKEDHYBIRDDYNAMICSHADOW_OFFSET UNITYSDK_OFFSET(0x18A12890)
#define UNITYENGINE_LIGHT_SET_BAKEDINDEX_OFFSET UNITYSDK_OFFSET(0x18A12930)
#define UNITYENGINE_LIGHT_SET_BAKEDSHADOWMAPENABLED_OFFSET UNITYSDK_OFFSET(0x18A12850)
#define UNITYENGINE_LIGHT_SET_BAKEDSHADOWMAPHIGHQUALITY_OFFSET UNITYSDK_OFFSET(0x18A12870)
#define UNITYENGINE_LIGHT_SET_BAKEDSHADOWMAPRESOLUTIONBIAS_OFFSET UNITYSDK_OFFSET(0x18A128F0)
#define UNITYENGINE_LIGHT_SET_BAKEDSHADOWMAP_OFFSET UNITYSDK_OFFSET(0x18A12830)
#define UNITYENGINE_LIGHT_SET_BAKINGOUTPUT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A12680)
#define UNITYENGINE_LIGHT_SET_BAKINGOUTPUT_OFFSET UNITYSDK_OFFSET(0x18A12670)
#define UNITYENGINE_LIGHT_SET_BOUNCEINTENSITY_OFFSET UNITYSDK_OFFSET(0x18A12400)
#define UNITYENGINE_LIGHT_SET_BOUNDINGSPHEREOVERRIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A12490)
#define UNITYENGINE_LIGHT_SET_BOUNDINGSPHEREOVERRIDE_OFFSET UNITYSDK_OFFSET(0x18A12480)
#define UNITYENGINE_LIGHT_SET_COLORTEMPERATURE_OFFSET UNITYSDK_OFFSET(0x18A123A0)
#define UNITYENGINE_LIGHT_SET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A12380)
#define UNITYENGINE_LIGHT_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x18A12370)
#define UNITYENGINE_LIGHT_SET_COOKIESIZE_OFFSET UNITYSDK_OFFSET(0x18A127D0)
#define UNITYENGINE_LIGHT_SET_COOKIE_OFFSET UNITYSDK_OFFSET(0x18A127F0)
#define UNITYENGINE_LIGHT_SET_CULLINGMASK_OFFSET UNITYSDK_OFFSET(0x18A126A0)
#define UNITYENGINE_LIGHT_SET_ENABLEAREALIGHTFALLOFF_OFFSET UNITYSDK_OFFSET(0x18A12A00)
#define UNITYENGINE_LIGHT_SET_FLARE_OFFSET UNITYSDK_OFFSET(0x18A12600)
#define UNITYENGINE_LIGHT_SET_INNERSPOTANGLE_OFFSET UNITYSDK_OFFSET(0x18A12310)
#define UNITYENGINE_LIGHT_SET_INTENSITY_OFFSET UNITYSDK_OFFSET(0x18A123E0)
#define UNITYENGINE_LIGHT_SET_LAYERSHADOWCULLDISTANCES_OFFSET UNITYSDK_OFFSET(0x18A127B0)
#define UNITYENGINE_LIGHT_SET_LIGHTSHADOWCASTERMODE_OFFSET UNITYSDK_OFFSET(0x18A126E0)
#define UNITYENGINE_LIGHT_SET_LINERADIUS_OFFSET UNITYSDK_OFFSET(0x18A12A40)
#define UNITYENGINE_LIGHT_SET_NUMLINEPOINTS_OFFSET UNITYSDK_OFFSET(0x18A12A60)
#define UNITYENGINE_LIGHT_SET_PIXELLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x18A12C50)
#define UNITYENGINE_LIGHT_SET_RANGE_OFFSET UNITYSDK_OFFSET(0x18A125E0)
#define UNITYENGINE_LIGHT_SET_RENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x18A126C0)
#define UNITYENGINE_LIGHT_SET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x18A12910)
#define UNITYENGINE_LIGHT_SET_RUNTIMEAREALIGHTSHAPE_OFFSET UNITYSDK_OFFSET(0x18A129C0)
#define UNITYENGINE_LIGHT_SET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x18A124D0)
#define UNITYENGINE_LIGHT_SET_SHADOWCONSTANTBIAS_OFFSET UNITYSDK_OFFSET(0x18A12C80)
#define UNITYENGINE_LIGHT_SET_SHADOWCUSTOMRESOLUTION_OFFSET UNITYSDK_OFFSET(0x18A124B0)
#define UNITYENGINE_LIGHT_SET_SHADOWMATRIXOVERRIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A125C0)
#define UNITYENGINE_LIGHT_SET_SHADOWMATRIXOVERRIDE_OFFSET UNITYSDK_OFFSET(0x18A125B0)
#define UNITYENGINE_LIGHT_SET_SHADOWNEARPLANE_OFFSET UNITYSDK_OFFSET(0x18A12510)
#define UNITYENGINE_LIGHT_SET_SHADOWNORMALBIAS_OFFSET UNITYSDK_OFFSET(0x18A124F0)
#define UNITYENGINE_LIGHT_SET_SHADOWOBJECTSIZEBIAS_OFFSET UNITYSDK_OFFSET(0x18A12CA0)
#define UNITYENGINE_LIGHT_SET_SHADOWRESOLUTION_OFFSET UNITYSDK_OFFSET(0x18A12750)
#define UNITYENGINE_LIGHT_SET_SHADOWSOFTNESSFADE_OFFSET UNITYSDK_OFFSET(0x18A12790)
#define UNITYENGINE_LIGHT_SET_SHADOWSOFTNESS_OFFSET UNITYSDK_OFFSET(0x18A12770)
#define UNITYENGINE_LIGHT_SET_SHADOWSTRENGTH_OFFSET UNITYSDK_OFFSET(0x18A12730)
#define UNITYENGINE_LIGHT_SET_SHADOWS_OFFSET UNITYSDK_OFFSET(0x18A12710)
#define UNITYENGINE_LIGHT_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0x18A122D0)
#define UNITYENGINE_LIGHT_SET_SPOTANGLE_OFFSET UNITYSDK_OFFSET(0x18A122F0)
#define UNITYENGINE_LIGHT_SET_SPOTIESTEX_OFFSET UNITYSDK_OFFSET(0x18A12810)
#define UNITYENGINE_LIGHT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x18A122B0)
#define UNITYENGINE_LIGHT_SET_USEBOUNDINGSPHEREOVERRIDE_OFFSET UNITYSDK_OFFSET(0x18A12420)
#define UNITYENGINE_LIGHT_SET_USECOLORTEMPERATURE_OFFSET UNITYSDK_OFFSET(0x18A123C0)
#define UNITYENGINE_LIGHT_SET_USESHADOWMATRIXOVERRIDE_OFFSET UNITYSDK_OFFSET(0x18A12530)
#define UNITYENGINE_LIGHT_SET_VCMASK_OFFSET UNITYSDK_OFFSET(0x18A12CE0)
#define UNITYENGINE_LIGHT_UPDATELIGHTASYNCLOADEDDATA_OFFSET UNITYSDK_OFFSET(0x18A12DF0)
#define UNITYENGINE_LIGHT_UPDATELIGHTDATAAREA_OFFSET UNITYSDK_OFFSET(0x18A12D70)
#define UNITYENGINE_LIGHT_UPDATELIGHTDATACOMMON_OFFSET UNITYSDK_OFFSET(0x18A12D10)
#define UNITYENGINE_LIGHT_UPDATELIGHTDATADEBUG_OFFSET UNITYSDK_OFFSET(0x18A12D80)
#define UNITYENGINE_LIGHT_UPDATELIGHTDATAFADE_OFFSET UNITYSDK_OFFSET(0x18A12D90)
#define UNITYENGINE_LIGHT_UPDATELIGHTDATALOCAL2_OFFSET UNITYSDK_OFFSET(0x18A12D50)
#define UNITYENGINE_LIGHT_UPDATELIGHTDATALOCALSPOT_OFFSET UNITYSDK_OFFSET(0x18A12D60)
#define UNITYENGINE_LIGHT_UPDATELIGHTDATALOCAL_OFFSET UNITYSDK_OFFSET(0x18A12D40)
#define UNITYENGINE_LIGHT_UPDATELIGHTDATASPOT_OFFSET UNITYSDK_OFFSET(0x18A12D30)
#define UNITYENGINE_LIGHT_UPDATELIGHTDATA_OFFSET UNITYSDK_OFFSET(0x18A12CF0)
#define UNITYENGINE_LIGHT_UPDATELIGHTMESHSTENCIL_OFFSET UNITYSDK_OFFSET(0x18A12D20)
#define UNITYENGINE_LIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x18A133A0)

namespace UnityEngine
{
	inline static constexpr unsigned int Light_TypeDefinitionIndex = 3953;

	class Light : public ::UnityEngine::Behaviour
	{
	public:
		static ::UnityEngine::Light_OnParticleLightEvent** StaticGet_psLightCb()
		{
			return (::UnityEngine::Light_OnParticleLightEvent**)Il2CppClass::FromTypeDefinitionIndex(Light_TypeDefinitionIndex)->GetStaticField(0x12F30);
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

		::System::Void set_type(::UnityEngine::LightType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LightType))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_TYPE_OFFSET))(this, value);
		}

		::UnityEngine::LightShape get_shape()
		{
			return ((::UnityEngine::LightShape(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHAPE_OFFSET))(this);
		}

		::System::Void set_shape(::UnityEngine::LightShape value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LightShape))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHAPE_OFFSET))(this, value);
		}

		::System::Single get_spotAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SPOTANGLE_OFFSET))(this);
		}

		::System::Void set_spotAngle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SPOTANGLE_OFFSET))(this, value);
		}

		::System::Single get_innerSpotAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_INNERSPOTANGLE_OFFSET))(this);
		}

		::System::Void set_innerSpotAngle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_INNERSPOTANGLE_OFFSET))(this, value);
		}

		::UnityEngine::Color get_color()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_COLOR_OFFSET))(this);
		}

		::System::Void set_color(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_COLOR_OFFSET))(this, value);
		}

		::System::Single get_colorTemperature()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_COLORTEMPERATURE_OFFSET))(this);
		}

		::System::Void set_colorTemperature(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_COLORTEMPERATURE_OFFSET))(this, value);
		}

		::System::Boolean get_useColorTemperature()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_USECOLORTEMPERATURE_OFFSET))(this);
		}

		::System::Void set_useColorTemperature(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_USECOLORTEMPERATURE_OFFSET))(this, value);
		}

		::System::Single get_intensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_INTENSITY_OFFSET))(this);
		}

		::System::Void set_intensity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_INTENSITY_OFFSET))(this, value);
		}

		::System::Single get_bounceIntensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_BOUNCEINTENSITY_OFFSET))(this);
		}

		::System::Void set_bounceIntensity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_BOUNCEINTENSITY_OFFSET))(this, value);
		}

		::System::Boolean get_useBoundingSphereOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_USEBOUNDINGSPHEREOVERRIDE_OFFSET))(this);
		}

		::System::Void set_useBoundingSphereOverride(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_USEBOUNDINGSPHEREOVERRIDE_OFFSET))(this, value);
		}

		::UnityEngine::Vector4 get_boundingSphereOverride()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_BOUNDINGSPHEREOVERRIDE_OFFSET))(this);
		}

		::System::Void set_boundingSphereOverride(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_BOUNDINGSPHEREOVERRIDE_OFFSET))(this, value);
		}

		::System::Int32 get_shadowCustomResolution()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHADOWCUSTOMRESOLUTION_OFFSET))(this);
		}

		::System::Void set_shadowCustomResolution(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHADOWCUSTOMRESOLUTION_OFFSET))(this, value);
		}

		::System::Single get_shadowBias()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHADOWBIAS_OFFSET))(this);
		}

		::System::Void set_shadowBias(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHADOWBIAS_OFFSET))(this, value);
		}

		::System::Single get_shadowNormalBias()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHADOWNORMALBIAS_OFFSET))(this);
		}

		::System::Void set_shadowNormalBias(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHADOWNORMALBIAS_OFFSET))(this, value);
		}

		::System::Single get_shadowNearPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHADOWNEARPLANE_OFFSET))(this);
		}

		::System::Void set_shadowNearPlane(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHADOWNEARPLANE_OFFSET))(this, value);
		}

		::System::Boolean get_useShadowMatrixOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_USESHADOWMATRIXOVERRIDE_OFFSET))(this);
		}

		::System::Void set_useShadowMatrixOverride(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_USESHADOWMATRIXOVERRIDE_OFFSET))(this, value);
		}

		::UnityEngine::Matrix4x4 get_shadowMatrixOverride()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHADOWMATRIXOVERRIDE_OFFSET))(this);
		}

		::System::Void set_shadowMatrixOverride(::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHADOWMATRIXOVERRIDE_OFFSET))(this, value);
		}

		::System::Single get_range()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_RANGE_OFFSET))(this);
		}

		::System::Void set_range(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_RANGE_OFFSET))(this, value);
		}

		::UnityEngine::Flare* get_flare()
		{
			return ((::UnityEngine::Flare*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_FLARE_OFFSET))(this);
		}

		::System::Void set_flare(::UnityEngine::Flare* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Flare*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_FLARE_OFFSET))(this, value);
		}

		::UnityEngine::LightBakingOutput get_bakingOutput()
		{
			return ((::UnityEngine::LightBakingOutput(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_BAKINGOUTPUT_OFFSET))(this);
		}

		::System::Void set_bakingOutput(::UnityEngine::LightBakingOutput value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LightBakingOutput))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_BAKINGOUTPUT_OFFSET))(this, value);
		}

		::System::Int32 get_cullingMask()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_CULLINGMASK_OFFSET))(this);
		}

		::System::Void set_cullingMask(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_CULLINGMASK_OFFSET))(this, value);
		}

		::System::Int32 get_renderingLayerMask()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_RENDERINGLAYERMASK_OFFSET))(this);
		}

		::System::Void set_renderingLayerMask(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_RENDERINGLAYERMASK_OFFSET))(this, value);
		}

		::UnityEngine::LightShadowCasterMode get_lightShadowCasterMode()
		{
			return ((::UnityEngine::LightShadowCasterMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_LIGHTSHADOWCASTERMODE_OFFSET))(this);
		}

		::System::Void set_lightShadowCasterMode(::UnityEngine::LightShadowCasterMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LightShadowCasterMode))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_LIGHTSHADOWCASTERMODE_OFFSET))(this, value);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_RESET_OFFSET))(this);
		}

		::UnityEngine::LightShadows get_shadows()
		{
			return ((::UnityEngine::LightShadows(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHADOWS_OFFSET))(this);
		}

		::System::Void set_shadows(::UnityEngine::LightShadows value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LightShadows))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHADOWS_OFFSET))(this, value);
		}

		::System::Single get_shadowStrength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHADOWSTRENGTH_OFFSET))(this);
		}

		::System::Void set_shadowStrength(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHADOWSTRENGTH_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::LightShadowResolution get_shadowResolution()
		{
			return ((::UnityEngine::Rendering::LightShadowResolution(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHADOWRESOLUTION_OFFSET))(this);
		}

		::System::Void set_shadowResolution(::UnityEngine::Rendering::LightShadowResolution value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::LightShadowResolution))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHADOWRESOLUTION_OFFSET))(this, value);
		}

		::System::Single get_shadowSoftness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHADOWSOFTNESS_OFFSET))(this);
		}

		::System::Void set_shadowSoftness(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHADOWSOFTNESS_OFFSET))(this, value);
		}

		::System::Single get_shadowSoftnessFade()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHADOWSOFTNESSFADE_OFFSET))(this);
		}

		::System::Void set_shadowSoftnessFade(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHADOWSOFTNESSFADE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Single>* get_layerShadowCullDistances()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_LAYERSHADOWCULLDISTANCES_OFFSET))(this);
		}

		::System::Void set_layerShadowCullDistances(::Il2CppArray<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_LAYERSHADOWCULLDISTANCES_OFFSET))(this, value);
		}

		::System::Single get_cookieSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_COOKIESIZE_OFFSET))(this);
		}

		::System::Void set_cookieSize(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_COOKIESIZE_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get_cookie()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_COOKIE_OFFSET))(this);
		}

		::System::Void set_cookie(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_COOKIE_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get_spotIESTex()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SPOTIESTEX_OFFSET))(this);
		}

		::System::Void set_spotIESTex(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SPOTIESTEX_OFFSET))(this, value);
		}

		::UnityEngine::TextAsset* get_bakedShadowMap()
		{
			return ((::UnityEngine::TextAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_BAKEDSHADOWMAP_OFFSET))(this);
		}

		::System::Void set_bakedShadowMap(::UnityEngine::TextAsset* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_BAKEDSHADOWMAP_OFFSET))(this, value);
		}

		::System::Boolean get_bakedShadowMapEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_BAKEDSHADOWMAPENABLED_OFFSET))(this);
		}

		::System::Void set_bakedShadowMapEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_BAKEDSHADOWMAPENABLED_OFFSET))(this, value);
		}

		::System::Boolean get_bakedShadowMapHighQuality()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_BAKEDSHADOWMAPHIGHQUALITY_OFFSET))(this);
		}

		::System::Void set_bakedShadowMapHighQuality(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_BAKEDSHADOWMAPHIGHQUALITY_OFFSET))(this, value);
		}

		::System::Boolean get_bakedHybirdDynamicShadow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_BAKEDHYBIRDDYNAMICSHADOW_OFFSET))(this);
		}

		::System::Void set_bakedHybirdDynamicShadow(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_BAKEDHYBIRDDYNAMICSHADOW_OFFSET))(this, value);
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

		::System::Void set_bakedDesiredShadowmapResolution(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_BAKEDDESIREDSHADOWMAPRESOLUTION_OFFSET))(this, value);
		}

		::System::Int32 get_bakedShadowmapResolutionBias()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_BAKEDSHADOWMAPRESOLUTIONBIAS_OFFSET))(this);
		}

		::System::Void set_bakedShadowmapResolutionBias(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_BAKEDSHADOWMAPRESOLUTIONBIAS_OFFSET))(this, value);
		}

		::UnityEngine::LightRenderMode get_renderMode()
		{
			return ((::UnityEngine::LightRenderMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_RENDERMODE_OFFSET))(this);
		}

		::System::Void set_renderMode(::UnityEngine::LightRenderMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LightRenderMode))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_RENDERMODE_OFFSET))(this, value);
		}

		::System::Int32 get_bakedIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_BAKEDINDEX_OFFSET))(this);
		}

		::System::Void set_bakedIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_BAKEDINDEX_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_areaSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_AREASIZE_OFFSET))(this);
		}

		::System::Void set_areaSize(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_AREASIZE_OFFSET))(this, value);
		}

		::UnityEngine::RuntimeAreaLightShapeType get_runtimeAreaLightShape()
		{
			return ((::UnityEngine::RuntimeAreaLightShapeType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_RUNTIMEAREALIGHTSHAPE_OFFSET))(this);
		}

		::System::Void set_runtimeAreaLightShape(::UnityEngine::RuntimeAreaLightShapeType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RuntimeAreaLightShapeType))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_RUNTIMEAREALIGHTSHAPE_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get_areaLightTex()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_AREALIGHTTEX_OFFSET))(this);
		}

		::System::Void set_areaLightTex(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_AREALIGHTTEX_OFFSET))(this, value);
		}

		::System::Boolean get_enableAreaLightFalloff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_ENABLEAREALIGHTFALLOFF_OFFSET))(this);
		}

		::System::Void set_enableAreaLightFalloff(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_ENABLEAREALIGHTFALLOFF_OFFSET))(this, value);
		}

		::System::Single get_areaAttenFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_AREAATTENFACTOR_OFFSET))(this);
		}

		::System::Void set_areaAttenFactor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_AREAATTENFACTOR_OFFSET))(this, value);
		}

		::System::Single get_lineRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_LINERADIUS_OFFSET))(this);
		}

		::System::Void set_lineRadius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_LINERADIUS_OFFSET))(this, value);
		}

		::System::Int32 get_numLinePoints()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_NUMLINEPOINTS_OFFSET))(this);
		}

		::System::Void set_numLinePoints(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_NUMLINEPOINTS_OFFSET))(this, value);
		}

		::System::Int32 GetNumLinePoints()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETNUMLINEPOINTS_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetLinePoint(::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETLINEPOINT_OFFSET))(this, index);
		}

		::System::Void SetLinePoint(::System::Int32 index, ::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLINEPOINT_OFFSET))(this, index, value);
		}

		::UnityEngine::Vector3 GetLineDirection(::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETLINEDIRECTION_OFFSET))(this, index);
		}

		::System::Void SetLineDirection(::System::Int32 index, ::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLINEDIRECTION_OFFSET))(this, index, value);
		}

		::System::Single GetVisRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETVISRATIO_OFFSET))(this);
		}

		::System::Void SetVisRatio(::System::Single visRatio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETVISRATIO_OFFSET))(this, visRatio);
		}

		::System::Void AddCommandBuffer(::UnityEngine::Rendering::LightEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::LightEvent, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_ADDCOMMANDBUFFER_OFFSET))(this, evt, buffer);
		}

		::System::Void AddCommandBuffer_1(::UnityEngine::Rendering::LightEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer, ::UnityEngine::Rendering::ShadowMapPass shadowPassMask)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::LightEvent, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ShadowMapPass))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_ADDCOMMANDBUFFER_1_OFFSET))(this, evt, buffer, shadowPassMask);
		}

		::System::Void AddCommandBufferAsync(::UnityEngine::Rendering::LightEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer, ::UnityEngine::Rendering::ComputeQueueType queueType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::LightEvent, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ComputeQueueType))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_ADDCOMMANDBUFFERASYNC_OFFSET))(this, evt, buffer, queueType);
		}

		::System::Void AddCommandBufferAsync_1(::UnityEngine::Rendering::LightEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer, ::UnityEngine::Rendering::ShadowMapPass shadowPassMask, ::UnityEngine::Rendering::ComputeQueueType queueType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::LightEvent, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ShadowMapPass, ::UnityEngine::Rendering::ComputeQueueType))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_ADDCOMMANDBUFFERASYNC_1_OFFSET))(this, evt, buffer, shadowPassMask, queueType);
		}

		::System::Void RemoveCommandBuffer(::UnityEngine::Rendering::LightEvent evt, ::UnityEngine::Rendering::CommandBuffer* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::LightEvent, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_REMOVECOMMANDBUFFER_OFFSET))(this, evt, buffer);
		}

		::System::Void RemoveCommandBuffers(::UnityEngine::Rendering::LightEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::LightEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_REMOVECOMMANDBUFFERS_OFFSET))(this, evt);
		}

		::System::Void RemoveAllCommandBuffers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_REMOVEALLCOMMANDBUFFERS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Rendering::CommandBuffer*>* GetCommandBuffers(::UnityEngine::Rendering::LightEvent evt)
		{
			return ((::Il2CppArray<::UnityEngine::Rendering::CommandBuffer*>*(*)(::PVOID, ::UnityEngine::Rendering::LightEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETCOMMANDBUFFERS_OFFSET))(this, evt);
		}

		::System::Int32 get_commandBufferCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_COMMANDBUFFERCOUNT_OFFSET))(this);
		}

		static ::System::Int32 get_pixelLightCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_PIXELLIGHTCOUNT_OFFSET))();
		}

		static ::System::Void set_pixelLightCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_PIXELLIGHTCOUNT_OFFSET))(value);
		}

		static ::Il2CppArray<::UnityEngine::Light*>* GetLights(::UnityEngine::LightType type, ::System::Int32 layer)
		{
			return ((::Il2CppArray<::UnityEngine::Light*>*(*)(::UnityEngine::LightType, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETLIGHTS_OFFSET))(type, layer);
		}

		::System::Single get_shadowConstantBias()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHADOWCONSTANTBIAS_OFFSET))(this);
		}

		::System::Void set_shadowConstantBias(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHADOWCONSTANTBIAS_OFFSET))(this, value);
		}

		::System::Single get_shadowObjectSizeBias()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHADOWOBJECTSIZEBIAS_OFFSET))(this);
		}

		::System::Void set_shadowObjectSizeBias(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHADOWOBJECTSIZEBIAS_OFFSET))(this, value);
		}

		::System::Boolean get_attenuate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_ATTENUATE_OFFSET))(this);
		}

		::System::Void set_attenuate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_ATTENUATE_OFFSET))(this, value);
		}

		::System::Byte get_vCMask()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_VCMASK_OFFSET))(this);
		}

		::System::Void set_vCMask(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_VCMASK_OFFSET))(this, value);
		}

		::System::Void UpdateLightData(::UnityEngine::Rendering::CRPLightInfo& lightData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPLightInfo&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_UPDATELIGHTDATA_OFFSET))(this, lightData);
		}

		::System::Void ResetLightData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_RESETLIGHTDATA_OFFSET))(this);
		}

		::System::Void UpdateLightDataCommon(::UnityEngine::Rendering::CRPLightInfoCommon& v)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPLightInfoCommon&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_UPDATELIGHTDATACOMMON_OFFSET))(this, v);
		}

		::System::Void UpdateLightMeshStencil(::UnityEngine::Rendering::CRPLightMeshStencil& v)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPLightMeshStencil&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_UPDATELIGHTMESHSTENCIL_OFFSET))(this, v);
		}

		::System::Void UpdateLightDataSpot(::UnityEngine::Rendering::CRPLightInfoCommon& v0, ::UnityEngine::Rendering::CRPLightInfoSpot& v1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPLightInfoCommon&, ::UnityEngine::Rendering::CRPLightInfoSpot&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_UPDATELIGHTDATASPOT_OFFSET))(this, v0, v1);
		}

		::System::Void UpdateLightDataLocal(::UnityEngine::Rendering::CRPLightInfoCommon& v0, ::UnityEngine::Rendering::CRPLightInfoLocal& v1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPLightInfoCommon&, ::UnityEngine::Rendering::CRPLightInfoLocal&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_UPDATELIGHTDATALOCAL_OFFSET))(this, v0, v1);
		}

		::System::Void UpdateLightDataLocal2(::UnityEngine::Rendering::CRPLightInfoLocal& v0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPLightInfoLocal&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_UPDATELIGHTDATALOCAL2_OFFSET))(this, v0);
		}

		::System::Void UpdateLightDataLocalSpot(::UnityEngine::Rendering::CRPLightInfoCommon& v0, ::UnityEngine::Rendering::CRPLightInfoLocal& v1, ::UnityEngine::Rendering::CRPLightInfoSpot& v2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPLightInfoCommon&, ::UnityEngine::Rendering::CRPLightInfoLocal&, ::UnityEngine::Rendering::CRPLightInfoSpot&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_UPDATELIGHTDATALOCALSPOT_OFFSET))(this, v0, v1, v2);
		}

		::System::Void UpdateLightDataArea(::UnityEngine::Rendering::CRPLightInfoCommon& v0, ::UnityEngine::Rendering::CRPLightInfoArea& v1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPLightInfoCommon&, ::UnityEngine::Rendering::CRPLightInfoArea&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_UPDATELIGHTDATAAREA_OFFSET))(this, v0, v1);
		}

		::System::Void UpdateLightDataDebug(::UnityEngine::Rendering::CRPLightDebugInfo& lightData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPLightDebugInfo&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_UPDATELIGHTDATADEBUG_OFFSET))(this, lightData);
		}

		::System::Void UpdateLightDataFade(::UnityEngine::Rendering::CRPLightInfoFade& v)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPLightInfoFade&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_UPDATELIGHTDATAFADE_OFFSET))(this, v);
		}

		::System::Void SetLightDistanceFadeCurve(::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLIGHTDISTANCEFADECURVE_OFFSET))(this, curve);
		}

		::System::Void SetNumLightClipPlane(::System::Int32 numClipPlane)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETNUMLIGHTCLIPPLANE_OFFSET))(this, numClipPlane);
		}

		::System::Void SetLightClipPlaneData(::System::Int32 index, ::UnityEngine::Vector3 localPos, ::UnityEngine::Quaternion localRot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLIGHTCLIPPLANEDATA_OFFSET))(this, index, localPos, localRot);
		}

		::System::Void SetLightClipPlaneFadeDistance(::System::Int32 index, ::System::Single distance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLIGHTCLIPPLANEFADEDISTANCE_OFFSET))(this, index, distance);
		}

		::System::Void UpdateLightAsyncLoadedData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_UPDATELIGHTASYNCLOADEDDATA_OFFSET))(this);
		}

		::System::Void SetGeometryShadow(::System::Collections::Generic::List_1<::UnityEngine::CRPRectShadowSerialize>* rectShadows)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::CRPRectShadowSerialize>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETGEOMETRYSHADOW_OFFSET))(this, rectShadows);
		}

		::System::Void SetGeometryAABB(::UnityEngine::Bounds& aabb)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETGEOMETRYAABB_OFFSET))(this, aabb);
		}

		static ::System::Void DoParticleLightEvent_Internal(::UnityEngine::Light* light, ::System::Int32 e)
		{
			return ((::System::Void(*)(::UnityEngine::Light*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_DOPARTICLELIGHTEVENT_INTERNAL_OFFSET))(light, e);
		}

		::System::Void get_color_Injected(::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_COLOR_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_color_Injected(::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_COLOR_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_boundingSphereOverride_Injected(::UnityEngine::Vector4& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_BOUNDINGSPHEREOVERRIDE_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_boundingSphereOverride_Injected(::UnityEngine::Vector4& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_BOUNDINGSPHEREOVERRIDE_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_shadowMatrixOverride_Injected(::UnityEngine::Matrix4x4& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHADOWMATRIXOVERRIDE_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_shadowMatrixOverride_Injected(::UnityEngine::Matrix4x4& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHADOWMATRIXOVERRIDE_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_bakingOutput_Injected(::UnityEngine::LightBakingOutput& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LightBakingOutput&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_BAKINGOUTPUT_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_bakingOutput_Injected(::UnityEngine::LightBakingOutput& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LightBakingOutput&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_BAKINGOUTPUT_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_areaSize_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_AREASIZE_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_areaSize_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_AREASIZE_INJECTED_OFFSET))(this, value);
		}

		::System::Void GetLinePoint_Injected(::System::Int32 index, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETLINEPOINT_INJECTED_OFFSET))(this, index, ret);
		}

		::System::Void SetLinePoint_Injected(::System::Int32 index, ::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLINEPOINT_INJECTED_OFFSET))(this, index, value);
		}

		::System::Void GetLineDirection_Injected(::System::Int32 index, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETLINEDIRECTION_INJECTED_OFFSET))(this, index, ret);
		}

		::System::Void SetLineDirection_Injected(::System::Int32 index, ::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLINEDIRECTION_INJECTED_OFFSET))(this, index, value);
		}

		::System::Void SetLightClipPlaneData_Injected(::System::Int32 index, ::UnityEngine::Vector3& localPos, ::UnityEngine::Quaternion& localRot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLIGHTCLIPPLANEDATA_INJECTED_OFFSET))(this, index, localPos, localRot);
		}
	};
}
