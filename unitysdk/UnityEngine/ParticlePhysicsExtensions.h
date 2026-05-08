#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ParticleCollisionEvent.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLEPHYSICSEXTENSIONS_GETCOLLISIONEVENTS_OFFSET UNITYSDK_OFFSET(0x1BA947C0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticlePhysicsExtensions_TypeDefinitionIndex = 24896;

	class ParticlePhysicsExtensions : public ::System::Object
	{
	public:
		static ::System::Int32 GetCollisionEvents(::UnityEngine::ParticleSystem* ps, ::UnityEngine::GameObject* go, ::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>* collisionEvents)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem*, ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLEPHYSICSEXTENSIONS_GETCOLLISIONEVENTS_OFFSET))(ps, go, collisionEvents);
		}
	};
}
