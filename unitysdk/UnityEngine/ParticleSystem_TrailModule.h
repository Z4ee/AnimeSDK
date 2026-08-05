#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123EF0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA90A90)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WORLDSPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123F10)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WORLDSPACE_OFFSET UNITYSDK_OFFSET(0xA90AA0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x324D50)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_TrailModule_TypeDefinitionIndex = 7738;

	struct alignas(8) ParticleSystem_TrailModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Boolean get_worldSpace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WORLDSPACE_OFFSET))(this);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Boolean get_worldSpace_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WORLDSPACE_INJECTED_OFFSET))(_unity_self);
		}
	};
}
