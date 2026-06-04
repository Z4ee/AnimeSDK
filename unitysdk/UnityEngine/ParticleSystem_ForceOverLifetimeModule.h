#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemSimulationSpace.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31A3F0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3891320)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_RANDOMIZED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31A680)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_RANDOMIZED_OFFSET UNITYSDK_OFFSET(0x3891510)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_SPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31A640)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_SPACE_OFFSET UNITYSDK_OFFSET(0x38914F0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31A580)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3891490)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31A460)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_X_OFFSET UNITYSDK_OFFSET(0x3891340)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31A5C0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x38914B0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31A4D0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_Y_OFFSET UNITYSDK_OFFSET(0x38913B0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31A600)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x38914D0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31A540)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_Z_OFFSET UNITYSDK_OFFSET(0x3891420)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31A410)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3891330)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_RANDOMIZED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31A6A0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_RANDOMIZED_OFFSET UNITYSDK_OFFSET(0x3891520)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_SPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31A660)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_SPACE_OFFSET UNITYSDK_OFFSET(0x3891500)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31A5A0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x38914A0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31A480)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_X_OFFSET UNITYSDK_OFFSET(0x3891380)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31A5E0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x38914C0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31A4F0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Y_OFFSET UNITYSDK_OFFSET(0x38913F0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31A620)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x38914E0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31A560)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Z_OFFSET UNITYSDK_OFFSET(0x3891460)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC630)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_ForceOverLifetimeModule_TypeDefinitionIndex = 5739;

	struct alignas(8) ParticleSystem_ForceOverLifetimeModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_ENABLED_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_x()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_X_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_x(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_X_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_y()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_Y_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_y(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Y_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_z()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_Z_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_z(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Z_OFFSET))(this, a1);
		}
		*/

		::System::Single get_xMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_XMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_xMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_XMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Single get_yMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_YMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_yMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_YMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Single get_zMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_ZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_zMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_ZMULTIPLIER_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemSimulationSpace get_space()
		{
			return ((::UnityEngine::ParticleSystemSimulationSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_SPACE_OFFSET))(this);
		}

		::System::Void set_space(::UnityEngine::ParticleSystemSimulationSpace a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemSimulationSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_SPACE_OFFSET))(this, a1);
		}

		::System::Boolean get_randomized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_RANDOMIZED_OFFSET))(this);
		}

		::System::Void set_randomized(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_RANDOMIZED_OFFSET))(this, a1);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_x_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_X_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_x_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_X_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_y_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_Y_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_y_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Y_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_z_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_Z_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_z_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Z_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_xMultiplier_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_XMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_xMultiplier_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_XMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Single get_yMultiplier_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_YMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_yMultiplier_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_YMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Single get_zMultiplier_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_zMultiplier_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ParticleSystemSimulationSpace get_space_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& a1)
		{
			return ((::UnityEngine::ParticleSystemSimulationSpace(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_SPACE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_space_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& a1, ::UnityEngine::ParticleSystemSimulationSpace a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::UnityEngine::ParticleSystemSimulationSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_SPACE_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_randomized_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_RANDOMIZED_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_randomized_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_RANDOMIZED_INJECTED_OFFSET))(a1, a2);
		}
	};
}
