#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PaniniProjectCBuffer_TypeDefinitionIndex = 30401;

	struct alignas(4) PaniniProjectCBuffer
	{
		::UnityEngine::Vector4 _Params; // 0x10
	};
}
