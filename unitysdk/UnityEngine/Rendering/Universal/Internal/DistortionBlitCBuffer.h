#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DistortionBlitCBuffer_TypeDefinitionIndex = 26969;

	struct alignas(4) DistortionBlitCBuffer
	{
		::UnityEngine::Vector4 _DistortionRgbShift; // 0x10
	};
}
