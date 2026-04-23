#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemInheritVelocityMode.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_CURVEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CD4C0)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_CURVEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F20E0)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_CURVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CD480)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x22F2070)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CD3D0)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x22F2030)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_MODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CD410)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_MODE_OFFSET UNITYSDK_OFFSET(0x22F2050)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_CURVEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CD4E0)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_CURVEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F20F0)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_CURVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CD4A0)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_CURVE_OFFSET UNITYSDK_OFFSET(0x22F20B0)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CD3F0)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x22F2040)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_MODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CD430)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_MODE_OFFSET UNITYSDK_OFFSET(0x22F2060)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDC0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_InheritVelocityModule_TypeDefinitionIndex = 5461;

	struct alignas(8) ParticleSystem_InheritVelocityModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_ENABLED_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemInheritVelocityMode get_mode()
		{
			return ((::UnityEngine::ParticleSystemInheritVelocityMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_MODE_OFFSET))(this);
		}

		::System::Void set_mode(::UnityEngine::ParticleSystemInheritVelocityMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemInheritVelocityMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_MODE_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_curve()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_CURVE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_curve(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_CURVE_OFFSET))(this, value);
		}
		*/

		::System::Single get_curveMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_CURVEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_curveMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_CURVEMULTIPLIER_OFFSET))(this, value);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_InheritVelocityModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_InheritVelocityModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_InheritVelocityModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_InheritVelocityModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_ENABLED_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::ParticleSystemInheritVelocityMode get_mode_Injected(::UnityEngine::ParticleSystem_InheritVelocityModule& _unity_self)
		{
			return ((::UnityEngine::ParticleSystemInheritVelocityMode(*)(::UnityEngine::ParticleSystem_InheritVelocityModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_MODE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_mode_Injected(::UnityEngine::ParticleSystem_InheritVelocityModule& _unity_self, ::UnityEngine::ParticleSystemInheritVelocityMode value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_InheritVelocityModule&, ::UnityEngine::ParticleSystemInheritVelocityMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_MODE_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_curve_Injected(::UnityEngine::ParticleSystem_InheritVelocityModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_InheritVelocityModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_CURVE_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_curve_Injected(::UnityEngine::ParticleSystem_InheritVelocityModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_InheritVelocityModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_CURVE_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_curveMultiplier_Injected(::UnityEngine::ParticleSystem_InheritVelocityModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_InheritVelocityModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_CURVEMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_curveMultiplier_Injected(::UnityEngine::ParticleSystem_InheritVelocityModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_InheritVelocityModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_CURVEMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}
	};
}
