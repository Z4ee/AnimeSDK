#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PixelationCBuffer_TypeDefinitionIndex = 27433;

	struct alignas(4) PixelationCBuffer
	{
		::UnityEngine::Vector4 _PixelSize; // 0x10
	};
}
