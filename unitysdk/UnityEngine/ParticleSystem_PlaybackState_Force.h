#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystem_PlaybackState_Seed4.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_PlaybackState_Force_TypeDefinitionIndex = 5733;

	struct alignas(4) ParticleSystem_PlaybackState_Force
	{
		::UnityEngine::ParticleSystem_PlaybackState_Seed4 m_Random; // 0x10
	};
}
