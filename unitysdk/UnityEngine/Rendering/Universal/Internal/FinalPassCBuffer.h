#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int FinalPassCBuffer_TypeDefinitionIndex = 26232;

	struct alignas(4) FinalPassCBuffer
	{
		::UnityEngine::Vector4 _Grain_Params; // 0x10
		::UnityEngine::Vector4 _Grain_TilingParams; // 0x20
		::UnityEngine::Vector4 _Dithering_Params; // 0x30
	};
}
