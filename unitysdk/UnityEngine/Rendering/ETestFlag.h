#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ETestFlag_TypeDefinitionIndex = 35974;

	enum class ETestFlag : ::System::Int32
	{
		kEnableCharPerDrawEx_NotUse = 1,
		kEnableIRIOpt_NotUse = 2,
		kGBufferStencil = 4,
		kEnableLightInstance = 8,
		kEnableLightInstanceVoxel = 16,
		kEnableLightDraw_NotUse = 32,
		kEnableAreaLightDraw_NotUse = 64,
		kBatchDrawUsePool = 128,
		kEnableGBufferBCopy_NotUse = 256,
		kEnablePosmOpt_NotUse = 512,
		kEnableRHIDraw_NotUse = 1024,
		kEnableSkipDrawWhenLoading_NotUse = 2048,
	};
}
