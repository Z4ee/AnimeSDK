#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA790)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA44160)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA7B0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_X_OFFSET UNITYSDK_OFFSET(0xA44170)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA7D0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Y_OFFSET UNITYSDK_OFFSET(0xA441A0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA7F0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Z_OFFSET UNITYSDK_OFFSET(0xA441D0)
#define UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x2B6D10)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_ForceOverLifetimeModule_TypeDefinitionIndex = 18785;

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

		/*
		::System::Void set_x(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_X_OFFSET))(this, value);
		}
		*/

		/*
		::System::Void set_y(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Y_OFFSET))(this, value);
		}
		*/

		/*
		::System::Void set_z(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Z_OFFSET))(this, value);
		}
		*/

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		/*
		static ::System::Void set_x_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_X_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void set_y_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Y_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void set_z_Injected(::UnityEngine::ParticleSystem_ForceOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ForceOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEOVERLIFETIMEMODULE_SET_Z_INJECTED_OFFSET))(_unity_self, value);
		}
		*/
	};
}
