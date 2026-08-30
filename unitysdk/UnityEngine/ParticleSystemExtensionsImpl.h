#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ParticleSystem_Particle.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEMEXTENSIONSIMPL_GETTRIGGERPARTICLES_OFFSET UNITYSDK_OFFSET(0x1EDB4650)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemExtensionsImpl_TypeDefinitionIndex = 5283;

	class ParticleSystemExtensionsImpl : public ::System::Object
	{
	public:
		static ::System::Int32 GetTriggerParticles(::UnityEngine::ParticleSystem* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem_Particle>* a3)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem*, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem_Particle>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMEXTENSIONSIMPL_GETTRIGGERPARTICLES_OFFSET))(a1, a2, a3);
		}
	};
}
