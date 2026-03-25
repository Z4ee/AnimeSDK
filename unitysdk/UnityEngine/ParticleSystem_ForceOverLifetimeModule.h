#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemSimulationSpace.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92E80)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x2120140)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_RANDOMIZED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93110)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_RANDOMIZED_OFFSET UNITYSDK_OFFSET(0x2120330)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_SPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A930D0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_SPACE_OFFSET UNITYSDK_OFFSET(0x2120310)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93010)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x21202B0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92EF0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_X_OFFSET UNITYSDK_OFFSET(0x2120160)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93050)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x21202D0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92F60)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_Y_OFFSET UNITYSDK_OFFSET(0x21201D0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93090)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x21202F0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92FD0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_Z_OFFSET UNITYSDK_OFFSET(0x2120240)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92EA0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x2120150)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_RANDOMIZED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93130)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_RANDOMIZED_OFFSET UNITYSDK_OFFSET(0x2120340)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_SPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A930F0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_SPACE_OFFSET UNITYSDK_OFFSET(0x2120320)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93030)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x21202C0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92F10)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_X_OFFSET UNITYSDK_OFFSET(0x21201A0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A93070)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x21202E0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92F80)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Y_OFFSET UNITYSDK_OFFSET(0x2120210)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A930B0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2120300)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A92FF0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Z_OFFSET UNITYSDK_OFFSET(0x2120280)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_ForceOverLifetimeModule_TypeDefinitionIndex = 5451;

	struct alignas(8) ParticleSystem_ForceOverLifetimeModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_ENABLED_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_x()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_X_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_x(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_X_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_y()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_Y_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_y(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Y_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_z()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_Z_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_z(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Z_OFFSET))(this, value);
		}
		*/

		::System::Single get_xMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_XMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_xMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_XMULTIPLIER_OFFSET))(this, value);
		}

		::System::Single get_yMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_YMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_yMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_YMULTIPLIER_OFFSET))(this, value);
		}

		::System::Single get_zMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_ZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_zMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_ZMULTIPLIER_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemSimulationSpace get_space()
		{
			return ((::UnityEngine::ParticleSystemSimulationSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_SPACE_OFFSET))(this);
		}

		::System::Void set_space(::UnityEngine::ParticleSystemSimulationSpace value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemSimulationSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_SPACE_OFFSET))(this, value);
		}

		::System::Boolean get_randomized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_RANDOMIZED_OFFSET))(this);
		}

		::System::Void set_randomized(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_RANDOMIZED_OFFSET))(this, value);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_x_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_X_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_x_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_X_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void get_y_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_Y_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_y_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Y_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void get_z_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_Z_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_z_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Z_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_xMultiplier_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_XMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_xMultiplier_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_XMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_yMultiplier_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_YMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_yMultiplier_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_YMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_zMultiplier_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_zMultiplier_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::ParticleSystemSimulationSpace get_space_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& _unity_self)
		{
			return ((::UnityEngine::ParticleSystemSimulationSpace(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_SPACE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_space_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystemSimulationSpace value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::UnityEngine::ParticleSystemSimulationSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_SPACE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_randomized_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_RANDOMIZED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_randomized_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_RANDOMIZED_INJECTED_OFFSET))(_unity_self, value);
		}
	};
}
