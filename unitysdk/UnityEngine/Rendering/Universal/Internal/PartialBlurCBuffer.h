#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PartialBlurCBuffer_TypeDefinitionIndex = 26692;

	struct alignas(4) PartialBlurCBuffer
	{
		::UnityEngine::Vector4 PartialBlurPacked0; // 0x10
	};
}
