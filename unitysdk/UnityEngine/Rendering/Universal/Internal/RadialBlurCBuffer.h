#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int RadialBlurCBuffer_TypeDefinitionIndex = 30397;

	struct alignas(4) RadialBlurCBuffer
	{
		::UnityEngine::Vector4 _RadialBlurParams; // 0x10
		::UnityEngine::Vector4 _RadialBlurPacked0; // 0x20
		::UnityEngine::Vector4 _RadialBlurPacked1; // 0x30
		::UnityEngine::Vector4 _BloomParams; // 0x40
	};
}
