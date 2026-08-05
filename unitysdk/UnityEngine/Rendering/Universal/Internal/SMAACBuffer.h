#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int SMAACBuffer_TypeDefinitionIndex = 27945;

	struct alignas(4) SMAACBuffer
	{
		::UnityEngine::Vector4 _Metrics; // 0x10
	};
}
