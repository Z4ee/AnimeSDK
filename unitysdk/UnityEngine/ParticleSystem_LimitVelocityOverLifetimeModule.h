#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemSimulationSpace.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DAMPEN_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A938E0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DAMPEN_OFFSET UNITYSDK_OFFSET(0x2120900)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAGMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93A10)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAGMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x21209D0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAG_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A939D0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_DRAG_OFFSET UNITYSDK_OFFSET(0x2120960)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A935E0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x21206A0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A938A0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x21208E0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93690)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2120730)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITX_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93650)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITX_OFFSET UNITYSDK_OFFSET(0x21206C0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93740)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x21207C0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93700)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITY_OFFSET UNITYSDK_OFFSET(0x2120750)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A937F0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2120850)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A937B0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMITZ_OFFSET UNITYSDK_OFFSET(0x21207E0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMIT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93860)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_LIMIT_OFFSET UNITYSDK_OFFSET(0x2120870)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLESIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93A50)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x21209F0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLEVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93A90)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET UNITYSDK_OFFSET(0x2120A10)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93920)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x2120920)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93960)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_GET_SPACE_OFFSET UNITYSDK_OFFSET(0x2120940)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DAMPEN_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93900)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DAMPEN_OFFSET UNITYSDK_OFFSET(0x2120910)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAGMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93A30)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAGMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x21209E0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAG_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A939F0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_DRAG_OFFSET UNITYSDK_OFFSET(0x21209A0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93600)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x21206B0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A938C0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x21208F0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A936B0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2120740)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITX_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93670)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITX_OFFSET UNITYSDK_OFFSET(0x2120700)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93760)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x21207D0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93720)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITY_OFFSET UNITYSDK_OFFSET(0x2120790)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93810)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2120860)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A937D0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMITZ_OFFSET UNITYSDK_OFFSET(0x2120820)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMIT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93880)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_LIMIT_OFFSET UNITYSDK_OFFSET(0x21208B0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLESIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93A70)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x2120A00)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLEVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93AB0)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET UNITYSDK_OFFSET(0x2120A20)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93940)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x2120930)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93980)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE_SET_SPACE_OFFSET UNITYSDK_OFFSET(0x2120950)
#define UNITYENGINE_PARTICLESYSTEM_LIMITVELOCITYOVERLIFETIMEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_LimitVelocityOverLifetimeModule_TypeDefinitionIndex = 5449;

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
