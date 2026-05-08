#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x2E5940)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_ExternalForcesModule_TypeDefinitionIndex = 24888;

	struct alignas(8) ParticleSystem_ExternalForcesModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE__CTOR_OFFSET))(this, particleSystem);
		}
	};
}
