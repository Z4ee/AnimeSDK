#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123F30)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA90B10)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x324D50)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_VelocityOverLifetimeModule_TypeDefinitionIndex = 7723;

	struct alignas(8) ParticleSystem_VelocityOverLifetimeModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ENABLED_OFFSET))(this);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}
	};
}
