#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123AC0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA90740)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123AE0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA90750)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x324D50)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_RotationOverLifetimeModule_TypeDefinitionIndex = 7731;

	struct alignas(8) ParticleSystem_RotationOverLifetimeModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_ENABLED_OFFSET))(this, value);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET))(_unity_self, value);
		}
	};
}
