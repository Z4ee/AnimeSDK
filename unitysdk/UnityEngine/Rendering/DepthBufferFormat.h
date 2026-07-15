#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DepthBufferFormat_TypeDefinitionIndex = 34132;

	enum class DepthBufferFormat : ::System::Int32
	{
		kDepthFormatNone = 0,
		kDepthFormatMin16bits_NoStencil = 1,
		kDepthFormatMin24bits_Stencil = 2,
		kDepthFormatCount = 3,
	};
}
