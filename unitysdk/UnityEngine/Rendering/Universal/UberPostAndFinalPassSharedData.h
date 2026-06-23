#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UberPostAndFinalPassSharedData_TypeDefinitionIndex = 26356;

	struct alignas(4) UberPostAndFinalPassSharedData
	{
		::UnityEngine::Vector4 _Dithering_Params; // 0x10
		::UnityEngine::Vector4 _Grain_TilingParams; // 0x20
		::UnityEngine::Vector4 _Grain_Params; // 0x30
	};
}
