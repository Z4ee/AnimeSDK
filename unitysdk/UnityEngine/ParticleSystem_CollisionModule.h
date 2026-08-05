#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x324D50)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_CollisionModule_TypeDefinitionIndex = 7735;

	struct alignas(8) ParticleSystem_CollisionModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COLLISIONMODULE__CTOR_OFFSET))(this, particleSystem);
		}
	};
}
