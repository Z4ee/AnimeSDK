#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_COLOROVERLIFETIMEMODULE_GET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CC2E0)
#define UNITYENGINE_PARTICLESYSTEM_COLOROVERLIFETIMEMODULE_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x22F1020)
#define UNITYENGINE_PARTICLESYSTEM_COLOROVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CC250)
#define UNITYENGINE_PARTICLESYSTEM_COLOROVERLIFETIMEMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x22F1000)
#define UNITYENGINE_PARTICLESYSTEM_COLOROVERLIFETIMEMODULE_SET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CC300)
#define UNITYENGINE_PARTICLESYSTEM_COLOROVERLIFETIMEMODULE_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x22F1080)
#define UNITYENGINE_PARTICLESYSTEM_COLOROVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4CC270)
#define UNITYENGINE_PARTICLESYSTEM_COLOROVERLIFETIMEMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x22F1010)
#define UNITYENGINE_PARTICLESYSTEM_COLOROVERLIFETIMEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDC0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_ColorOverLifetimeModule_TypeDefinitionIndex = 5463;

	struct alignas(8) ParticleSystem_ColorOverLifetimeModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLOROVERLIFETIMEMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLOROVERLIFETIMEMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLOROVERLIFETIMEMODULE_SET_ENABLED_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxGradient get_color()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxGradient(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLOROVERLIFETIMEMODULE_GET_COLOR_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_color(::UnityEngine::ParticleSystem_MinMaxGradient value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxGradient))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLOROVERLIFETIMEMODULE_SET_COLOR_OFFSET))(this, value);
		}
		*/

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_ColorOverLifetimeModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_ColorOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLOROVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_ColorOverLifetimeModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ColorOverLifetimeModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLOROVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_color_Injected(::UnityEngine::ParticleSystem_ColorOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxGradient& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ColorOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxGradient&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLOROVERLIFETIMEMODULE_GET_COLOR_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_color_Injected(::UnityEngine::ParticleSystem_ColorOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxGradient& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ColorOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxGradient&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLOROVERLIFETIMEMODULE_SET_COLOR_INJECTED_OFFSET))(_unity_self, value);
		}
		*/
	};
}
