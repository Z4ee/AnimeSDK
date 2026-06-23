#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Rendering/AmbientMode.h"
#include "unitysdk/UnityEngine/Rendering/DefaultReflectionMode.h"
#include "unitysdk/UnityEngine/Rendering/SphericalHarmonicsL2.h"

namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class Material; }

#define UNITYENGINE_RENDERSETTINGS_GET_AMBIENTEQUATORCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6FC420)
#define UNITYENGINE_RENDERSETTINGS_GET_AMBIENTEQUATORCOLOR_OFFSET UNITYSDK_OFFSET(0x1D6FC3F0)
#define UNITYENGINE_RENDERSETTINGS_GET_AMBIENTGROUNDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6FC480)
#define UNITYENGINE_RENDERSETTINGS_GET_AMBIENTGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x1D6FC450)
#define UNITYENGINE_RENDERSETTINGS_GET_AMBIENTMODE_OFFSET UNITYSDK_OFFSET(0x1D6FC370)
#define UNITYENGINE_RENDERSETTINGS_GET_AMBIENTPROBE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6FC590)
#define UNITYENGINE_RENDERSETTINGS_GET_AMBIENTPROBE_OFFSET UNITYSDK_OFFSET(0x1D6FC500)
#define UNITYENGINE_RENDERSETTINGS_GET_AMBIENTSKYCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6FC3C0)
#define UNITYENGINE_RENDERSETTINGS_GET_AMBIENTSKYCOLOR_OFFSET UNITYSDK_OFFSET(0x1D6FC390)
#define UNITYENGINE_RENDERSETTINGS_GET_REFLECTIONINTENSITY_OFFSET UNITYSDK_OFFSET(0x1D6FC5D0)
#define UNITYENGINE_RENDERSETTINGS_GET_SKYBOX_OFFSET UNITYSDK_OFFSET(0x1D6FC4E0)
#define UNITYENGINE_RENDERSETTINGS_SET_AMBIENTEQUATORCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6FC440)
#define UNITYENGINE_RENDERSETTINGS_SET_AMBIENTEQUATORCOLOR_OFFSET UNITYSDK_OFFSET(0x1D6FC430)
#define UNITYENGINE_RENDERSETTINGS_SET_AMBIENTGROUNDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6FC4A0)
#define UNITYENGINE_RENDERSETTINGS_SET_AMBIENTGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x1D6FC490)
#define UNITYENGINE_RENDERSETTINGS_SET_AMBIENTINTENSITY_OFFSET UNITYSDK_OFFSET(0x1D6FC4B0)
#define UNITYENGINE_RENDERSETTINGS_SET_AMBIENTLIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6FC4D0)
#define UNITYENGINE_RENDERSETTINGS_SET_AMBIENTLIGHT_OFFSET UNITYSDK_OFFSET(0x1D6FC4C0)
#define UNITYENGINE_RENDERSETTINGS_SET_AMBIENTMODE_OFFSET UNITYSDK_OFFSET(0x1D6FC380)
#define UNITYENGINE_RENDERSETTINGS_SET_AMBIENTPROBE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6FC5B0)
#define UNITYENGINE_RENDERSETTINGS_SET_AMBIENTPROBE_OFFSET UNITYSDK_OFFSET(0x1D6FC5A0)
#define UNITYENGINE_RENDERSETTINGS_SET_AMBIENTSKYCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D6FC3E0)
#define UNITYENGINE_RENDERSETTINGS_SET_AMBIENTSKYCOLOR_OFFSET UNITYSDK_OFFSET(0x1D6FC3D0)
#define UNITYENGINE_RENDERSETTINGS_SET_CUSTOMREFLECTION_OFFSET UNITYSDK_OFFSET(0x1D6FC5C0)
#define UNITYENGINE_RENDERSETTINGS_SET_DEFAULTREFLECTIONMODE_OFFSET UNITYSDK_OFFSET(0x1D6FC5F0)
#define UNITYENGINE_RENDERSETTINGS_SET_REFLECTIONINTENSITY_OFFSET UNITYSDK_OFFSET(0x1D6FC5E0)
#define UNITYENGINE_RENDERSETTINGS_SET_SKYBOX_OFFSET UNITYSDK_OFFSET(0x1D6FC4F0)
#define UNITYENGINE_RENDERSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6FC320)

