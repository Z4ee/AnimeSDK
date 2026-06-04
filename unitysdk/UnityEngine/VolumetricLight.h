#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/VolumetricLightType.h"

namespace UnityEngine { class Light; }
namespace UnityEngine { class Texture3D; }

#define UNITYENGINE_VOLUMETRICLIGHT_GET_LEGACYFALLOFF_OFFSET UNITYSDK_OFFSET(0x1B2E95B0)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_ANGULARATTEN_OFFSET UNITYSDK_OFFSET(0x1B2E9520)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E9580)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x1B2E9570)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_CUSTOMLIGHTQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x1B2E9630)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_FARFADE_OFFSET UNITYSDK_OFFSET(0x1B2E95A0)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_INTENSITY_OFFSET UNITYSDK_OFFSET(0x1B2E9510)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_LEGACYFALLOFF_OFFSET UNITYSDK_OFFSET(0x1B2E95C0)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_LIGHTREF_OFFSET UNITYSDK_OFFSET(0x1B2E94F0)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_LIGHTTYPE_OFFSET UNITYSDK_OFFSET(0x1B2E94E0)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_MAXTRACEDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B2E9500)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_NEARFADE_OFFSET UNITYSDK_OFFSET(0x1B2E9590)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_NOISEPOW_OFFSET UNITYSDK_OFFSET(0x1B2E95F0)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_NOISETEX_OFFSET UNITYSDK_OFFSET(0x1B2E95D0)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_NOISETILING_OFFSET UNITYSDK_OFFSET(0x1B2E95E0)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_OVERRIDECOLOR_OFFSET UNITYSDK_OFFSET(0x1B2E9530)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_REVERSEATTENUATION_OFFSET UNITYSDK_OFFSET(0x1B2E9540)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_USELEGACYFALLOFF_OFFSET UNITYSDK_OFFSET(0x1B2E9550)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_USENOISE_OFFSET UNITYSDK_OFFSET(0x1B2E9560)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_WINDDIRECTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E9610)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_WINDDIRECTION_OFFSET UNITYSDK_OFFSET(0x1B2E9600)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_WINDSPEED_OFFSET UNITYSDK_OFFSET(0x1B2E9620)

namespace UnityEngine
{
	inline static constexpr unsigned int VolumetricLight_TypeDefinitionIndex = 4256;

	class VolumetricLight : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void set_lightType(::UnityEngine::VolumetricLightType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::VolumetricLightType))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_LIGHTTYPE_OFFSET))(this, a1);
		}

		::System::Void set_lightRef(::UnityEngine::Light* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_LIGHTREF_OFFSET))(this, a1);
		}

		::System::Void set_maxTraceDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_MAXTRACEDISTANCE_OFFSET))(this, a1);
		}

		::System::Void set_intensity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_INTENSITY_OFFSET))(this, a1);
		}

		::System::Void set_angularAtten(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_ANGULARATTEN_OFFSET))(this, a1);
		}

		::System::Void set_overrideColor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_OVERRIDECOLOR_OFFSET))(this, a1);
		}

		::System::Void set_reverseAttenuation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_REVERSEATTENUATION_OFFSET))(this, a1);
		}

		::System::Void set_useLegacyFalloff(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_USELEGACYFALLOFF_OFFSET))(this, a1);
		}

		::System::Void set_useNoise(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_USENOISE_OFFSET))(this, a1);
		}

		::System::Void set_color(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_COLOR_OFFSET))(this, a1);
		}

		::System::Void set_nearFade(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_NEARFADE_OFFSET))(this, a1);
		}

		::System::Void set_farFade(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_FARFADE_OFFSET))(this, a1);
		}

		::System::Single get_legacyFalloff()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_GET_LEGACYFALLOFF_OFFSET))(this);
		}

		::System::Void set_legacyFalloff(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_LEGACYFALLOFF_OFFSET))(this, a1);
		}

		::System::Void set_noiseTex(::UnityEngine::Texture3D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture3D*))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_NOISETEX_OFFSET))(this, a1);
		}

		::System::Void set_noiseTiling(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_NOISETILING_OFFSET))(this, a1);
		}

		::System::Void set_noisePow(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_NOISEPOW_OFFSET))(this, a1);
		}

		::System::Void set_windDirection(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_WINDDIRECTION_OFFSET))(this, a1);
		}

		::System::Void set_windSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_WINDSPEED_OFFSET))(this, a1);
		}

		::System::Void set_customLightQualityFilter(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_CUSTOMLIGHTQUALITYFILTER_OFFSET))(this, a1);
		}

		::System::Void set_color_Injected(::UnityEngine::Color& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_COLOR_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_windDirection_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_WINDDIRECTION_INJECTED_OFFSET))(this, a1);
		}
	};
}
