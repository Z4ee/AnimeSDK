#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystem_PlaybackState_Seed.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_PlaybackState_Seed4_TypeDefinitionIndex = 5729;

	struct alignas(4) ParticleSystem_PlaybackState_Seed4
	{
		::UnityEngine::ParticleSystem_PlaybackState_Seed x; // 0x10
		::UnityEngine::ParticleSystem_PlaybackState_Seed y; // 0x20
		::UnityEngine::ParticleSystem_PlaybackState_Seed z; // 0x30
		::UnityEngine::ParticleSystem_PlaybackState_Seed w; // 0x40
	};
}
