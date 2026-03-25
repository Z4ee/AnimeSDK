#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ParticleSystem_Particle.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEMEXTENSIONSIMPL_GETTRIGGERPARTICLES_OFFSET UNITYSDK_OFFSET(0x18A98BF0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemExtensionsImpl_TypeDefinitionIndex = 5504;

	class ParticleSystemExtensionsImpl : public ::System::Object
	{
	public:
		static ::System::Int32 GetTriggerParticles(::UnityEngine::ParticleSystem* ps, ::System::Int32 type, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem_Particle>* particles)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem*, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem_Particle>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMEXTENSIONSIMPL_GETTRIGGERPARTICLES_OFFSET))(ps, type, particles);
		}
	};
}
