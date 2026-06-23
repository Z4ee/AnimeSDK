#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LightBakingOutput.h"
#include "unitysdk/UnityEngine/LightRenderMode.h"
#include "unitysdk/UnityEngine/LightShadowCasterMode.h"
#include "unitysdk/UnityEngine/LightShadowUpdateMode.h"
#include "unitysdk/UnityEngine/LightShadows.h"
#include "unitysdk/UnityEngine/LightShape.h"
#include "unitysdk/UnityEngine/LightType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rendering/ComputeQueueType.h"
#include "unitysdk/UnityEngine/Rendering/LightEvent.h"
#include "unitysdk/UnityEngine/Rendering/LightShadowResolution.h"
#include "unitysdk/UnityEngine/Rendering/ShadowMapPass.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Flare; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_LIGHT_ADDCOMMANDBUFFERASYNC_1_OFFSET UNITYSDK_OFFSET(0x1D7AB9C0)
#define UNITYENGINE_LIGHT_ADDCOMMANDBUFFERASYNC_OFFSET UNITYSDK_OFFSET(0x1D7AB9A0)
#define UNITYENGINE_LIGHT_ADDCOMMANDBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1D7AB990)
#define UNITYENGINE_LIGHT_ADDCOMMANDBUFFER_OFFSET UNITYSDK_OFFSET(0x1D7AB980)
#define UNITYENGINE_LIGHT_GETCOMMANDBUFFERS_OFFSET UNITYSDK_OFFSET(0x1D7ABA00)
#define UNITYENGINE_LIGHT_GETINDEPENDENTGICOLOR_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D7ABCF0)
#define UNITYENGINE_LIGHT_GETINDEPENDENTGICOLOR_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D7ABCA0)
#define UNITYENGINE_LIGHT_GETINDEPENDENTGICOLOR_OFFSET UNITYSDK_OFFSET(0x1D7ABC60)
#define UNITYENGINE_LIGHT_GETLIGHTBOUNCEINTENSITYTHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D7ABDB0)
#define UNITYENGINE_LIGHT_GETLIGHTBOUNCEINTENSITYTHREAD_OFFSET UNITYSDK_OFFSET(0x1D7ABDA0)
#define UNITYENGINE_LIGHT_GETLIGHTCOLORTHREADINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D7ABF50)
#define UNITYENGINE_LIGHT_GETLIGHTCOLORTHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D7ABEF0)
#define UNITYENGINE_LIGHT_GETLIGHTCOLORTHREAD_OFFSET UNITYSDK_OFFSET(0x1D7ABEB0)
#define UNITYENGINE_LIGHT_GETLIGHTINNERSPOTANGLETHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D7ABDF0)
#define UNITYENGINE_LIGHT_GETLIGHTINNERSPOTANGLETHREADTHREAD_OFFSET UNITYSDK_OFFSET(0x1D7ABDE0)
#define UNITYENGINE_LIGHT_GETLIGHTINTENSITYTHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D7ABE70)
#define UNITYENGINE_LIGHT_GETLIGHTINTENSITYTHREAD_OFFSET UNITYSDK_OFFSET(0x1D7ABE60)
#define UNITYENGINE_LIGHT_GETLIGHTRANGETHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D7ABD70)
#define UNITYENGINE_LIGHT_GETLIGHTRANGETHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1D7ABF30)
#define UNITYENGINE_LIGHT_GETLIGHTRANGETHREAD_OFFSET UNITYSDK_OFFSET(0x1D7ABD60)
#define UNITYENGINE_LIGHT_GETLIGHTSNONALLOC_OFFSET UNITYSDK_OFFSET(0x1D7ABAF0)
#define UNITYENGINE_LIGHT_GETLIGHTSPOTANGLETHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D7ABE30)
#define UNITYENGINE_LIGHT_GETLIGHTSPOTANGLETHREAD_OFFSET UNITYSDK_OFFSET(0x1D7ABE20)
#define UNITYENGINE_LIGHT_GETLIGHTS_OFFSET UNITYSDK_OFFSET(0x1D7ABAE0)
#define UNITYENGINE_LIGHT_GETUSEINDEPENDENTGICOLOR_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D7ABC50)
#define UNITYENGINE_LIGHT_GETUSEINDEPENDENTGICOLOR_OFFSET UNITYSDK_OFFSET(0x1D7ABC40)
#define UNITYENGINE_LIGHT_GET_ADDITIONALMONODATA_OFFSET UNITYSDK_OFFSET(0x1D7ABD00)
#define UNITYENGINE_LIGHT_GET_ATTENUATE_OFFSET UNITYSDK_OFFSET(0x1D7ABB40)
#define UNITYENGINE_LIGHT_GET_BAKEDINDEX_OFFSET UNITYSDK_OFFSET(0x1D7AB960)
#define UNITYENGINE_LIGHT_GET_BAKINGOUTPUT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D7AB780)
#define UNITYENGINE_LIGHT_GET_BAKINGOUTPUT_OFFSET UNITYSDK_OFFSET(0x1D7AB730)
#define UNITYENGINE_LIGHT_GET_BOUNCEINTENSITY_OFFSET UNITYSDK_OFFSET(0x1D7AB510)
#define UNITYENGINE_LIGHT_GET_BOUNDINGSPHEREOVERRIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D7AB590)
#define UNITYENGINE_LIGHT_GET_BOUNDINGSPHEREOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1D7AB550)
#define UNITYENGINE_LIGHT_GET_COLORTEMPERATURE_OFFSET UNITYSDK_OFFSET(0x1D7AB490)
#define UNITYENGINE_LIGHT_GET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D7AB460)
#define UNITYENGINE_LIGHT_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x1D7AB420)
#define UNITYENGINE_LIGHT_GET_COMMANDBUFFERCOUNT_OFFSET UNITYSDK_OFFSET(0x1D7ABA10)
#define UNITYENGINE_LIGHT_GET_COOKIESIZE_OFFSET UNITYSDK_OFFSET(0x1D7AB900)
#define UNITYENGINE_LIGHT_GET_COOKIE_OFFSET UNITYSDK_OFFSET(0x1D7AB920)
#define UNITYENGINE_LIGHT_GET_CULLINGMASK_OFFSET UNITYSDK_OFFSET(0x1D7AB7B0)
#define UNITYENGINE_LIGHT_GET_FLARE_OFFSET UNITYSDK_OFFSET(0x1D7AB710)
#define UNITYENGINE_LIGHT_GET_INNERSPOTANGLE_OFFSET UNITYSDK_OFFSET(0x1D7AB400)
#define UNITYENGINE_LIGHT_GET_INTENSITY_OFFSET UNITYSDK_OFFSET(0x1D7AB4F0)
#define UNITYENGINE_LIGHT_GET_LAYERSHADOWCULLDISTANCES_OFFSET UNITYSDK_OFFSET(0x1D7AB8E0)
#define UNITYENGINE_LIGHT_GET_LIGHTSHADOWCASTERMODE_OFFSET UNITYSDK_OFFSET(0x1D7AB7F0)
#define UNITYENGINE_LIGHT_GET_PIXELLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x1D7ABA20)
#define UNITYENGINE_LIGHT_GET_RANGE_OFFSET UNITYSDK_OFFSET(0x1D7AB6F0)
#define UNITYENGINE_LIGHT_GET_RENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1D7AB7D0)
#define UNITYENGINE_LIGHT_GET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x1D7AB940)
#define UNITYENGINE_LIGHT_GET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x1D7AB5E0)
#define UNITYENGINE_LIGHT_GET_SHADOWCONSTANTBIAS_OFFSET UNITYSDK_OFFSET(0x1D7ABB00)
#define UNITYENGINE_LIGHT_GET_SHADOWCUSTOMRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1D7AB5C0)
#define UNITYENGINE_LIGHT_GET_SHADOWMATRIXOVERRIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D7AB6C0)
#define UNITYENGINE_LIGHT_GET_SHADOWMATRIXOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1D7AB660)
#define UNITYENGINE_LIGHT_GET_SHADOWNEARPLANE_OFFSET UNITYSDK_OFFSET(0x1D7AB620)
#define UNITYENGINE_LIGHT_GET_SHADOWNORMALBIAS_OFFSET UNITYSDK_OFFSET(0x1D7AB600)
#define UNITYENGINE_LIGHT_GET_SHADOWOBJECTSIZEBIAS_OFFSET UNITYSDK_OFFSET(0x1D7ABB20)
#define UNITYENGINE_LIGHT_GET_SHADOWRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1D7AB880)
#define UNITYENGINE_LIGHT_GET_SHADOWSOFTNESSFADE_OFFSET UNITYSDK_OFFSET(0x1D7AB8C0)
#define UNITYENGINE_LIGHT_GET_SHADOWSOFTNESS_OFFSET UNITYSDK_OFFSET(0x1D7AB8A0)
#define UNITYENGINE_LIGHT_GET_SHADOWSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1D7AB860)
#define UNITYENGINE_LIGHT_GET_SHADOWS_OFFSET UNITYSDK_OFFSET(0x1D7AB820)
#define UNITYENGINE_LIGHT_GET_SHADOWUPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1D7AB840)
#define UNITYENGINE_LIGHT_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1D7AB3C0)
#define UNITYENGINE_LIGHT_GET_SHOULDCULLLIGHT_OFFSET UNITYSDK_OFFSET(0x1D7ABD20)
#define UNITYENGINE_LIGHT_GET_SPOTANGLE_OFFSET UNITYSDK_OFFSET(0x1D7AB3E0)
#define UNITYENGINE_LIGHT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1D7AB3A0)
#define UNITYENGINE_LIGHT_GET_USEBAKEDPROJECTION_OFFSET UNITYSDK_OFFSET(0x1D7AB4D0)
#define UNITYENGINE_LIGHT_GET_USEBOUNDINGSPHEREOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1D7AB530)
#define UNITYENGINE_LIGHT_GET_USECOLORTEMPERATURE_OFFSET UNITYSDK_OFFSET(0x1D7AB4B0)
#define UNITYENGINE_LIGHT_GET_USESHADOWMATRIXOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1D7AB640)
#define UNITYENGINE_LIGHT_REMOVEALLCOMMANDBUFFERS_OFFSET UNITYSDK_OFFSET(0x1D7AB9F0)
#define UNITYENGINE_LIGHT_REMOVECOMMANDBUFFERS_OFFSET UNITYSDK_OFFSET(0x1D7AB9E0)
#define UNITYENGINE_LIGHT_REMOVECOMMANDBUFFER_OFFSET UNITYSDK_OFFSET(0x1D7AB9D0)
#define UNITYENGINE_LIGHT_RESET_OFFSET UNITYSDK_OFFSET(0x1D7AB810)
#define UNITYENGINE_LIGHT_SETHIZBOUNDS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D7ABBC0)
#define UNITYENGINE_LIGHT_SETHIZBOUNDS_OFFSET UNITYSDK_OFFSET(0x1D7ABB60)
#define UNITYENGINE_LIGHT_SETINDEPENDENTGICOLOR_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D7ABCE0)
#define UNITYENGINE_LIGHT_SETINDEPENDENTGICOLOR_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D7ABC30)
#define UNITYENGINE_LIGHT_SETINDEPENDENTGICOLOR_OFFSET UNITYSDK_OFFSET(0x1D7ABC10)
#define UNITYENGINE_LIGHT_SETINTENSITYFADE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D7ABBE0)
#define UNITYENGINE_LIGHT_SETINTENSITYFADE_OFFSET UNITYSDK_OFFSET(0x1D7ABBD0)
#define UNITYENGINE_LIGHT_SETLIGHTBOUNCEINTENSITYTHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D7ABD90)
#define UNITYENGINE_LIGHT_SETLIGHTBOUNCEINTENSITYTHREAD_OFFSET UNITYSDK_OFFSET(0x1D7ABD80)
#define UNITYENGINE_LIGHT_SETLIGHTCOLORTHREADINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D7ABF40)
#define UNITYENGINE_LIGHT_SETLIGHTCOLORTHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D7ABEA0)
#define UNITYENGINE_LIGHT_SETLIGHTCOLORTHREAD_OFFSET UNITYSDK_OFFSET(0x1D7ABE80)
#define UNITYENGINE_LIGHT_SETLIGHTINNERSPOTANGLETHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D7ABDD0)
#define UNITYENGINE_LIGHT_SETLIGHTINNERSPOTANGLETHREAD_OFFSET UNITYSDK_OFFSET(0x1D7ABDC0)
#define UNITYENGINE_LIGHT_SETLIGHTINTENSITYTHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D7ABE50)
#define UNITYENGINE_LIGHT_SETLIGHTINTENSITYTHREAD_OFFSET UNITYSDK_OFFSET(0x1D7ABE40)
#define UNITYENGINE_LIGHT_SETLIGHTRANGETHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D7ABD50)
#define UNITYENGINE_LIGHT_SETLIGHTRANGETHREAD_OFFSET UNITYSDK_OFFSET(0x1D7ABD40)
#define UNITYENGINE_LIGHT_SETLIGHTSPOTANGLETHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D7ABE10)
#define UNITYENGINE_LIGHT_SETLIGHTSPOTANGLETHREAD_OFFSET UNITYSDK_OFFSET(0x1D7ABE00)
#define UNITYENGINE_LIGHT_SETUSEINDEPENDENTGICOLOR_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D7ABC00)
#define UNITYENGINE_LIGHT_SETUSEINDEPENDENTGICOLOR_OFFSET UNITYSDK_OFFSET(0x1D7ABBF0)
#define UNITYENGINE_LIGHT_SET_ADDITIONALMONODATA_OFFSET UNITYSDK_OFFSET(0x1D7ABD10)
#define UNITYENGINE_LIGHT_SET_ATTENUATE_OFFSET UNITYSDK_OFFSET(0x1D7ABB50)
#define UNITYENGINE_LIGHT_SET_BAKEDINDEX_OFFSET UNITYSDK_OFFSET(0x1D7AB970)
#define UNITYENGINE_LIGHT_SET_BAKINGOUTPUT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D7AB7A0)
#define UNITYENGINE_LIGHT_SET_BAKINGOUTPUT_OFFSET UNITYSDK_OFFSET(0x1D7AB790)
#define UNITYENGINE_LIGHT_SET_BOUNCEINTENSITY_OFFSET UNITYSDK_OFFSET(0x1D7AB520)
#define UNITYENGINE_LIGHT_SET_BOUNDINGSPHEREOVERRIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D7AB5B0)
#define UNITYENGINE_LIGHT_SET_BOUNDINGSPHEREOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1D7AB5A0)
#define UNITYENGINE_LIGHT_SET_COLORTEMPERATURE_OFFSET UNITYSDK_OFFSET(0x1D7AB4A0)
#define UNITYENGINE_LIGHT_SET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D7AB480)
#define UNITYENGINE_LIGHT_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x1D7AB470)
#define UNITYENGINE_LIGHT_SET_COOKIESIZE_OFFSET UNITYSDK_OFFSET(0x1D7AB910)
#define UNITYENGINE_LIGHT_SET_COOKIE_OFFSET UNITYSDK_OFFSET(0x1D7AB930)
#define UNITYENGINE_LIGHT_SET_CULLINGMASK_OFFSET UNITYSDK_OFFSET(0x1D7AB7C0)
#define UNITYENGINE_LIGHT_SET_FLARE_OFFSET UNITYSDK_OFFSET(0x1D7AB720)
#define UNITYENGINE_LIGHT_SET_INNERSPOTANGLE_OFFSET UNITYSDK_OFFSET(0x1D7AB410)
#define UNITYENGINE_LIGHT_SET_INTENSITY_OFFSET UNITYSDK_OFFSET(0x1D7AB500)
#define UNITYENGINE_LIGHT_SET_LAYERSHADOWCULLDISTANCES_OFFSET UNITYSDK_OFFSET(0x1D7AB8F0)
#define UNITYENGINE_LIGHT_SET_LIGHTSHADOWCASTERMODE_OFFSET UNITYSDK_OFFSET(0x1D7AB800)
#define UNITYENGINE_LIGHT_SET_PIXELLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x1D7ABA80)
#define UNITYENGINE_LIGHT_SET_RANGE_OFFSET UNITYSDK_OFFSET(0x1D7AB700)
#define UNITYENGINE_LIGHT_SET_RENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1D7AB7E0)
#define UNITYENGINE_LIGHT_SET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x1D7AB950)
#define UNITYENGINE_LIGHT_SET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x1D7AB5F0)
#define UNITYENGINE_LIGHT_SET_SHADOWCONSTANTBIAS_OFFSET UNITYSDK_OFFSET(0x1D7ABB10)
#define UNITYENGINE_LIGHT_SET_SHADOWCUSTOMRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1D7AB5D0)
#define UNITYENGINE_LIGHT_SET_SHADOWMATRIXOVERRIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D7AB6E0)
#define UNITYENGINE_LIGHT_SET_SHADOWMATRIXOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1D7AB6D0)
#define UNITYENGINE_LIGHT_SET_SHADOWNEARPLANE_OFFSET UNITYSDK_OFFSET(0x1D7AB630)
#define UNITYENGINE_LIGHT_SET_SHADOWNORMALBIAS_OFFSET UNITYSDK_OFFSET(0x1D7AB610)
#define UNITYENGINE_LIGHT_SET_SHADOWOBJECTSIZEBIAS_OFFSET UNITYSDK_OFFSET(0x1D7ABB30)
#define UNITYENGINE_LIGHT_SET_SHADOWRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1D7AB890)
#define UNITYENGINE_LIGHT_SET_SHADOWSOFTNESSFADE_OFFSET UNITYSDK_OFFSET(0x1D7AB8D0)
#define UNITYENGINE_LIGHT_SET_SHADOWSOFTNESS_OFFSET UNITYSDK_OFFSET(0x1D7AB8B0)
#define UNITYENGINE_LIGHT_SET_SHADOWSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1D7AB870)
#define UNITYENGINE_LIGHT_SET_SHADOWS_OFFSET UNITYSDK_OFFSET(0x1D7AB830)
#define UNITYENGINE_LIGHT_SET_SHADOWUPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1D7AB850)
#define UNITYENGINE_LIGHT_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1D7AB3D0)
#define UNITYENGINE_LIGHT_SET_SHOULDCULLLIGHT_OFFSET UNITYSDK_OFFSET(0x1D7ABD30)
#define UNITYENGINE_LIGHT_SET_SPOTANGLE_OFFSET UNITYSDK_OFFSET(0x1D7AB3F0)
#define UNITYENGINE_LIGHT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1D7AB3B0)
#define UNITYENGINE_LIGHT_SET_USEBAKEDPROJECTION_OFFSET UNITYSDK_OFFSET(0x1D7AB4E0)
#define UNITYENGINE_LIGHT_SET_USEBOUNDINGSPHEREOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1D7AB540)
#define UNITYENGINE_LIGHT_SET_USECOLORTEMPERATURE_OFFSET UNITYSDK_OFFSET(0x1D7AB4C0)
#define UNITYENGINE_LIGHT_SET_USESHADOWMATRIXOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1D7AB650)
#define UNITYENGINE_LIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7ABF60)

