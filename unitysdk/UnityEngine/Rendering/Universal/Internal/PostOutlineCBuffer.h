#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostOutlineCBuffer_TypeDefinitionIndex = 27336;

	struct alignas(4) PostOutlineCBuffer
	{
		::UnityEngine::Vector4 _OutlineParams1; // 0x10
		::UnityEngine::Vector4 _OutlineParams2; // 0x20
		::UnityEngine::Vector4 _OutlineParams3; // 0x30
	};
}
