#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_PlaybackState_Seed_TypeDefinitionIndex = 5728;

	struct alignas(4) ParticleSystem_PlaybackState_Seed
	{
		::System::UInt32 x; // 0x10
		::System::UInt32 y; // 0x14
		::System::UInt32 z; // 0x18
		::System::UInt32 w; // 0x1C
	};
}
