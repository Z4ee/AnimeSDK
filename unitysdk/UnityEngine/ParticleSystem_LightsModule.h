#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Light; }
namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_ALPHAAFFECTSINTENSITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93400)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_ALPHAAFFECTSINTENSITY_OFFSET UNITYSDK_OFFSET(0x2120520)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93280)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x2120460)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_INTENSITYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93560)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_INTENSITYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2120640)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_INTENSITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93520)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_INTENSITY_OFFSET UNITYSDK_OFFSET(0x21205D0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_LIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93340)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_LIGHT_OFFSET UNITYSDK_OFFSET(0x21204C0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_MAXLIGHTS_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A935A0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_MAXLIGHTS_OFFSET UNITYSDK_OFFSET(0x2120660)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_RANGEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A934B0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_RANGEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x21205B0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_RANGE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93470)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_RANGE_OFFSET UNITYSDK_OFFSET(0x2120540)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_RATIO_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A932C0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x2120480)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_SIZEAFFECTSRANGE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A933C0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_SIZEAFFECTSRANGE_OFFSET UNITYSDK_OFFSET(0x2120500)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_USEPARTICLECOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93380)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_USEPARTICLECOLOR_OFFSET UNITYSDK_OFFSET(0x21204E0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_USERANDOMDISTRIBUTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93300)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_USERANDOMDISTRIBUTION_OFFSET UNITYSDK_OFFSET(0x21204A0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_ALPHAAFFECTSINTENSITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93420)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_ALPHAAFFECTSINTENSITY_OFFSET UNITYSDK_OFFSET(0x2120530)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A932A0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x2120470)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_INTENSITYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93580)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_INTENSITYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2120650)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_INTENSITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93540)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_INTENSITY_OFFSET UNITYSDK_OFFSET(0x2120610)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_LIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93360)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_LIGHT_OFFSET UNITYSDK_OFFSET(0x21204D0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_MAXLIGHTS_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A935C0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_MAXLIGHTS_OFFSET UNITYSDK_OFFSET(0x2120670)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RANGEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A934D0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RANGEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x21205C0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RANGE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93490)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RANGE_OFFSET UNITYSDK_OFFSET(0x2120580)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RATIO_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A932E0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RATIO_OFFSET UNITYSDK_OFFSET(0x2120490)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_SIZEAFFECTSRANGE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A933E0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_SIZEAFFECTSRANGE_OFFSET UNITYSDK_OFFSET(0x2120510)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_USEPARTICLECOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A933A0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_USEPARTICLECOLOR_OFFSET UNITYSDK_OFFSET(0x21204F0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_USERANDOMDISTRIBUTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93320)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_USERANDOMDISTRIBUTION_OFFSET UNITYSDK_OFFSET(0x21204B0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_LightsModule_TypeDefinitionIndex = 5462;

	struct alignas(8) ParticleSystem_LightsModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Single get_ratio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_RATIO_OFFSET))(this);
		}

		::System::Void set_ratio(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RATIO_OFFSET))(this, value);
		}

		::System::Boolean get_useRandomDistribution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_USERANDOMDISTRIBUTION_OFFSET))(this);
		}

		::System::Void set_useRandomDistribution(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_USERANDOMDISTRIBUTION_OFFSET))(this, value);
		}

		::UnityEngine::Light* get_light()
		{
			return ((::UnityEngine::Light*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_LIGHT_OFFSET))(this);
		}

		::System::Void set_light(::UnityEngine::Light* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_LIGHT_OFFSET))(this, value);
		}

		::System::Boolean get_useParticleColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_USEPARTICLECOLOR_OFFSET))(this);
		}

		::System::Void set_useParticleColor(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_USEPARTICLECOLOR_OFFSET))(this, value);
		}

		::System::Boolean get_sizeAffectsRange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_SIZEAFFECTSRANGE_OFFSET))(this);
		}

		::System::Void set_sizeAffectsRange(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_SIZEAFFECTSRANGE_OFFSET))(this, value);
		}

		::System::Boolean get_alphaAffectsIntensity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_ALPHAAFFECTSINTENSITY_OFFSET))(this);
		}

		::System::Void set_alphaAffectsIntensity(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_ALPHAAFFECTSINTENSITY_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_range()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_RANGE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_range(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RANGE_OFFSET))(this, value);
		}
		*/

		::System::Single get_rangeMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_RANGEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_rangeMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RANGEMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_intensity()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_INTENSITY_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_intensity(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_INTENSITY_OFFSET))(this, value);
		}
		*/

		::System::Single get_intensityMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_INTENSITYMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_intensityMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_INTENSITYMULTIPLIER_OFFSET))(this, value);
		}

		::System::Int32 get_maxLights()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_MAXLIGHTS_OFFSET))(this);
		}

		::System::Void set_maxLights(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_MAXLIGHTS_OFFSET))(this, value);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_LightsModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_ENABLED_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_ratio_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_LightsModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_RATIO_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_ratio_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RATIO_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_useRandomDistribution_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_LightsModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_USERANDOMDISTRIBUTION_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_useRandomDistribution_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_USERANDOMDISTRIBUTION_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::Light* get_light_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self)
		{
			return ((::UnityEngine::Light*(*)(::UnityEngine::ParticleSystem_LightsModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_LIGHT_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_light_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self, ::UnityEngine::Light* value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_LIGHT_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_useParticleColor_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_LightsModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_USEPARTICLECOLOR_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_useParticleColor_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_USEPARTICLECOLOR_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_sizeAffectsRange_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_LightsModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_SIZEAFFECTSRANGE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_sizeAffectsRange_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_SIZEAFFECTSRANGE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_alphaAffectsIntensity_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_LightsModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_ALPHAAFFECTSINTENSITY_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_alphaAffectsIntensity_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_ALPHAAFFECTSINTENSITY_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_range_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_RANGE_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_range_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RANGE_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_rangeMultiplier_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_LightsModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_RANGEMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_rangeMultiplier_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RANGEMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_intensity_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_INTENSITY_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_intensity_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_INTENSITY_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_intensityMultiplier_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_LightsModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_INTENSITYMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_intensityMultiplier_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_INTENSITYMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Int32 get_maxLights_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_LightsModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_MAXLIGHTS_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_maxLights_Injected(::UnityEngine::ParticleSystem_LightsModule& _unity_self, ::System::Int32 value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_MAXLIGHTS_INJECTED_OFFSET))(_unity_self, value);
		}
	};
}
