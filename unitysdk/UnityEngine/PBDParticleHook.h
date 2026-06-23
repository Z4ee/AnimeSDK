#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Transform; }

namespace UnityEngine
{
	inline static constexpr unsigned int PBDParticleHook_TypeDefinitionIndex = 18746;

	struct alignas(8) PBDParticleHook
	{
		::UnityEngine::Transform* target; // 0x10
		::System::UInt32 particleIndex; // 0x18
		::System::Single blendWeight; // 0x1C
		::System::Boolean worldSpace; // 0x20
	};
}
