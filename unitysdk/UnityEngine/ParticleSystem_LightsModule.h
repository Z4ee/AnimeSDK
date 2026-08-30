#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Light; }
namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_ALPHAAFFECTSINTENSITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EE21220)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_ALPHAAFFECTSINTENSITY_OFFSET UNITYSDK_OFFSET(0x3C70A30)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EE210A0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3C70970)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_INTENSITYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EE21380)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_INTENSITYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3C70B50)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_INTENSITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EE21340)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_INTENSITY_OFFSET UNITYSDK_OFFSET(0x3C70AE0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_LIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EE21160)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_LIGHT_OFFSET UNITYSDK_OFFSET(0x3C709D0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_MAXLIGHTS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EE213C0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_MAXLIGHTS_OFFSET UNITYSDK_OFFSET(0x3C70B70)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_RANGEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EE212D0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_RANGEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3C70AC0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_RANGE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EE21290)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_RANGE_OFFSET UNITYSDK_OFFSET(0x3C70A50)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_RATIO_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EE210E0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x3C70990)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_SIZEAFFECTSRANGE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EE211E0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_SIZEAFFECTSRANGE_OFFSET UNITYSDK_OFFSET(0x3C70A10)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_USEPARTICLECOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EE211A0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_USEPARTICLECOLOR_OFFSET UNITYSDK_OFFSET(0x3C709F0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_USERANDOMDISTRIBUTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EE21120)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_USERANDOMDISTRIBUTION_OFFSET UNITYSDK_OFFSET(0x3C709B0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_ALPHAAFFECTSINTENSITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EE21240)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_ALPHAAFFECTSINTENSITY_OFFSET UNITYSDK_OFFSET(0x3C70A40)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EE210C0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3C70980)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_INTENSITYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EE213A0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_INTENSITYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3C70B60)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_INTENSITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EE21360)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_INTENSITY_OFFSET UNITYSDK_OFFSET(0x3C70B20)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_LIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EE21180)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_LIGHT_OFFSET UNITYSDK_OFFSET(0x3C709E0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_MAXLIGHTS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EE213E0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_MAXLIGHTS_OFFSET UNITYSDK_OFFSET(0x3C70B80)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RANGEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EE212F0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RANGEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3C70AD0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RANGE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EE212B0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RANGE_OFFSET UNITYSDK_OFFSET(0x3C70A90)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RATIO_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EE21100)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RATIO_OFFSET UNITYSDK_OFFSET(0x3C709A0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_SIZEAFFECTSRANGE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EE21200)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_SIZEAFFECTSRANGE_OFFSET UNITYSDK_OFFSET(0x3C70A20)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_USEPARTICLECOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EE211C0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_USEPARTICLECOLOR_OFFSET UNITYSDK_OFFSET(0x3C70A00)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_USERANDOMDISTRIBUTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EE21140)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_USERANDOMDISTRIBUTION_OFFSET UNITYSDK_OFFSET(0x3C709C0)
#define UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x16050)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_LightsModule_TypeDefinitionIndex = 5239;

	struct alignas(8) ParticleSystem_LightsModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_ENABLED_OFFSET))(this, a1);
		}

		::System::Single get_ratio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_RATIO_OFFSET))(this);
		}

		::System::Void set_ratio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RATIO_OFFSET))(this, a1);
		}

		::System::Boolean get_useRandomDistribution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_USERANDOMDISTRIBUTION_OFFSET))(this);
		}

		::System::Void set_useRandomDistribution(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_USERANDOMDISTRIBUTION_OFFSET))(this, a1);
		}

		::UnityEngine::Light* get_light()
		{
			return ((::UnityEngine::Light*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_LIGHT_OFFSET))(this);
		}

		::System::Void set_light(::UnityEngine::Light* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_LIGHT_OFFSET))(this, a1);
		}

		::System::Boolean get_useParticleColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_USEPARTICLECOLOR_OFFSET))(this);
		}

		::System::Void set_useParticleColor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_USEPARTICLECOLOR_OFFSET))(this, a1);
		}

		::System::Boolean get_sizeAffectsRange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_SIZEAFFECTSRANGE_OFFSET))(this);
		}

		::System::Void set_sizeAffectsRange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_SIZEAFFECTSRANGE_OFFSET))(this, a1);
		}

		::System::Boolean get_alphaAffectsIntensity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_ALPHAAFFECTSINTENSITY_OFFSET))(this);
		}

		::System::Void set_alphaAffectsIntensity(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_ALPHAAFFECTSINTENSITY_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_range()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_RANGE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_range(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RANGE_OFFSET))(this, a1);
		}
		*/

		::System::Single get_rangeMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_RANGEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_rangeMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RANGEMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_intensity()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_INTENSITY_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_intensity(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_INTENSITY_OFFSET))(this, a1);
		}
		*/

		::System::Single get_intensityMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_INTENSITYMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_intensityMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_INTENSITYMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Int32 get_maxLights()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_MAXLIGHTS_OFFSET))(this);
		}

		::System::Void set_maxLights(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_MAXLIGHTS_OFFSET))(this, a1);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_LightsModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_LightsModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_ENABLED_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_LightsModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_ENABLED_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Single get_ratio_Injected(::UnityEngine::ParticleSystem_LightsModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_LightsModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_RATIO_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_ratio_Injected(::UnityEngine::ParticleSystem_LightsModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RATIO_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_useRandomDistribution_Injected(::UnityEngine::ParticleSystem_LightsModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_LightsModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_USERANDOMDISTRIBUTION_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_useRandomDistribution_Injected(::UnityEngine::ParticleSystem_LightsModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_USERANDOMDISTRIBUTION_INJECTED_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Light* get_light_Injected(::UnityEngine::ParticleSystem_LightsModule& a1)
		{
			return ((::UnityEngine::Light*(*)(::UnityEngine::ParticleSystem_LightsModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_LIGHT_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_light_Injected(::UnityEngine::ParticleSystem_LightsModule& a1, ::UnityEngine::Light* a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_LIGHT_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_useParticleColor_Injected(::UnityEngine::ParticleSystem_LightsModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_LightsModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_USEPARTICLECOLOR_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_useParticleColor_Injected(::UnityEngine::ParticleSystem_LightsModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_USEPARTICLECOLOR_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_sizeAffectsRange_Injected(::UnityEngine::ParticleSystem_LightsModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_LightsModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_SIZEAFFECTSRANGE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_sizeAffectsRange_Injected(::UnityEngine::ParticleSystem_LightsModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_SIZEAFFECTSRANGE_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_alphaAffectsIntensity_Injected(::UnityEngine::ParticleSystem_LightsModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_LightsModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_ALPHAAFFECTSINTENSITY_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_alphaAffectsIntensity_Injected(::UnityEngine::ParticleSystem_LightsModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_ALPHAAFFECTSINTENSITY_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_range_Injected(::UnityEngine::ParticleSystem_LightsModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_RANGE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_range_Injected(::UnityEngine::ParticleSystem_LightsModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RANGE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_rangeMultiplier_Injected(::UnityEngine::ParticleSystem_LightsModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_LightsModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_RANGEMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_rangeMultiplier_Injected(::UnityEngine::ParticleSystem_LightsModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_RANGEMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_intensity_Injected(::UnityEngine::ParticleSystem_LightsModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_INTENSITY_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_intensity_Injected(::UnityEngine::ParticleSystem_LightsModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_INTENSITY_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_intensityMultiplier_Injected(::UnityEngine::ParticleSystem_LightsModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_LightsModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_INTENSITYMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_intensityMultiplier_Injected(::UnityEngine::ParticleSystem_LightsModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_INTENSITYMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Int32 get_maxLights_Injected(::UnityEngine::ParticleSystem_LightsModule& a1)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_LightsModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_GET_MAXLIGHTS_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_maxLights_Injected(::UnityEngine::ParticleSystem_LightsModule& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LightsModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIGHTSMODULE_SET_MAXLIGHTS_INJECTED_OFFSET))(a1, a2);
		}
	};
}
