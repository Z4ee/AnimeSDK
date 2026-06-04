#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemSimulationSpace.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DAMPEN_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31AE50)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DAMPEN_OFFSET UNITYSDK_OFFSET(0x3891AE0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAGMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31AF80)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAGMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3891BB0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAG_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31AF40)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAG_OFFSET UNITYSDK_OFFSET(0x3891B40)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31AB50)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3891880)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31AE10)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3891AC0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31AC00)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3891910)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31ABC0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITX_OFFSET UNITYSDK_OFFSET(0x38918A0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31ACB0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x38919A0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31AC70)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITY_OFFSET UNITYSDK_OFFSET(0x3891930)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31AD60)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3891A30)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31AD20)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZ_OFFSET UNITYSDK_OFFSET(0x38919C0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMIT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31ADD0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMIT_OFFSET UNITYSDK_OFFSET(0x3891A50)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLESIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31AFC0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x3891BD0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLEVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31B000)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET UNITYSDK_OFFSET(0x3891BF0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31AE90)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x3891B00)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31AED0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SPACE_OFFSET UNITYSDK_OFFSET(0x3891B20)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DAMPEN_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31AE70)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DAMPEN_OFFSET UNITYSDK_OFFSET(0x3891AF0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAGMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31AFA0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAGMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3891BC0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAG_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31AF60)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAG_OFFSET UNITYSDK_OFFSET(0x3891B80)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31AB70)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3891890)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31AE30)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3891AD0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31AC20)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3891920)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31ABE0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITX_OFFSET UNITYSDK_OFFSET(0x38918E0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31ACD0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x38919B0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31AC90)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITY_OFFSET UNITYSDK_OFFSET(0x3891970)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31AD80)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3891A40)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31AD40)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZ_OFFSET UNITYSDK_OFFSET(0x3891A00)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMIT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31ADF0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMIT_OFFSET UNITYSDK_OFFSET(0x3891A90)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLESIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31AFE0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x3891BE0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLEVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31B020)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET UNITYSDK_OFFSET(0x3891C00)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31AEB0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x3891B10)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31AEF0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SPACE_OFFSET UNITYSDK_OFFSET(0x3891B30)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC630)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_LimitVelocityOverLifetimeModule_TypeDefinitionIndex = 5737;

	struct alignas(8) ParticleSystem_LimitVelocityOverLifetimeModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_ENABLED_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_limitX()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITX_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_limitX(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITX_OFFSET))(this, a1);
		}
		*/

		::System::Single get_limitXMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITXMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_limitXMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITXMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_limitY()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITY_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_limitY(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITY_OFFSET))(this, a1);
		}
		*/

		::System::Single get_limitYMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITYMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_limitYMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITYMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_limitZ()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZ_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_limitZ(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZ_OFFSET))(this, a1);
		}
		*/

		::System::Single get_limitZMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_limitZMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_limit()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMIT_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_limit(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMIT_OFFSET))(this, a1);
		}
		*/

		::System::Single get_limitMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_limitMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Single get_dampen()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DAMPEN_OFFSET))(this);
		}

		::System::Void set_dampen(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DAMPEN_OFFSET))(this, a1);
		}

		::System::Boolean get_separateAxes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SEPARATEAXES_OFFSET))(this);
		}

		::System::Void set_separateAxes(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SEPARATEAXES_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemSimulationSpace get_space()
		{
			return ((::UnityEngine::ParticleSystemSimulationSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SPACE_OFFSET))(this);
		}

		::System::Void set_space(::UnityEngine::ParticleSystemSimulationSpace a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemSimulationSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SPACE_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_drag()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAG_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_drag(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAG_OFFSET))(this, a1);
		}
		*/

		::System::Single get_dragMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAGMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_dragMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAGMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Boolean get_multiplyDragByParticleSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET))(this);
		}

		::System::Void set_multiplyDragByParticleSize(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET))(this, a1);
		}

		::System::Boolean get_multiplyDragByParticleVelocity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET))(this);
		}

		::System::Void set_multiplyDragByParticleVelocity(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET))(this, a1);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_limitX_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITX_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_limitX_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITX_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_limitXMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITXMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_limitXMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITXMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_limitY_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITY_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_limitY_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITY_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_limitYMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITYMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_limitYMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITYMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_limitZ_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZ_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_limitZ_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZ_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_limitZMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_limitZMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_limit_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMIT_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_limit_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMIT_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_limitMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_limitMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Single get_dampen_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DAMPEN_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_dampen_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DAMPEN_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_separateAxes_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SEPARATEAXES_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_separateAxes_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SEPARATEAXES_INJECTED_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ParticleSystemSimulationSpace get_space_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1)
		{
			return ((::UnityEngine::ParticleSystemSimulationSpace(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SPACE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_space_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystemSimulationSpace a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::UnityEngine::ParticleSystemSimulationSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SPACE_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_drag_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAG_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_drag_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAG_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_dragMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAGMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_dragMultiplier_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAGMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_multiplyDragByParticleSize_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLESIZE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_multiplyDragByParticleSize_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLESIZE_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_multiplyDragByParticleVelocity_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLEVELOCITY_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_multiplyDragByParticleVelocity_Injected(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLEVELOCITY_INJECTED_OFFSET))(a1, a2);
		}
	};
}
