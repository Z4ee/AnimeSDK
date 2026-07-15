#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_PlaybackState_Trail_TypeDefinitionIndex = 5737;

	struct alignas(4) ParticleSystem_PlaybackState_Trail
	{
		::System::Single m_Timer; // 0x10
	};
}
