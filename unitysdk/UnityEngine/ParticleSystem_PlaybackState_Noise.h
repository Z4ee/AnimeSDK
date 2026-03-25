#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_PlaybackState_Noise_TypeDefinitionIndex = 5442;

	struct alignas(4) ParticleSystem_PlaybackState_Noise
	{
		::System::Single m_ScrollOffset; // 0x10
	};
}
