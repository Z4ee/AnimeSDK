#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int GaussianDepthOfFieldCBuffer_TypeDefinitionIndex = 26866;

	struct alignas(4) GaussianDepthOfFieldCBuffer
	{
		::UnityEngine::Vector4 _CoCParams; // 0x10
		::UnityEngine::Vector4 _BaseZeroRadius; // 0x20
	};
}
