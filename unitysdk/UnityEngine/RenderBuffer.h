#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int RenderBuffer_TypeDefinitionIndex = 4109;

	struct alignas(8) RenderBuffer
	{
		::System::Int32 m_RenderTextureInstanceID; // 0x10
		::System::IntPtr m_BufferPtr; // 0x18
	};
}
