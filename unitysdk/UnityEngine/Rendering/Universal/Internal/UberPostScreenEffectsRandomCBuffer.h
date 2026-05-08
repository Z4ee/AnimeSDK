#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int UberPostScreenEffectsRandomCBuffer_TypeDefinitionIndex = 30408;

	struct alignas(4) UberPostScreenEffectsRandomCBuffer
	{
		::UnityEngine::Vector4 UberPostScreenEffectsRandomPacked0; // 0x10
	};
}
