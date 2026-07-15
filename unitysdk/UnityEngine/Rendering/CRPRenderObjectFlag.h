#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPRenderObjectFlag_TypeDefinitionIndex = 35968;

	enum class CRPRenderObjectFlag : ::System::Int32
	{
		kRONone = 0,
		kROCastShadow = 1,
		kROIsStable = 2,
		kROCheckDetachable = 4,
		kROFrequencyShadow = 8,
		kROOverideCachePosition = 16,
		kROShadowProbe = 32,
		kROSelfShadow = 64,
		kROWorkSlow = 128,
		kForceDirty = 256,
		kROHide = 512,
	};
}
