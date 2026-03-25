#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/VolumetricLightType.h"

namespace UnityEngine { class Light; }
namespace UnityEngine { class Texture3D; }

#define UNITYENGINE_VOLUMETRICLIGHT_GET_LEGACYFALLOFF_OFFSET UNITYSDK_OFFSET(0x18A614A0)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_ANGULARATTEN_OFFSET UNITYSDK_OFFSET(0x18A61410)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A61470)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x18A61460)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_CUSTOMLIGHTQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x18A61520)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_FARFADE_OFFSET UNITYSDK_OFFSET(0x18A61490)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_INTENSITY_OFFSET UNITYSDK_OFFSET(0x18A61400)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_LEGACYFALLOFF_OFFSET UNITYSDK_OFFSET(0x18A614B0)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_LIGHTREF_OFFSET UNITYSDK_OFFSET(0x18A613E0)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_LIGHTTYPE_OFFSET UNITYSDK_OFFSET(0x18A613D0)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_MAXTRACEDISTANCE_OFFSET UNITYSDK_OFFSET(0x18A613F0)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_NEARFADE_OFFSET UNITYSDK_OFFSET(0x18A61480)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_NOISEPOW_OFFSET UNITYSDK_OFFSET(0x18A614E0)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_NOISETEX_OFFSET UNITYSDK_OFFSET(0x18A614C0)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_NOISETILING_OFFSET UNITYSDK_OFFSET(0x18A614D0)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_OVERRIDECOLOR_OFFSET UNITYSDK_OFFSET(0x18A61420)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_REVERSEATTENUATION_OFFSET UNITYSDK_OFFSET(0x18A61430)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_USELEGACYFALLOFF_OFFSET UNITYSDK_OFFSET(0x18A61440)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_USENOISE_OFFSET UNITYSDK_OFFSET(0x18A61450)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_WINDDIRECTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A61500)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_WINDDIRECTION_OFFSET UNITYSDK_OFFSET(0x18A614F0)
#define UNITYENGINE_VOLUMETRICLIGHT_SET_WINDSPEED_OFFSET UNITYSDK_OFFSET(0x18A61510)

namespace UnityEngine
{
	inline static constexpr unsigned int VolumetricLight_TypeDefinitionIndex = 4080;

	class VolumetricLight : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void set_lightType(::UnityEngine::VolumetricLightType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::VolumetricLightType))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_LIGHTTYPE_OFFSET))(this, value);
		}

		::System::Void set_lightRef(::UnityEngine::Light* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_LIGHTREF_OFFSET))(this, value);
		}

		::System::Void set_maxTraceDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_MAXTRACEDISTANCE_OFFSET))(this, value);
		}

		::System::Void set_intensity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_INTENSITY_OFFSET))(this, value);
		}

		::System::Void set_angularAtten(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_ANGULARATTEN_OFFSET))(this, value);
		}

		::System::Void set_overrideColor(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_OVERRIDECOLOR_OFFSET))(this, value);
		}

		::System::Void set_reverseAttenuation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_REVERSEATTENUATION_OFFSET))(this, value);
		}

		::System::Void set_useLegacyFalloff(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_USELEGACYFALLOFF_OFFSET))(this, value);
		}

		::System::Void set_useNoise(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_USENOISE_OFFSET))(this, value);
		}

		::System::Void set_color(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_COLOR_OFFSET))(this, value);
		}

		::System::Void set_nearFade(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_NEARFADE_OFFSET))(this, value);
		}

		::System::Void set_farFade(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_FARFADE_OFFSET))(this, value);
		}

		::System::Single get_legacyFalloff()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_GET_LEGACYFALLOFF_OFFSET))(this);
		}

		::System::Void set_legacyFalloff(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_LEGACYFALLOFF_OFFSET))(this, value);
		}

		::System::Void set_noiseTex(::UnityEngine::Texture3D* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture3D*))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_NOISETEX_OFFSET))(this, value);
		}

		::System::Void set_noiseTiling(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_NOISETILING_OFFSET))(this, value);
		}

		::System::Void set_noisePow(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_NOISEPOW_OFFSET))(this, value);
		}

		::System::Void set_windDirection(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_WINDDIRECTION_OFFSET))(this, value);
		}

		::System::Void set_windSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_WINDSPEED_OFFSET))(this, value);
		}

		::System::Void set_customLightQualityFilter(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_CUSTOMLIGHTQUALITYFILTER_OFFSET))(this, value);
		}

		::System::Void set_color_Injected(::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_COLOR_INJECTED_OFFSET))(this, value);
		}

		::System::Void set_windDirection_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_VOLUMETRICLIGHT_SET_WINDDIRECTION_INJECTED_OFFSET))(this, value);
		}
	};
}