namespace UnityEngine
{
	inline static constexpr unsigned int RenderSettings_TypeDefinitionIndex = 5199;

	class RenderSettings : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Rendering::AmbientMode get_ambientMode()
		{
			return ((::UnityEngine::Rendering::AmbientMode(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_AMBIENTMODE_OFFSET))();
		}

		static ::System::Void set_ambientMode(::UnityEngine::Rendering::AmbientMode value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::AmbientMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_AMBIENTMODE_OFFSET))(value);
		}

		static ::UnityEngine::Color get_ambientSkyColor()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_AMBIENTSKYCOLOR_OFFSET))();
		}

		static ::System::Void set_ambientSkyColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_AMBIENTSKYCOLOR_OFFSET))(value);
		}

		static ::UnityEngine::Color get_ambientEquatorColor()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_AMBIENTEQUATORCOLOR_OFFSET))();
		}

		static ::System::Void set_ambientEquatorColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_AMBIENTEQUATORCOLOR_OFFSET))(value);
		}

		static ::UnityEngine::Color get_ambientGroundColor()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_AMBIENTGROUNDCOLOR_OFFSET))();
		}

		static ::System::Void set_ambientGroundColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_AMBIENTGROUNDCOLOR_OFFSET))(value);
		}

		static ::System::Void set_ambientIntensity(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_AMBIENTINTENSITY_OFFSET))(value);
		}

		static ::System::Void set_ambientLight(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_AMBIENTLIGHT_OFFSET))(value);
		}

		static ::UnityEngine::Material* get_skybox()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_SKYBOX_OFFSET))();
		}

		static ::System::Void set_skybox(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_SKYBOX_OFFSET))(value);
		}

		static ::UnityEngine::Rendering::SphericalHarmonicsL2 get_ambientProbe()
		{
			return ((::UnityEngine::Rendering::SphericalHarmonicsL2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_AMBIENTPROBE_OFFSET))();
		}

		static ::System::Void set_ambientProbe(::UnityEngine::Rendering::SphericalHarmonicsL2 value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::SphericalHarmonicsL2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_AMBIENTPROBE_OFFSET))(value);
		}

		static ::System::Void set_customReflection(::UnityEngine::Cubemap* value)
		{
			return ((::System::Void(*)(::UnityEngine::Cubemap*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_CUSTOMREFLECTION_OFFSET))(value);
		}

		static ::System::Single get_reflectionIntensity()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_REFLECTIONINTENSITY_OFFSET))();
		}

		static ::System::Void set_reflectionIntensity(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_REFLECTIONINTENSITY_OFFSET))(value);
		}

		static ::System::Void set_defaultReflectionMode(::UnityEngine::Rendering::DefaultReflectionMode value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::DefaultReflectionMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_DEFAULTREFLECTIONMODE_OFFSET))(value);
		}

		static ::System::Void get_ambientSkyColor_Injected(::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_AMBIENTSKYCOLOR_INJECTED_OFFSET))(ret);
		}

		static ::System::Void set_ambientSkyColor_Injected(::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_AMBIENTSKYCOLOR_INJECTED_OFFSET))(value);
		}

		static ::System::Void get_ambientEquatorColor_Injected(::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_AMBIENTEQUATORCOLOR_INJECTED_OFFSET))(ret);
		}

		static ::System::Void set_ambientEquatorColor_Injected(::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_AMBIENTEQUATORCOLOR_INJECTED_OFFSET))(value);
		}

		static ::System::Void get_ambientGroundColor_Injected(::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_AMBIENTGROUNDCOLOR_INJECTED_OFFSET))(ret);
		}

		static ::System::Void set_ambientGroundColor_Injected(::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_AMBIENTGROUNDCOLOR_INJECTED_OFFSET))(value);
		}

		static ::System::Void set_ambientLight_Injected(::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_AMBIENTLIGHT_INJECTED_OFFSET))(value);
		}

		static ::System::Void get_ambientProbe_Injected(::UnityEngine::Rendering::SphericalHarmonicsL2& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::SphericalHarmonicsL2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_GET_AMBIENTPROBE_INJECTED_OFFSET))(ret);
		}

		static ::System::Void set_ambientProbe_Injected(::UnityEngine::Rendering::SphericalHarmonicsL2& value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::SphericalHarmonicsL2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERSETTINGS_SET_AMBIENTPROBE_INJECTED_OFFSET))(value);
		}
	};
}
