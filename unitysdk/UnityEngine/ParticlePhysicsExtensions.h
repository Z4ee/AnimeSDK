#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ParticleSystemTriggerEventType.h"
#include "unitysdk/UnityEngine/ParticleSystem_Particle.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLEPHYSICSEXTENSIONS_GETTRIGGERPARTICLES_OFFSET UNITYSDK_OFFSET(0x18A8F1A0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticlePhysicsExtensions_TypeDefinitionIndex = 5465;

	class ParticlePhysicsExtensions : public ::System::Object
	{
	public:
		static ::System::Int32 GetTriggerParticles(::UnityEngine::ParticleSystem* ps, ::UnityEngine::ParticleSystemTriggerEventType type, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem_Particle>* particles)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem*, ::UnityEngine::ParticleSystemTriggerEventType, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem_Particle>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLEPHYSICSEXTENSIONS_GETTRIGGERPARTICLES_OFFSET))(ps, type, particles);
		}
	};
}
