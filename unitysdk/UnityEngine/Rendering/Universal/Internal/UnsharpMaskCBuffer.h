#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int UnsharpMaskCBuffer_TypeDefinitionIndex = 26967;

	struct alignas(4) UnsharpMaskCBuffer
	{
		::UnityEngine::Vector4 _UnsharpMaskParams; // 0x10
	};
}
