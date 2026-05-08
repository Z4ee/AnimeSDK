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

#define UNITYENGINE_LIGHT_ADDCOMMANDBUFFERASYNC_1_OFFSET UNITYSDK_OFFSET(0x1B48E940)
#define UNITYENGINE_LIGHT_ADDCOMMANDBUFFERASYNC_OFFSET UNITYSDK_OFFSET(0x1B48E920)
#define UNITYENGINE_LIGHT_ADDCOMMANDBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1B48E910)
#define UNITYENGINE_LIGHT_ADDCOMMANDBUFFER_OFFSET UNITYSDK_OFFSET(0x1B48E900)
#define UNITYENGINE_LIGHT_GETCOMMANDBUFFERS_OFFSET UNITYSDK_OFFSET(0x1B48E980)
#define UNITYENGINE_LIGHT_GETINDEPENDENTGICOLOR_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B48EC70)
#define UNITYENGINE_LIGHT_GETINDEPENDENTGICOLOR_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B48EC20)
#define UNITYENGINE_LIGHT_GETINDEPENDENTGICOLOR_OFFSET UNITYSDK_OFFSET(0x1B48EBE0)
#define UNITYENGINE_LIGHT_GETLIGHTBOUNCEINTENSITYTHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B48ED30)
#define UNITYENGINE_LIGHT_GETLIGHTBOUNCEINTENSITYTHREAD_OFFSET UNITYSDK_OFFSET(0x1B48ED20)
#define UNITYENGINE_LIGHT_GETLIGHTCOLORTHREADINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B48EEC0)
#define UNITYENGINE_LIGHT_GETLIGHTCOLORTHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B48EE70)
#define UNITYENGINE_LIGHT_GETLIGHTCOLORTHREAD_OFFSET UNITYSDK_OFFSET(0x1B48EE30)
#define UNITYENGINE_LIGHT_GETLIGHTINNERSPOTANGLETHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B48ED70)
#define UNITYENGINE_LIGHT_GETLIGHTINNERSPOTANGLETHREADTHREAD_OFFSET UNITYSDK_OFFSET(0x1B48ED60)
#define UNITYENGINE_LIGHT_GETLIGHTINTENSITYTHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B48EDF0)
#define UNITYENGINE_LIGHT_GETLIGHTINTENSITYTHREAD_OFFSET UNITYSDK_OFFSET(0x1B48EDE0)
#define UNITYENGINE_LIGHT_GETLIGHTRANGETHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B48ECF0)
#define UNITYENGINE_LIGHT_GETLIGHTRANGETHREAD_OFFSET UNITYSDK_OFFSET(0x1B48ECE0)
#define UNITYENGINE_LIGHT_GETLIGHTSNONALLOC_OFFSET UNITYSDK_OFFSET(0x1B48EA70)
#define UNITYENGINE_LIGHT_GETLIGHTSPOTANGLETHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B48EDB0)
#define UNITYENGINE_LIGHT_GETLIGHTSPOTANGLETHREAD_OFFSET UNITYSDK_OFFSET(0x1B48EDA0)
#define UNITYENGINE_LIGHT_GETLIGHTS_OFFSET UNITYSDK_OFFSET(0x1B48EA60)
#define UNITYENGINE_LIGHT_GETUSEINDEPENDENTGICOLOR_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B48EBD0)
#define UNITYENGINE_LIGHT_GETUSEINDEPENDENTGICOLOR_OFFSET UNITYSDK_OFFSET(0x1B48EBC0)
#define UNITYENGINE_LIGHT_GET_ADDITIONALMONODATA_OFFSET UNITYSDK_OFFSET(0x1B48EC80)
#define UNITYENGINE_LIGHT_GET_ATTENUATE_OFFSET UNITYSDK_OFFSET(0x1B48EAC0)
#define UNITYENGINE_LIGHT_GET_BAKEDINDEX_OFFSET UNITYSDK_OFFSET(0x1B48E8E0)
#define UNITYENGINE_LIGHT_GET_BAKINGOUTPUT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B48E700)
#define UNITYENGINE_LIGHT_GET_BAKINGOUTPUT_OFFSET UNITYSDK_OFFSET(0x1B48E6B0)
#define UNITYENGINE_LIGHT_GET_BOUNCEINTENSITY_OFFSET UNITYSDK_OFFSET(0x1B48E490)
#define UNITYENGINE_LIGHT_GET_BOUNDINGSPHEREOVERRIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B48E510)
#define UNITYENGINE_LIGHT_GET_BOUNDINGSPHEREOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1B48E4D0)
#define UNITYENGINE_LIGHT_GET_COLORTEMPERATURE_OFFSET UNITYSDK_OFFSET(0x1B48E430)
#define UNITYENGINE_LIGHT_GET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B48E400)
#define UNITYENGINE_LIGHT_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x1B48E3C0)
#define UNITYENGINE_LIGHT_GET_COMMANDBUFFERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B48E990)
#define UNITYENGINE_LIGHT_GET_COOKIESIZE_OFFSET UNITYSDK_OFFSET(0x1B48E880)
#define UNITYENGINE_LIGHT_GET_COOKIE_OFFSET UNITYSDK_OFFSET(0x1B48E8A0)
#define UNITYENGINE_LIGHT_GET_CULLINGMASK_OFFSET UNITYSDK_OFFSET(0x1B48E730)
#define UNITYENGINE_LIGHT_GET_FLARE_OFFSET UNITYSDK_OFFSET(0x1B48E690)
#define UNITYENGINE_LIGHT_GET_INNERSPOTANGLE_OFFSET UNITYSDK_OFFSET(0x1B48E3A0)
#define UNITYENGINE_LIGHT_GET_INTENSITY_OFFSET UNITYSDK_OFFSET(0x1B48E470)
#define UNITYENGINE_LIGHT_GET_LAYERSHADOWCULLDISTANCES_OFFSET UNITYSDK_OFFSET(0x1B48E860)
#define UNITYENGINE_LIGHT_GET_LIGHTSHADOWCASTERMODE_OFFSET UNITYSDK_OFFSET(0x1B48E770)
#define UNITYENGINE_LIGHT_GET_PIXELLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x1B48E9A0)
#define UNITYENGINE_LIGHT_GET_RANGE_OFFSET UNITYSDK_OFFSET(0x1B48E670)
#define UNITYENGINE_LIGHT_GET_RENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1B48E750)
#define UNITYENGINE_LIGHT_GET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x1B48E8C0)
#define UNITYENGINE_LIGHT_GET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x1B48E560)
#define UNITYENGINE_LIGHT_GET_SHADOWCONSTANTBIAS_OFFSET UNITYSDK_OFFSET(0x1B48EA80)
#define UNITYENGINE_LIGHT_GET_SHADOWCUSTOMRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B48E540)
#define UNITYENGINE_LIGHT_GET_SHADOWMATRIXOVERRIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B48E640)
#define UNITYENGINE_LIGHT_GET_SHADOWMATRIXOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1B48E5E0)
#define UNITYENGINE_LIGHT_GET_SHADOWNEARPLANE_OFFSET UNITYSDK_OFFSET(0x1B48E5A0)
#define UNITYENGINE_LIGHT_GET_SHADOWNORMALBIAS_OFFSET UNITYSDK_OFFSET(0x1B48E580)
#define UNITYENGINE_LIGHT_GET_SHADOWOBJECTSIZEBIAS_OFFSET UNITYSDK_OFFSET(0x1B48EAA0)
#define UNITYENGINE_LIGHT_GET_SHADOWRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B48E800)
#define UNITYENGINE_LIGHT_GET_SHADOWSOFTNESSFADE_OFFSET UNITYSDK_OFFSET(0x1B48E840)
#define UNITYENGINE_LIGHT_GET_SHADOWSOFTNESS_OFFSET UNITYSDK_OFFSET(0x1B48E820)
#define UNITYENGINE_LIGHT_GET_SHADOWSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1B48E7E0)
#define UNITYENGINE_LIGHT_GET_SHADOWS_OFFSET UNITYSDK_OFFSET(0x1B48E7A0)
#define UNITYENGINE_LIGHT_GET_SHADOWUPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1B48E7C0)
#define UNITYENGINE_LIGHT_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1B48E360)
#define UNITYENGINE_LIGHT_GET_SHOULDCULLLIGHT_OFFSET UNITYSDK_OFFSET(0x1B48ECA0)
#define UNITYENGINE_LIGHT_GET_SPOTANGLE_OFFSET UNITYSDK_OFFSET(0x1B48E380)
#define UNITYENGINE_LIGHT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B48E340)
#define UNITYENGINE_LIGHT_GET_USEBOUNDINGSPHEREOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1B48E4B0)
#define UNITYENGINE_LIGHT_GET_USECOLORTEMPERATURE_OFFSET UNITYSDK_OFFSET(0x1B48E450)
#define UNITYENGINE_LIGHT_GET_USESHADOWMATRIXOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1B48E5C0)
#define UNITYENGINE_LIGHT_REMOVEALLCOMMANDBUFFERS_OFFSET UNITYSDK_OFFSET(0x1B48E970)
#define UNITYENGINE_LIGHT_REMOVECOMMANDBUFFERS_OFFSET UNITYSDK_OFFSET(0x1B48E960)
#define UNITYENGINE_LIGHT_REMOVECOMMANDBUFFER_OFFSET UNITYSDK_OFFSET(0x1B48E950)
#define UNITYENGINE_LIGHT_RESET_OFFSET UNITYSDK_OFFSET(0x1B48E790)
#define UNITYENGINE_LIGHT_SETHIZBOUNDS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B48EB40)
#define UNITYENGINE_LIGHT_SETHIZBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B48EAE0)
#define UNITYENGINE_LIGHT_SETINDEPENDENTGICOLOR_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B48EC60)
#define UNITYENGINE_LIGHT_SETINDEPENDENTGICOLOR_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B48EBB0)
#define UNITYENGINE_LIGHT_SETINDEPENDENTGICOLOR_OFFSET UNITYSDK_OFFSET(0x1B48EB90)
#define UNITYENGINE_LIGHT_SETINTENSITYFADE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B48EB60)
#define UNITYENGINE_LIGHT_SETINTENSITYFADE_OFFSET UNITYSDK_OFFSET(0x1B48EB50)
#define UNITYENGINE_LIGHT_SETLIGHTBOUNCEINTENSITYTHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B48ED10)
#define UNITYENGINE_LIGHT_SETLIGHTBOUNCEINTENSITYTHREAD_OFFSET UNITYSDK_OFFSET(0x1B48ED00)
#define UNITYENGINE_LIGHT_SETLIGHTCOLORTHREADINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B48EEB0)
#define UNITYENGINE_LIGHT_SETLIGHTCOLORTHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B48EE20)
#define UNITYENGINE_LIGHT_SETLIGHTCOLORTHREAD_OFFSET UNITYSDK_OFFSET(0x1B48EE00)
#define UNITYENGINE_LIGHT_SETLIGHTINNERSPOTANGLETHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B48ED50)
#define UNITYENGINE_LIGHT_SETLIGHTINNERSPOTANGLETHREAD_OFFSET UNITYSDK_OFFSET(0x1B48ED40)
#define UNITYENGINE_LIGHT_SETLIGHTINTENSITYTHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B48EDD0)
#define UNITYENGINE_LIGHT_SETLIGHTINTENSITYTHREAD_OFFSET UNITYSDK_OFFSET(0x1B48EDC0)
#define UNITYENGINE_LIGHT_SETLIGHTRANGETHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B48ECD0)
#define UNITYENGINE_LIGHT_SETLIGHTRANGETHREAD_OFFSET UNITYSDK_OFFSET(0x1B48ECC0)
#define UNITYENGINE_LIGHT_SETLIGHTSPOTANGLETHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B48ED90)
#define UNITYENGINE_LIGHT_SETLIGHTSPOTANGLETHREAD_OFFSET UNITYSDK_OFFSET(0x1B48ED80)
#define UNITYENGINE_LIGHT_SETUSEINDEPENDENTGICOLOR_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B48EB80)
#define UNITYENGINE_LIGHT_SETUSEINDEPENDENTGICOLOR_OFFSET UNITYSDK_OFFSET(0x1B48EB70)
#define UNITYENGINE_LIGHT_SET_ADDITIONALMONODATA_OFFSET UNITYSDK_OFFSET(0x1B48EC90)
#define UNITYENGINE_LIGHT_SET_ATTENUATE_OFFSET UNITYSDK_OFFSET(0x1B48EAD0)
#define UNITYENGINE_LIGHT_SET_BAKEDINDEX_OFFSET UNITYSDK_OFFSET(0x1B48E8F0)
#define UNITYENGINE_LIGHT_SET_BAKINGOUTPUT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B48E720)
#define UNITYENGINE_LIGHT_SET_BAKINGOUTPUT_OFFSET UNITYSDK_OFFSET(0x1B48E710)
#define UNITYENGINE_LIGHT_SET_BOUNCEINTENSITY_OFFSET UNITYSDK_OFFSET(0x1B48E4A0)
#define UNITYENGINE_LIGHT_SET_BOUNDINGSPHEREOVERRIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B48E530)
#define UNITYENGINE_LIGHT_SET_BOUNDINGSPHEREOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1B48E520)
#define UNITYENGINE_LIGHT_SET_COLORTEMPERATURE_OFFSET UNITYSDK_OFFSET(0x1B48E440)
#define UNITYENGINE_LIGHT_SET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B48E420)
#define UNITYENGINE_LIGHT_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x1B48E410)
#define UNITYENGINE_LIGHT_SET_COOKIESIZE_OFFSET UNITYSDK_OFFSET(0x1B48E890)
#define UNITYENGINE_LIGHT_SET_COOKIE_OFFSET UNITYSDK_OFFSET(0x1B48E8B0)
#define UNITYENGINE_LIGHT_SET_CULLINGMASK_OFFSET UNITYSDK_OFFSET(0x1B48E740)
#define UNITYENGINE_LIGHT_SET_FLARE_OFFSET UNITYSDK_OFFSET(0x1B48E6A0)
#define UNITYENGINE_LIGHT_SET_INNERSPOTANGLE_OFFSET UNITYSDK_OFFSET(0x1B48E3B0)
#define UNITYENGINE_LIGHT_SET_INTENSITY_OFFSET UNITYSDK_OFFSET(0x1B48E480)
#define UNITYENGINE_LIGHT_SET_LAYERSHADOWCULLDISTANCES_OFFSET UNITYSDK_OFFSET(0x1B48E870)
#define UNITYENGINE_LIGHT_SET_LIGHTSHADOWCASTERMODE_OFFSET UNITYSDK_OFFSET(0x1B48E780)
#define UNITYENGINE_LIGHT_SET_PIXELLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x1B48EA00)
#define UNITYENGINE_LIGHT_SET_RANGE_OFFSET UNITYSDK_OFFSET(0x1B48E680)
#define UNITYENGINE_LIGHT_SET_RENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1B48E760)
#define UNITYENGINE_LIGHT_SET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x1B48E8D0)
#define UNITYENGINE_LIGHT_SET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x1B48E570)
#define UNITYENGINE_LIGHT_SET_SHADOWCONSTANTBIAS_OFFSET UNITYSDK_OFFSET(0x1B48EA90)
#define UNITYENGINE_LIGHT_SET_SHADOWCUSTOMRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B48E550)
#define UNITYENGINE_LIGHT_SET_SHADOWMATRIXOVERRIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B48E660)
#define UNITYENGINE_LIGHT_SET_SHADOWMATRIXOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1B48E650)
#define UNITYENGINE_LIGHT_SET_SHADOWNEARPLANE_OFFSET UNITYSDK_OFFSET(0x1B48E5B0)
#define UNITYENGINE_LIGHT_SET_SHADOWNORMALBIAS_OFFSET UNITYSDK_OFFSET(0x1B48E590)
#define UNITYENGINE_LIGHT_SET_SHADOWOBJECTSIZEBIAS_OFFSET UNITYSDK_OFFSET(0x1B48EAB0)
#define UNITYENGINE_LIGHT_SET_SHADOWRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B48E810)
#define UNITYENGINE_LIGHT_SET_SHADOWSOFTNESSFADE_OFFSET UNITYSDK_OFFSET(0x1B48E850)
#define UNITYENGINE_LIGHT_SET_SHADOWSOFTNESS_OFFSET UNITYSDK_OFFSET(0x1B48E830)
#define UNITYENGINE_LIGHT_SET_SHADOWSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1B48E7F0)
#define UNITYENGINE_LIGHT_SET_SHADOWS_OFFSET UNITYSDK_OFFSET(0x1B48E7B0)
#define UNITYENGINE_LIGHT_SET_SHADOWUPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1B48E7D0)
#define UNITYENGINE_LIGHT_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1B48E370)
#define UNITYENGINE_LIGHT_SET_SHOULDCULLLIGHT_OFFSET UNITYSDK_OFFSET(0x1B48ECB0)
#define UNITYENGINE_LIGHT_SET_SPOTANGLE_OFFSET UNITYSDK_OFFSET(0x1B48E390)
#define UNITYENGINE_LIGHT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B48E350)
#define UNITYENGINE_LIGHT_SET_USEBOUNDINGSPHEREOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1B48E4C0)
#define UNITYENGINE_LIGHT_SET_USECOLORTEMPERATURE_OFFSET UNITYSDK_OFFSET(0x1B48E460)
#define UNITYENGINE_LIGHT_SET_USESHADOWMATRIXOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1B48E5D0)
#define UNITYENGINE_LIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B48EED0)

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
