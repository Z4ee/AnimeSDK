#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystem_PlaybackState_Seed.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_PlaybackState_Lights_TypeDefinitionIndex = 5736;

	struct alignas(4) ParticleSystem_PlaybackState_Lights
	{
		::UnityEngine::ParticleSystem_PlaybackState_Seed m_Random; // 0x10
		::System::Single m_ParticleEmissionCounter; // 0x20
	};
}
