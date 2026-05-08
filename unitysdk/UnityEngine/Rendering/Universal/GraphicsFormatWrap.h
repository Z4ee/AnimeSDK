#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GraphicsFormatWrap_TypeDefinitionIndex = 30267;

	struct alignas(4) GraphicsFormatWrap
	{
		::UnityEngine::Experimental::Rendering::GraphicsFormat format; // 0x10
		::System::Boolean lossyCompress; // 0x14
	};
}
