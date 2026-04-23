#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemSimulationSpace.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DAMPEN_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CDB60)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DAMPEN_OFFSET UNITYSDK_OFFSET(0x22F25C0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAGMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CDC90)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAGMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F2690)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAG_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CDC50)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAG_OFFSET UNITYSDK_OFFSET(0x22F2620)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CD860)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x22F2360)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CDB20)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F25A0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CD910)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F23F0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CD8D0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITX_OFFSET UNITYSDK_OFFSET(0x22F2380)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CD9C0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F2480)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CD980)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITY_OFFSET UNITYSDK_OFFSET(0x22F2410)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CDA70)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F2510)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CDA30)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZ_OFFSET UNITYSDK_OFFSET(0x22F24A0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMIT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CDAE0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMIT_OFFSET UNITYSDK_OFFSET(0x22F2530)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLESIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CDCD0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x22F26B0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLEVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CDD10)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET UNITYSDK_OFFSET(0x22F26D0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CDBA0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x22F25E0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CDBE0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SPACE_OFFSET UNITYSDK_OFFSET(0x22F2600)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DAMPEN_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CDB80)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DAMPEN_OFFSET UNITYSDK_OFFSET(0x22F25D0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAGMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CDCB0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAGMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F26A0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAG_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CDC70)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAG_OFFSET UNITYSDK_OFFSET(0x22F2660)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CD880)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x22F2370)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CDB40)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F25B0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CD930)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F2400)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CD8F0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITX_OFFSET UNITYSDK_OFFSET(0x22F23C0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CD9E0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F2490)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CD9A0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITY_OFFSET UNITYSDK_OFFSET(0x22F2450)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CDA90)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F2520)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CDA50)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZ_OFFSET UNITYSDK_OFFSET(0x22F24E0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMIT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CDB00)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMIT_OFFSET UNITYSDK_OFFSET(0x22F2570)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLESIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CDCF0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x22F26C0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLEVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CDD30)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET UNITYSDK_OFFSET(0x22F26E0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CDBC0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x22F25F0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CDC00)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SPACE_OFFSET UNITYSDK_OFFSET(0x22F2610)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDC0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_LimitVelocityOverLifetimeModule_TypeDefinitionIndex = 5460;

	struct alignas(8) ParticleSystem_LimitVelocityOverLifetimeModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_ENABLED_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_limitX()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITX_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_limitX(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITX_OFFSET))(this, value);
		}
		*/

		::System::Single get_limitXMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITXMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_limitXMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITXMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_limitY()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITY_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_limitY(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITY_OFFSET))(this, value);
		}
		*/

		::System::Single get_limitYMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITYMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_limitYMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITYMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_limitZ()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZ_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_limitZ(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZ_OFFSET))(this, value);
		}
		*/

		::System::Single get_limitZMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_limitZMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_limit()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMIT_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_limit(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMIT_OFFSET))(this, value);
		}
		*/

		::System::Single get_limitMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_limitMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITMULTIPLIER_OFFSET))(this, value);
		}

		::System::Single get_dampen()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DAMPEN_OFFSET))(this);
		}

		::System::Void set_dampen(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DAMPEN_OFFSET))(this, value);
		}

		::System::Boolean get_separateAxes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SEPARATEAXES_OFFSET))(this);
		}

		::System::Void set_separateAxes(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SEPARATEAXES_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemSimulationSpace get_space()
		{
			return ((::UnityEngine::ParticleSystemSimulationSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SPACE_OFFSET))(this);
		}

		::System::Void set_space(::UnityEngine::ParticleSystemSimulationSpace value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemSimulationSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SPACE_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_drag()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAG_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_drag(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAG_OFFSET))(this, value);
		}
		*/

		::System::Single get_dragMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAGMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_dragMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAGMULTIPLIER_OFFSET))(this, value);
		}

		::System::Boolean get_multiplyDragByParticleSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET))(this);
		}

		::System::Void set_multiplyDragByParticleSize(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET))(this, value);
		}

		::System::Boolean get_multiplyDragByParticleVelocity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET))(this);
		}

		::System::Void set_multiplyDragByParticleVelocity(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET))(this, value);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_limitX_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITX_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_limitX_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITX_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_limitXMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITXMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_limitXMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITXMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_limitY_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITY_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_limitY_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITY_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_limitYMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITYMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_limitYMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITYMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_limitZ_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZ_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_limitZ_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZ_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_limitZMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_limitZMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_limit_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMIT_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_limit_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMIT_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_limitMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_limitMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_dampen_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DAMPEN_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_dampen_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DAMPEN_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_separateAxes_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SEPARATEAXES_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_separateAxes_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SEPARATEAXES_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::ParticleSystemSimulationSpace get_space_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self)
		{
			return ((::UnityEngine::ParticleSystemSimulationSpace(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SPACE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_space_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystemSimulationSpace value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::UnityEngine::ParticleSystemSimulationSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SPACE_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_drag_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAG_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_drag_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAG_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_dragMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAGMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_dragMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAGMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_multiplyDragByParticleSize_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLESIZE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_multiplyDragByParticleSize_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLESIZE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_multiplyDragByParticleVelocity_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLEVELOCITY_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_multiplyDragByParticleVelocity_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLEVELOCITY_INJECTED_OFFSET))(_unity_self, value);
		}
	};
}