namespace UnityEngine
{
	inline static constexpr unsigned int Light_TypeDefinitionIndex = 5210;

	class Light : public ::UnityEngine::Behaviour
	{
	public:
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

		::System::Boolean get_useBakedProjection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_USEBAKEDPROJECTION_OFFSET))(this);
		}

		::System::Void set_useBakedProjection(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_USEBAKEDPROJECTION_OFFSET))(this, value);
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

		::UnityEngine::LightShadowUpdateMode get_shadowUpdateMode()
		{
			return ((::UnityEngine::LightShadowUpdateMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHADOWUPDATEMODE_OFFSET))(this);
		}

		::System::Void set_shadowUpdateMode(::UnityEngine::LightShadowUpdateMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LightShadowUpdateMode))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHADOWUPDATEMODE_OFFSET))(this, value);
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

		static ::System::Void GetLightsNonAlloc(::UnityEngine::LightType type, ::System::Int32 layer, ::System::Collections::Generic::List_1<::UnityEngine::Light*>* outLights)
		{
			return ((::System::Void(*)(::UnityEngine::LightType, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Light*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETLIGHTSNONALLOC_OFFSET))(type, layer, outLights);
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

		::System::Void SetHizBounds(::Il2CppArray<::UnityEngine::Bounds>* aabbs)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Bounds>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETHIZBOUNDS_OFFSET))(this, aabbs);
		}

		::System::Void SetIntensityFade(::System::Single intensityFade)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETINTENSITYFADE_OFFSET))(this, intensityFade);
		}

		::System::Void SetHizBounds_Internal(::Il2CppArray<::UnityEngine::Bounds>* aabbs)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Bounds>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETHIZBOUNDS_INTERNAL_OFFSET))(this, aabbs);
		}

		::System::Void SetIntensityFade_Internal(::System::Single intensityFade)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETINTENSITYFADE_INTERNAL_OFFSET))(this, intensityFade);
		}

		::System::Void SetUseIndependentGIColor(::System::Boolean useIndependentGIColor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETUSEINDEPENDENTGICOLOR_OFFSET))(this, useIndependentGIColor);
		}

		::System::Void SetIndependentGIColor(::UnityEngine::Color independentGIColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETINDEPENDENTGICOLOR_OFFSET))(this, independentGIColor);
		}

		::System::Boolean GetUseIndependentGIColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETUSEINDEPENDENTGICOLOR_OFFSET))(this);
		}

		::UnityEngine::Color GetIndependentGIColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETINDEPENDENTGICOLOR_OFFSET))(this);
		}

		::System::Void SetUseIndependentGIColor_Internal(::System::Boolean useIndependentGIColor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETUSEINDEPENDENTGICOLOR_INTERNAL_OFFSET))(this, useIndependentGIColor);
		}

		::System::Void SetIndependentGIColor_Internal(::UnityEngine::Color independentGIColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETINDEPENDENTGICOLOR_INTERNAL_OFFSET))(this, independentGIColor);
		}

		::System::Boolean GetUseIndependentGIColor_Internal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETUSEINDEPENDENTGICOLOR_INTERNAL_OFFSET))(this);
		}

		::UnityEngine::Color GetIndependentGIColor_Internal()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETINDEPENDENTGICOLOR_INTERNAL_OFFSET))(this);
		}

		::UnityEngine::Behaviour* get_additionalMonoData()
		{
			return ((::UnityEngine::Behaviour*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_ADDITIONALMONODATA_OFFSET))(this);
		}

		::System::Void set_additionalMonoData(::UnityEngine::Behaviour* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Behaviour*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_ADDITIONALMONODATA_OFFSET))(this, value);
		}

		::System::Boolean get_shouldCullLight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GET_SHOULDCULLLIGHT_OFFSET))(this);
		}

		::System::Void set_shouldCullLight(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SET_SHOULDCULLLIGHT_OFFSET))(this, value);
		}

		::System::Void SetLightRangeThread(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLIGHTRANGETHREAD_OFFSET))(this, value);
		}

		::System::Single GetLightRangeThread()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETLIGHTRANGETHREAD_OFFSET))(this);
		}

		::System::Void SetLightBounceIntensityThread(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLIGHTBOUNCEINTENSITYTHREAD_OFFSET))(this, value);
		}

		::System::Single GetLightBounceIntensityThread()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETLIGHTBOUNCEINTENSITYTHREAD_OFFSET))(this);
		}

		::System::Void SetLightInnerSpotAngleThread(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLIGHTINNERSPOTANGLETHREAD_OFFSET))(this, value);
		}

		::System::Single GetLightInnerSpotAngleThreadThread()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETLIGHTINNERSPOTANGLETHREADTHREAD_OFFSET))(this);
		}

		::System::Void SetLightSpotAngleThread(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLIGHTSPOTANGLETHREAD_OFFSET))(this, value);
		}

		::System::Single GetLightSpotAngleThread()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETLIGHTSPOTANGLETHREAD_OFFSET))(this);
		}

		::System::Void SetLightIntensityThread(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLIGHTINTENSITYTHREAD_OFFSET))(this, value);
		}

		::System::Single GetLightIntensityThread()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETLIGHTINTENSITYTHREAD_OFFSET))(this);
		}

		::System::Void SetLightColorThread(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLIGHTCOLORTHREAD_OFFSET))(this, value);
		}

		::UnityEngine::Color GetLightColorThread()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETLIGHTCOLORTHREAD_OFFSET))(this);
		}

		static ::System::Single GetLightRangeThreadSafe(::System::Int32 lightInstanceId)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETLIGHTRANGETHREADSAFE_OFFSET))(lightInstanceId);
		}

		static ::System::Void SetLightRangeThreadInternal(::UnityEngine::Light* self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Light*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLIGHTRANGETHREADINTERNAL_OFFSET))(self, value);
		}

		static ::System::Single GetLightRangeThreadInternal(::UnityEngine::Light* self)
		{
			return ((::System::Single(*)(::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETLIGHTRANGETHREADINTERNAL_OFFSET))(self);
		}

		static ::System::Void SetLightBounceIntensityThreadInternal(::UnityEngine::Light* self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Light*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLIGHTBOUNCEINTENSITYTHREADINTERNAL_OFFSET))(self, value);
		}

		static ::System::Single GetLightBounceIntensityThreadInternal(::UnityEngine::Light* self)
		{
			return ((::System::Single(*)(::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETLIGHTBOUNCEINTENSITYTHREADINTERNAL_OFFSET))(self);
		}

		static ::System::Void SetLightInnerSpotAngleThreadInternal(::UnityEngine::Light* self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Light*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLIGHTINNERSPOTANGLETHREADINTERNAL_OFFSET))(self, value);
		}

		static ::System::Single GetLightInnerSpotAngleThreadInternal(::UnityEngine::Light* self)
		{
			return ((::System::Single(*)(::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETLIGHTINNERSPOTANGLETHREADINTERNAL_OFFSET))(self);
		}

		static ::System::Void SetLightSpotAngleThreadInternal(::UnityEngine::Light* self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Light*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLIGHTSPOTANGLETHREADINTERNAL_OFFSET))(self, value);
		}

		static ::System::Single GetLightSpotAngleThreadInternal(::UnityEngine::Light* self)
		{
			return ((::System::Single(*)(::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETLIGHTSPOTANGLETHREADINTERNAL_OFFSET))(self);
		}

		static ::System::Void SetLightIntensityThreadInternal(::UnityEngine::Light* self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Light*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLIGHTINTENSITYTHREADINTERNAL_OFFSET))(self, value);
		}

		static ::System::Single GetLightIntensityThreadInternal(::UnityEngine::Light* self)
		{
			return ((::System::Single(*)(::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETLIGHTINTENSITYTHREADINTERNAL_OFFSET))(self);
		}

		static ::System::Void SetLightColorThreadInternal(::UnityEngine::Light* self, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Light*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLIGHTCOLORTHREADINTERNAL_OFFSET))(self, color);
		}

		static ::UnityEngine::Color GetLightColorThreadInternal(::UnityEngine::Light* self)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETLIGHTCOLORTHREADINTERNAL_OFFSET))(self);
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

		::System::Void SetIndependentGIColor_Internal_Injected(::UnityEngine::Color& independentGIColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETINDEPENDENTGICOLOR_INTERNAL_INJECTED_OFFSET))(this, independentGIColor);
		}

		::System::Void GetIndependentGIColor_Internal_Injected(::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETINDEPENDENTGICOLOR_INTERNAL_INJECTED_OFFSET))(this, ret);
		}

		static ::System::Void SetLightColorThreadInternal_Injected(::UnityEngine::Light* self, ::UnityEngine::Color& color)
		{
			return ((::System::Void(*)(::UnityEngine::Light*, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_SETLIGHTCOLORTHREADINTERNAL_INJECTED_OFFSET))(self, color);
		}

		static ::System::Void GetLightColorThreadInternal_Injected(::UnityEngine::Light* self, ::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Light*, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHT_GETLIGHTCOLORTHREADINTERNAL_INJECTED_OFFSET))(self, ret);
		}
	};
}
