#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RendererUpdateAllAsyncHandle_TypeDefinitionIndex = 6155;

	struct alignas(8) RendererUpdateAllAsyncHandle
	{
		::System::IntPtr state; // 0x10
	};
}
