#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1B236780)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_GET_PARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x1B23CE90)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B23CE70)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1B23D2B0)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B23D2A0)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1B23CFF0)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_SETRANDOMSEED_OFFSET UNITYSDK_OFFSET(0x1B23CEB0)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_SET_PARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x1B23CEA0)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1B23D1C0)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B23D2C0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ParticleControlPlayable_TypeDefinitionIndex = 35910;

	class ParticleControlPlayable : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		// static const ::System::Single kUnsetTime; // 0x0
		::UnityEngine::ParticleSystem* _particleSystem_k__BackingField; // 0x10
		::System::Single m_LastPlayableTime; // 0x18
		::System::Single m_LastParticleTime; // 0x1C
		::System::UInt32 m_RandomSeed; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ParticleControlPlayable*> Create(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::ParticleSystem* a2, ::System::UInt32 a3)
		{
			return ((::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ParticleControlPlayable*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::ParticleSystem*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_CREATE_OFFSET))(a1, a2, a3);
		}

		::UnityEngine::ParticleSystem* get_particleSystem()
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_GET_PARTICLESYSTEM_OFFSET))(this);
		}

		::System::Void set_particleSystem(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_SET_PARTICLESYSTEM_OFFSET))(this, a1);
		}

		::System::Void Initialize(::UnityEngine::ParticleSystem* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_INITIALIZE_OFFSET))(this, a1, a2);
		}

		::System::Void SetRandomSeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_SETRANDOMSEED_OFFSET))(this);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_PREPAREFRAME_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void Simulate(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_SIMULATE_OFFSET))(this, a1, a2);
		}
	};
}
